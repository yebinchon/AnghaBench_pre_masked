
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_mem_pool_t ;
struct TYPE_8__ {int len; int base; int * member_0; } ;
typedef TYPE_2__ h2o_iovec_t ;
struct TYPE_9__ {size_t size; TYPE_1__* entries; } ;
typedef TYPE_3__ h2o_headers_t ;
struct TYPE_7__ {int value; int * name; } ;


 int FUNC_0 (char*) ;
 TYPE_2__ FUNC_1 (int *,TYPE_2__,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(h2o_mem_pool_t *VAR_0, h2o_headers_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
    size_t VAR_4;
    h2o_iovec_t VAR_5 = {((void*)0)};

    for (VAR_4 = 0; VAR_4 != VAR_1->size; ++VAR_4) {
        VAR_5 = FUNC_1(VAR_0, VAR_5, *VAR_1->entries[VAR_4].name, FUNC_2(FUNC_0(": ")),
                               VAR_1->entries[VAR_4].value, FUNC_2(FUNC_0("\n")));
    }

    return FUNC_3(VAR_5.base, VAR_5.len, VAR_2, VAR_3);
}
