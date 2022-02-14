
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_9__ {TYPE_2__* entries; } ;
struct TYPE_8__ {TYPE_5__ headers; } ;
typedef TYPE_3__ h2o_req_t ;
struct TYPE_6__ {int len; int base; } ;
struct TYPE_7__ {TYPE_1__ value; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(h2o_req_t *VAR_2)
{
    ssize_t VAR_3 = FUNC_1(&VAR_2->headers, VAR_0, -1);
    if (VAR_3 == -1)
        return 0;
    if (FUNC_2(VAR_2->headers.entries[VAR_3].value.base, VAR_2->headers.entries[VAR_3].value.len, FUNC_0("; MSIE ")) ==
        VAR_1)
        return 0;
    return 1;
}
