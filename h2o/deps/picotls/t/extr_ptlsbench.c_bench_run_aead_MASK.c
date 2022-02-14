
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int secret ;
typedef int ptls_hash_algorithm_t ;
typedef int ptls_aead_context_t ;
typedef int ptls_aead_algorithm_t ;
typedef int p_version ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (scalar_t__,size_t,size_t) ;
 int FUNC_1 (int *,int *,size_t,size_t,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *,char,int) ;
 int FUNC_3 (char*,char*,char*,int,char*,int,char const*,char*,char const*,int,int,int,int,double,double) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,int,int *,int *) ;
 int FUNC_6 (char*,char*,int,int,int,char) ;
 int FUNC_7 (char*,int,char*,int,int,int,char) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(char * VAR_4, char * VAR_5, int VAR_6, uint64_t VAR_7, const char *VAR_8, const char *VAR_9, ptls_aead_algorithm_t *VAR_10, ptls_hash_algorithm_t *VAR_11, size_t VAR_12, size_t VAR_13, uint64_t *VAR_14)
{
    int VAR_15 = 0;

    uint8_t VAR_16[VAR_3];
    ptls_aead_context_t *VAR_17;
    ptls_aead_context_t *VAR_18;
    uint64_t VAR_19 = 0;
    uint64_t VAR_20 = 0;
    char VAR_21[128];


    VAR_21[0] = 0;

    if (FUNC_8(VAR_8, "openssl") == 0) {




        uint32_t VAR_22 = VAR_1;
        int VAR_23 = VAR_22 >> 28;
        int VAR_24 = (VAR_22 >> 20) & 0xFF;
        int VAR_25 = (VAR_22 >> 12) & 0xFF;
        int VAR_26 = (VAR_22 >> 4) & 0xFF;
        char VAR_27 = 'a' - 1 + VAR_26;




        (void)FUNC_6(VAR_21, "%d.%d.%d%c", VAR_23, VAR_24, VAR_25, VAR_27);

    }

    *VAR_14 += VAR_7;

    FUNC_2(VAR_16, 'z', sizeof(VAR_16));
    VAR_17 = FUNC_5(VAR_10, VAR_11, 1, VAR_16, ((void*)0));
    VAR_18 = FUNC_5(VAR_10, VAR_11, 0, VAR_16, ((void*)0));

    if (VAR_17 == ((void*)0) || VAR_18 == ((void*)0)) {
        VAR_15 = VAR_2;
    } else {
        VAR_15 = FUNC_1(VAR_17, VAR_18, VAR_12, VAR_13, &VAR_19, &VAR_20, VAR_14);
        if (VAR_15 == 0) {
            FUNC_3("%s, %s, %d, %s, %d, %s, %s, %s, %d, %d, %d, %d, %.2f, %.2f\n", VAR_4, VAR_5, (int)(8 * sizeof(size_t)), VAR_0, VAR_6,
                   VAR_8, VAR_21, VAR_9, (int)VAR_12, (int)VAR_13, (int)VAR_19, (int)VAR_20, FUNC_0(VAR_19, VAR_13, VAR_12),
                   FUNC_0(VAR_20, VAR_13, VAR_12));
        }
    }

    if (VAR_17) {
        FUNC_4(VAR_17);
    }

    if (VAR_18) {
        FUNC_4(VAR_18);
    }

    return VAR_15;
}
