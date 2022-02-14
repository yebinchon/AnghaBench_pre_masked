
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int endianess ;
typedef int algoType ;
typedef int U32 ;


 int FUNC_0 (char const**,int,int) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (char const**,int,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char const* const) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (char const* const) ;
 int VAR_2 ;
 int FUNC_9 (char const**,int,int ,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* FUNC_10 (char const**) ;
 int VAR_7 ;
 int FUNC_11 (char const*,char*) ;
 int * FUNC_12 (char const* const,char*) ;
 int FUNC_13 (char const* const) ;

int FUNC_14(int VAR_8, const char** VAR_9)
{
    int VAR_10, VAR_11 = 0;
    const char* const VAR_12 = VAR_9[0];
    U32 VAR_13 = 0;
    U32 VAR_14 = 0;
    U32 VAR_15 = 0;
    U32 VAR_16 = 0;
    U32 VAR_17 = 0;
    U32 VAR_18 = 0;
    U32 VAR_19 = 0;
    size_t VAR_20 = VAR_0;
    algoType VAR_21 = VAR_3;
    endianess VAR_22 = VAR_2;


    if (FUNC_12(VAR_12, "xxh32sum") != ((void*)0)) VAR_21 = VAR_1;

    for(VAR_10=1; VAR_10<VAR_8; VAR_10++) {
        const char* VAR_23 = VAR_9[VAR_10];

        if(!VAR_23) continue;

        if (!FUNC_11(VAR_23, "--little-endian")) { VAR_22 = VAR_6; continue; }
        if (!FUNC_11(VAR_23, "--check")) { VAR_14 = 1; continue; }
        if (!FUNC_11(VAR_23, "--strict")) { VAR_15 = 1; continue; }
        if (!FUNC_11(VAR_23, "--status")) { VAR_16 = 1; continue; }
        if (!FUNC_11(VAR_23, "--quiet")) { VAR_18 = 1; continue; }
        if (!FUNC_11(VAR_23, "--warn")) { VAR_17 = 1; continue; }
        if (!FUNC_11(VAR_23, "--help")) { return FUNC_13(VAR_12); }
        if (!FUNC_11(VAR_23, "--version")) { FUNC_4(FUNC_7(VAR_12)); return 0; }

        if (*VAR_23!='-') {
            if (VAR_11==0) VAR_11=VAR_10;
            continue;
        }


        VAR_23++;

        while (*VAR_23!=0) {
            switch(*VAR_23)
            {

            case 'V':
                FUNC_4(FUNC_7(VAR_12)); return 0;


            case 'h':
                return FUNC_13(VAR_12);


            case 'H':
                VAR_21 = (algoType)(VAR_23[1] - '0');
                VAR_23+=2;
                break;


            case 'c':
                VAR_14=1;
                VAR_23++;
                break;


            case 'w':
                VAR_17=1;
                VAR_23++;
                break;


            case 'b':
                VAR_23++;
                VAR_13 = 1;
                VAR_19 = FUNC_10(&VAR_23);
                break;


            case 'i':
                VAR_23++;
                VAR_5 = FUNC_10(&VAR_23);
                break;


            case 'B':
                VAR_23++;
                VAR_20 = FUNC_10(&VAR_23);
                break;


            case 'q':
                VAR_23++;
                VAR_4--;
                break;

            default:
                return FUNC_8(VAR_12);
            }
        }
    }


    if (VAR_13) {
        FUNC_5(2, FUNC_7(VAR_12) );
        FUNC_3();
        if (VAR_11==0) return FUNC_1(VAR_20, VAR_19);
        return FUNC_0(VAR_9+VAR_11, VAR_8-VAR_11, VAR_19);
    }


    if ( (VAR_11==0) && FUNC_6(VAR_7) ) return FUNC_8(VAR_12);

    if (VAR_11==0) VAR_11 = VAR_8;
    if (VAR_14) {
        return FUNC_9(VAR_9+VAR_11, VAR_8-VAR_11,
                          VAR_22, VAR_15, VAR_16, VAR_17, VAR_18);
    } else {
        return FUNC_2(VAR_9+VAR_11, VAR_8-VAR_11, VAR_21, VAR_22);
    }
}
