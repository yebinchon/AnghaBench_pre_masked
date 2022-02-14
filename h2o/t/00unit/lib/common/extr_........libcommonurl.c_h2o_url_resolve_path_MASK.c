
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t len; char* base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 TYPE_1__ FUNC_0 (char*,size_t) ;

void FUNC_1(h2o_iovec_t *VAR_0, h2o_iovec_t *VAR_1)
{
    size_t VAR_2 = VAR_0->len, VAR_3 = 0;

    if (VAR_1->len != 0 && VAR_1->base[0] == '/') {
        VAR_2 = 0;
    } else {

        while (VAR_0->base[--VAR_2] != '/')
            ;
        while (VAR_3 != VAR_1->len) {
            if (VAR_1->base[VAR_3] == '.') {
                if (VAR_1->len - VAR_3 >= 2 && VAR_1->base[VAR_3 + 1] == '.' &&
                    (VAR_1->len - VAR_3 == 2 || VAR_1->base[VAR_3 + 2] == '/')) {
                    if (VAR_2 != 0) {
                        while (VAR_0->base[--VAR_2] != '/')
                            ;
                    }
                    VAR_3 += VAR_1->len - VAR_3 == 2 ? 2 : 3;
                    continue;
                }
                if (VAR_1->len - VAR_3 == 1) {
                    VAR_3 += 1;
                    continue;
                } else if (VAR_1->base[VAR_3 + 1] == '/') {
                    VAR_3 += 2;
                    continue;
                }
            }
            break;
        }
        VAR_2 += 1;
    }

    VAR_0->len = VAR_2;
    *VAR_1 = FUNC_0(VAR_1->base + VAR_3, VAR_1->len - VAR_3);
}
