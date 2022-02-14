
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* receiving; } ;
struct st_fcgi_generator_t {size_t leftsize; TYPE_1__ resp; } ;
struct TYPE_6__ {int * base; } ;
typedef TYPE_2__ h2o_iovec_t ;
struct TYPE_7__ {size_t size; } ;


 size_t VAR_0 ;
 TYPE_2__ FUNC_0 (TYPE_4__**,size_t) ;
 int FUNC_1 (int *,void const*,size_t) ;

__attribute__((used)) static int FUNC_2(struct st_fcgi_generator_t *VAR_1, const void *VAR_2, size_t VAR_3)
{

    if (VAR_1->leftsize != VAR_0) {
        if (VAR_1->leftsize < VAR_3) {
            VAR_3 = VAR_1->leftsize;
            if (VAR_3 == 0)
                return 0;
        }
        VAR_1->leftsize -= VAR_3;
    }
    h2o_iovec_t VAR_4 = FUNC_0(&VAR_1->resp.receiving, VAR_3);
    if (VAR_4.base == ((void*)0)) {
        return -1;
    }
    FUNC_1(VAR_4.base, VAR_2, VAR_3);
    VAR_1->resp.receiving->size += VAR_3;
    return 0;
}
