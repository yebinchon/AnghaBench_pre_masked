
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_6__ {scalar_t__ size; TYPE_3__* entries; } ;
typedef TYPE_2__ h2o_headers_t ;
struct TYPE_7__ {TYPE_1__* name; } ;
typedef TYPE_3__ h2o_header_t ;
struct TYPE_5__ {int len; int base; } ;


 scalar_t__ FUNC_0 (int ,int ,char const*,size_t) ;

ssize_t FUNC_1(const h2o_headers_t *VAR_0, const char *VAR_1, size_t VAR_2, ssize_t VAR_3)
{
    for (++VAR_3; VAR_3 < VAR_0->size; ++VAR_3) {
        h2o_header_t *VAR_4 = VAR_0->entries + VAR_3;
        if (FUNC_0(VAR_4->name->base, VAR_4->name->len, VAR_1, VAR_2)) {
            return VAR_3;
        }
    }
    return -1;
}
