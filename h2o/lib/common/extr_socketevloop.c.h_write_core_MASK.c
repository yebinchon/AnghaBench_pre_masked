
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iovec {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,struct iovec*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_4, h2o_iovec_t **VAR_5, size_t *VAR_6, size_t *VAR_7)
{
    int VAR_8;
    ssize_t VAR_9;

    *VAR_7 = 0;

    while (*VAR_6 != 0) {

        VAR_8 = VAR_2;
        if (*VAR_6 < VAR_8)
            VAR_8 = (int)*VAR_6;
        while ((VAR_9 = FUNC_1(VAR_4, (struct iovec *)*VAR_5, VAR_8)) == -1 && VAR_3 == VAR_1)
            ;
        if (VAR_9 == -1) {
            if (VAR_3 != VAR_0)
                return -1;
            break;
        }

        while ((*VAR_5)->len < VAR_9) {
            VAR_9 -= (*VAR_5)->len;
            ++*VAR_5;
            --*VAR_6;
            --VAR_8;
        }
        FUNC_0(VAR_8 > 0);
        if ((*VAR_5)->len == VAR_9) {
            ++*VAR_5;
            --*VAR_6;
            if (--VAR_8 != 0)
                break;
        } else {
            *VAR_7 = VAR_9;
            break;
        }
    }

    return 0;
}
