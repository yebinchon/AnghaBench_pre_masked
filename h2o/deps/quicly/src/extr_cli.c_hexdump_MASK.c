
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
    FUNC_0(VAR_0, "%s (%zu bytes):\n", VAR_1, VAR_3);

    while (VAR_3 != 0) {
        int VAR_4;
        FUNC_2("   ", VAR_0);
        for (VAR_4 = 0; VAR_4 < 16; ++VAR_4) {
            FUNC_0(VAR_0, " %2s", *VAR_2++);
            if (--VAR_3 == 0)
                break;
        }
        FUNC_1('\n', VAR_0);
    }
}
