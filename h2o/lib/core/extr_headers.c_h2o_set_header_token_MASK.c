
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_10__ {int buf; } ;
typedef TYPE_1__ h2o_token_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_11__ {size_t size; TYPE_3__* entries; } ;
typedef TYPE_2__ h2o_headers_t ;
struct TYPE_13__ {int len; int base; } ;
struct TYPE_12__ {TYPE_6__ value; int * name; } ;
typedef TYPE_3__ h2o_header_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_1__ const*,int *,char const*,size_t) ;
 TYPE_6__ FUNC_2 (int *,TYPE_6__,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,char const*,size_t,char) ;
 int FUNC_4 (char const*,...) ;

ssize_t FUNC_5(h2o_mem_pool_t *VAR_0, h2o_headers_t *VAR_1, const h2o_token_t *VAR_2, const char *VAR_3,
                             size_t VAR_4)
{
    ssize_t VAR_5 = -1;
    size_t VAR_6;
    for (VAR_6 = 0; VAR_6 != VAR_1->size; ++VAR_6) {
        if (VAR_1->entries[VAR_6].name == &VAR_2->buf) {
            if (FUNC_3(VAR_1->entries[VAR_6].value.base, VAR_1->entries[VAR_6].value.len, VAR_3, VAR_4, ','))
                return -1;
            VAR_5 = VAR_6;
        }
    }
    if (VAR_5 != -1) {
        h2o_header_t *VAR_7 = VAR_1->entries + VAR_5;
        VAR_7->value = FUNC_2(VAR_0, VAR_7->value, FUNC_4(FUNC_0(", ")), FUNC_4(VAR_3, VAR_4));
        return VAR_5;
    } else {
        return FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_3, VAR_4);
    }
}
