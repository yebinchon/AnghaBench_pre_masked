
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_8__ {int * entries; } ;
typedef TYPE_1__ h2o_headers_t ;
struct TYPE_9__ {TYPE_3__* name; } ;
typedef TYPE_2__ h2o_headers_command_t ;
typedef int h2o_header_t ;
struct TYPE_10__ {int len; int base; } ;


 int FUNC_0 (TYPE_1__*,void*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static h2o_header_t *FUNC_3(h2o_headers_t *VAR_0, h2o_headers_command_t *VAR_1)
{
    ssize_t VAR_2;

    if (FUNC_2(VAR_1->name)) {
        VAR_2 = FUNC_0(VAR_0, (void *)VAR_1->name, -1);
    } else {
        VAR_2 = FUNC_1(VAR_0, VAR_1->name->base, VAR_1->name->len, -1);
    }
    if (VAR_2 == -1)
        return ((void*)0);
    return VAR_0->entries + VAR_2;
}
