
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
typedef int h2o_token_t ;
struct TYPE_9__ {TYPE_2__* entries; } ;
struct TYPE_8__ {TYPE_4__ headers; } ;
typedef TYPE_3__ h2o_res_t ;
struct TYPE_6__ {int len; int base; } ;
struct TYPE_7__ {TYPE_1__ value; } ;


 int FUNC_0 (TYPE_4__*,int const*,int) ;
 int FUNC_1 (int ,int ,char const*,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(h2o_res_t *VAR_0, const h2o_token_t *VAR_1, const char *VAR_2)
{
    ssize_t VAR_3 = FUNC_0(&VAR_0->headers, VAR_1, -1);
    if (VAR_3 == -1)
        return 0;
    return FUNC_1(VAR_0->headers.entries[VAR_3].value.base, VAR_0->headers.entries[VAR_3].value.len, VAR_2, FUNC_2(VAR_2));
}
