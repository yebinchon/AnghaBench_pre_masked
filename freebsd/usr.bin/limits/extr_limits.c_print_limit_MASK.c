
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int rlim_t ;
typedef int numbr ;
typedef int intmax_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (char const*,char const*,...) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_3(rlim_t VAR_1, unsigned VAR_2, const char * VAR_3, const char * VAR_4, const char * VAR_5, const char * VAR_6)
{
    char VAR_7[64];

    if (VAR_1 == VAR_0)
 FUNC_2(VAR_7, VAR_3, sizeof(VAR_7));
    else
 FUNC_1(VAR_7, "%jd", (intmax_t)((VAR_1 + VAR_2/2) / VAR_2));
    FUNC_0(VAR_4, VAR_6, VAR_7);
    FUNC_0(VAR_5, VAR_6);

}
