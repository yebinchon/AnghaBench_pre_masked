
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int errbuf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, va_list VAR_3)
{
    char VAR_4[256];

    if (VAR_0 != 0) {
        FUNC_3(VAR_0, VAR_4, sizeof(VAR_4));
    } else {
        VAR_4[0] = '\0';
    }

    FUNC_0(VAR_1, "[openssl-privsep] ");
    FUNC_4(VAR_1, VAR_2, VAR_3);
    if (VAR_4[0] != '\0')
        FUNC_2(VAR_4, VAR_1);
    FUNC_1('\n', VAR_1);
}
