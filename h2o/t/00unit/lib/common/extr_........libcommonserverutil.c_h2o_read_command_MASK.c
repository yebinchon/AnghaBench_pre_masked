
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
typedef int pid_t ;
struct TYPE_8__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;
struct TYPE_9__ {int size; } ;
typedef TYPE_2__ h2o_buffer_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_2__**,int *) ;
 TYPE_1__ FUNC_4 (TYPE_2__**,int) ;
 int VAR_5 ;
 int FUNC_5 (char const*,char**,int*,int) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (int,int*,int ) ;

int FUNC_11(const char *VAR_6, char **VAR_7, h2o_buffer_t **VAR_8, int *VAR_9)
{
    int VAR_10[2] = {-1, -1};
    pid_t VAR_11 = -1;
    int VAR_12 = 0, VAR_13 = -1;

    FUNC_3(VAR_8, &VAR_5);

    FUNC_7(&VAR_3);
    VAR_12 = 1;


    if (FUNC_6(VAR_10) != 0)
        goto Exit;
    if (FUNC_1(VAR_10[0], VAR_1, VAR_2) < 0)
        goto Exit;


    int VAR_14[] = {VAR_10[1], 1,
                        -1};
    if ((VAR_11 = FUNC_5(VAR_6, VAR_7, VAR_14, 1)) == -1)
        goto Exit;
    FUNC_0(VAR_10[1]);
    VAR_10[1] = -1;

    FUNC_8(&VAR_3);
    VAR_12 = 0;


    while (1) {
        h2o_iovec_t VAR_15 = FUNC_4(VAR_8, 8192);
        ssize_t VAR_16;
        while ((VAR_16 = FUNC_9(VAR_10[0], VAR_15.base, VAR_15.len)) == -1 && VAR_4 == VAR_0)
            ;
        if (VAR_16 <= 0)
            break;
        (*VAR_8)->size += VAR_16;
    }

Exit:
    if (VAR_12)
        FUNC_8(&VAR_3);
    if (VAR_11 != -1) {

        pid_t VAR_17;
        while ((VAR_17 = FUNC_10(VAR_11, VAR_9, 0)) == -1 && VAR_4 == VAR_0)
            ;
        if (VAR_17 == VAR_11) {

            VAR_13 = 0;
        }
    }
    if (VAR_10[0] != -1)
        FUNC_0(VAR_10[0]);
    if (VAR_10[1] != -1)
        FUNC_0(VAR_10[1]);
    if (VAR_13 != 0)
        FUNC_2(VAR_8);

    return VAR_13;
}
