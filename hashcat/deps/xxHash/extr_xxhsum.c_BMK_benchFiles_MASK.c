
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int FILE ;


 int FUNC_0 (void* const,size_t const,int ) ;
 size_t FUNC_1 (char const* const) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*,char const* const) ;
 scalar_t__ FUNC_4 (size_t const,int) ;
 int FUNC_5 (int * const) ;
 int * FUNC_6 (char const* const,char*) ;
 size_t FUNC_7 (void* const,int,size_t const,int * const) ;
 int FUNC_8 (char* const) ;

__attribute__((used)) static int FUNC_9(const char** VAR_0, int VAR_1, U32 VAR_2)
{
    int VAR_3 = 0;
    int VAR_4;

    for (VAR_4=0; VAR_4<VAR_1; VAR_4++) {
        const char* const VAR_5 = VAR_0[VAR_4];
        FILE* const VAR_6 = FUNC_6( VAR_5, "rb" );
        size_t const VAR_7 = FUNC_1(VAR_5);
        char* const VAR_8 = (char*)FUNC_4(VAR_7+16+3, 1);
        void* const VAR_9 = (VAR_8+15) - (((size_t)(VAR_8+15)) & 0xF);


        if ((VAR_6==((void*)0)) || (VAR_5==((void*)0))) {
            FUNC_2("Pb opening %s\n", VAR_5);
            FUNC_8(VAR_8);
            return 11;
        }
        if(!VAR_8) {
            FUNC_2("\nError: not enough memory!\n");
            FUNC_5(VAR_6);
            return 12;
        }


        FUNC_3(1, "\rLoading %s...        \n", VAR_5);
        { size_t const VAR_10 = FUNC_7(VAR_9, 1, VAR_7, VAR_6);
            FUNC_5(VAR_6);
            if(VAR_10 != VAR_7) {
                FUNC_2("\nError: problem reading file '%s' !!    \n", VAR_5);
                FUNC_8(VAR_8);
                return 13;
        } }


        VAR_3 |= FUNC_0(VAR_9, VAR_7, VAR_2);

        FUNC_8(VAR_8);
    }

    return VAR_3;
}
