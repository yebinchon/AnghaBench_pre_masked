
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t size; TYPE_1__* entries; } ;
struct TYPE_8__ {TYPE_2__ elements; } ;
typedef TYPE_3__ h2o_logconf_t ;
struct TYPE_9__ {size_t len; int* base; } ;
typedef TYPE_4__ h2o_iovec_t ;
struct TYPE_6__ {int magically_quoted_json; TYPE_4__ suffix; } ;



__attribute__((used)) static int FUNC_0(h2o_logconf_t *VAR_0, char *VAR_1)
{
    size_t VAR_2;
    int VAR_3 = '\0';
    int VAR_4 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_0->elements.size; ++VAR_2) {
        h2o_iovec_t VAR_5 = VAR_0->elements.entries[VAR_2].suffix;
        VAR_0->elements.entries[VAR_2].magically_quoted_json = VAR_4 && VAR_5.len != 0 && VAR_5.base[0] == VAR_3;

        VAR_4 = 0;

        size_t VAR_6;
        for (VAR_6 = 0; VAR_6 < VAR_5.len; ++VAR_6) {
            VAR_4 = 0;
            if (VAR_3 != '\0') {
                if (VAR_3 == VAR_5.base[VAR_6]) {

                    size_t VAR_7, VAR_8 = 0;
                    for (VAR_7 = VAR_6; VAR_7 != 0; ++VAR_8)
                        if (VAR_5.base[--VAR_7] != '\\')
                            break;
                    if (VAR_8 % 2 == 0)
                        VAR_3 = '\0';
                }
            } else {
                if (VAR_5.base[VAR_6] == '"' || VAR_5.base[VAR_6] == '\'') {
                    VAR_3 = VAR_5.base[VAR_6];
                    VAR_4 = 1;
                }
            }
        }
    }

    return 1;
}
