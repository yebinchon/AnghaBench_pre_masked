
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v_enc ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int ptls_aead_context_t ;
typedef int h ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (scalar_t__*,int ,size_t) ;
 size_t FUNC_4 (int *,scalar_t__*,scalar_t__*,size_t,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__*,int) ;
 size_t FUNC_7 (int *,scalar_t__*,scalar_t__*,size_t) ;

__attribute__((used)) static int FUNC_8(ptls_aead_context_t *VAR_4, ptls_aead_context_t *VAR_5, size_t VAR_6, size_t VAR_7, uint64_t *VAR_8, uint64_t *VAR_9,
                     uint64_t *VAR_10)
{
    int VAR_11 = 0;
    uint8_t *VAR_12 = ((void*)0);
    uint8_t *VAR_13[VAR_0];
    uint8_t *VAR_14 = ((void*)0);
    uint64_t VAR_15[4];

    *VAR_8 = 0;
    *VAR_9 = 0;
    *VAR_10 = 0;

    FUNC_3(VAR_13, 0, sizeof(VAR_13));
    FUNC_3(VAR_15, 0, sizeof(VAR_15));
    VAR_12 = (uint8_t *)FUNC_2(VAR_7);
    VAR_14 = (uint8_t *)FUNC_2(VAR_7);
    if (VAR_12 == ((void*)0) || VAR_14 == ((void*)0)) {
        VAR_11 = VAR_2;
    }

    for (size_t VAR_16 = 0; VAR_11 == 0 && VAR_16 < VAR_0; VAR_16++) {
        VAR_13[VAR_16] = (uint8_t *)FUNC_2(VAR_7 + VAR_3);
        if (VAR_13[VAR_16] == 0) {
            VAR_11 = VAR_2;
        }
    }

    if (VAR_11 == 0) {
        FUNC_3(VAR_12, 0, VAR_7);

        for (size_t VAR_17 = 0; VAR_17 < VAR_6;) {
            size_t VAR_18;
            size_t VAR_19;
            size_t VAR_20 = ((VAR_6 - VAR_17) > VAR_0) ? VAR_0 : VAR_6 - VAR_17;
            uint64_t VAR_21 = VAR_15[0];
            uint64_t VAR_22 = FUNC_0();
            uint64_t VAR_23;
            uint64_t VAR_24;

            for (size_t VAR_25 = 0; VAR_25 < VAR_20; VAR_25++) {
                VAR_15[0]++;

                FUNC_6(VAR_4, VAR_15[0], VAR_15, sizeof(VAR_15));
                VAR_18 = FUNC_7(VAR_4, VAR_13[VAR_25], VAR_12, VAR_7);
                VAR_18 += FUNC_5(VAR_4, VAR_13[VAR_25] + VAR_18);

                *VAR_10 += (VAR_13[VAR_25])[VAR_7];
            }

            VAR_23 = FUNC_0();

            VAR_15[0] = VAR_21;

            for (size_t VAR_26 = 0; VAR_26 < VAR_20; VAR_26++) {
                VAR_15[0]++;

                VAR_19 = FUNC_4(VAR_5, VAR_14, VAR_13[VAR_26], VAR_18, VAR_15[0], VAR_15, sizeof(VAR_15));
                if (VAR_19 != VAR_7) {
                    VAR_11 = VAR_1;
                    break;
                }
                *VAR_10 += VAR_14[0];
            }

            VAR_24 = FUNC_0();

            *VAR_8 += VAR_23 - VAR_22;
            *VAR_9 += VAR_24 - VAR_23;

            VAR_17 += VAR_20;
        }
    }

    if (VAR_12 != ((void*)0)) {
        FUNC_1(VAR_12);
    }

    for (size_t VAR_27 = 0; VAR_27 < VAR_0; VAR_27++) {
        if (VAR_13[VAR_27] != ((void*)0)) {
            FUNC_1(VAR_13[VAR_27]);
        }
    }

    if (VAR_14 != ((void*)0)) {
        FUNC_1(VAR_14);
    }

    return VAR_11;
}
