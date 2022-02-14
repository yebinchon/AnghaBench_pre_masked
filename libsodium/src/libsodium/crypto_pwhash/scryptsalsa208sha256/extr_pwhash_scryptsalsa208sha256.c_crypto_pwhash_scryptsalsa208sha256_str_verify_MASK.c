
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int escrypt_local_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int const*,size_t,int const*,int *,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char const*,int) ;

int
FUNC_7(
    const char VAR_1[VAR_0],
    const char *const VAR_2, unsigned long long VAR_3)
{
    char VAR_4[VAR_0];
    escrypt_local_t VAR_5;
    int VAR_6 = -1;

    if (FUNC_6(VAR_1, VAR_0) !=
        VAR_0 - 1U) {
        return -1;
    }
    if (FUNC_1(&VAR_5) != 0) {
        return -1;
    }
    FUNC_3(VAR_4, 0, sizeof VAR_4);
    if (FUNC_2(&VAR_5, (const uint8_t *) VAR_2, (size_t) VAR_3,
                  (const uint8_t *) VAR_1, (uint8_t *) VAR_4,
                  sizeof VAR_4) == ((void*)0)) {
        FUNC_0(&VAR_5);
        return -1;
    }
    FUNC_0(&VAR_5);
    VAR_6 = FUNC_4(VAR_4, VAR_1, sizeof VAR_4);
    FUNC_5(VAR_4, sizeof VAR_4);

    return VAR_6;
}
