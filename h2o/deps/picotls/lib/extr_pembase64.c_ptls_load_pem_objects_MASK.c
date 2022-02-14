
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
struct TYPE_8__ {scalar_t__ off; int base; scalar_t__ is_allocated; } ;
typedef TYPE_2__ ptls_buffer_t ;
typedef scalar_t__ errno_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (int **,char const*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 int FUNC_5 (int *,char const*,TYPE_2__*) ;

int FUNC_6(char const *VAR_1, const char *VAR_2, ptls_iovec_t *VAR_3, size_t VAR_4, size_t *VAR_5)
{
    FILE *VAR_6;
    int VAR_7 = 0;
    size_t VAR_8 = 0;






    VAR_6 = FUNC_1(VAR_1, "r");
    if (VAR_6 == ((void*)0)) {
        VAR_7 = -1;
    }


    *VAR_5 = 0;

    if (VAR_7 == 0) {
        while (VAR_8 < VAR_4) {
            ptls_buffer_t VAR_9;

            FUNC_4(&VAR_9, "", 0);

            VAR_7 = FUNC_5(VAR_6, VAR_2, &VAR_9);

            if (VAR_7 == 0) {
                if (VAR_9.off > 0 && VAR_9.is_allocated) {
                    VAR_3[VAR_8].base = VAR_9.base;
                    VAR_3[VAR_8].len = VAR_9.off;
                    VAR_8++;
                } else {
                    FUNC_3(&VAR_9);
                }
            } else {
                FUNC_3(&VAR_9);
                break;
            }
        }
    }

    if (VAR_7 == VAR_0 && VAR_8 > 0) {
        VAR_7 = 0;
    }

    *VAR_5 = VAR_8;

    if (VAR_6 != ((void*)0)) {
        FUNC_0(VAR_6);
    }

    return VAR_7;
}
