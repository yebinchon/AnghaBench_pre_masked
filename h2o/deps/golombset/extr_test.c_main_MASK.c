
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int keys ;
typedef int buf ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int,unsigned char*,size_t,int*,size_t*) ;
 scalar_t__ FUNC_2 (int,int*,size_t const,unsigned char*,size_t*) ;
 scalar_t__ FUNC_3 (int*,int*,int) ;
 int FUNC_4 (char*,size_t const,size_t) ;
 int VAR_0 ;

int FUNC_5(int VAR_1, char **VAR_2)
{
    uint64_t VAR_3[] = {151, 192, 208, 269, 461, 512, 526, 591, 662, 806, 831, 866, 890,
                       997, 1005, 1017, 1134, 1207, 1231, 1327, 1378, 1393, 1418, 1525, 1627, 1630};
    const size_t VAR_4 = sizeof(VAR_3) / sizeof(VAR_3[0]);
    unsigned char VAR_5[1024];
    size_t VAR_6 = sizeof(VAR_5);

    if (FUNC_2(6, VAR_3, VAR_4, VAR_5, &VAR_6) != 0) {
        FUNC_0(VAR_0, "golombset_encode failed\n");
        return 111;
    }
    FUNC_4("encoded %zu entries into %zu bytes\n", VAR_4, VAR_6);

    uint64_t VAR_7[VAR_4];
    size_t VAR_8 = VAR_4;
    if (FUNC_1(6, VAR_5, VAR_6, VAR_7, &VAR_8) != 0) {
        FUNC_0(VAR_0, "golombset_decode failed\n");
        return 111;
    }

    if (VAR_8 != VAR_4) {
        FUNC_0(VAR_0, "unexpected number of outputs\n");
        return 111;
    }
    if (FUNC_3(VAR_3, VAR_7, sizeof(VAR_3[0]) * VAR_4) != 0) {
        FUNC_0(VAR_0, "output mismatch\n");
        return 111;
    }

    return 0;
}
