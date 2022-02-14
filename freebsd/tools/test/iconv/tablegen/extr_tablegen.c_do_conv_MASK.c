
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int iconv_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (int ,char const**,size_t*,char**,size_t*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(iconv_t VAR_5, bool VAR_6) {
 size_t VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 const char *VAR_12;
 char *VAR_13;

 for (VAR_11 = 0; VAR_11 < (VAR_4 ? 0x100000 : 0x10000); VAR_11 += 1) {
  if (VAR_6 && (VAR_11 >= 0xD800) && (VAR_11 <= 0xDF00))
   continue;
  VAR_7 = VAR_6 ? 4 : FUNC_3(VAR_11);
  VAR_8 = 4;
  VAR_10 = 0x00000000;
  VAR_13 = (char *)&VAR_10;
  VAR_12 = (const char *)&VAR_11;
  FUNC_2(VAR_5, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  VAR_3 = 0;
  VAR_2 = 0;
  VAR_9 = FUNC_2(VAR_5, &VAR_12, &VAR_7, &VAR_13, &VAR_8);
  if (VAR_9 == (size_t)-1) {
   if (VAR_1) {
    FUNC_0(VAR_11);
    FUNC_4(" = ");
    FUNC_1(VAR_2);
    FUNC_4("\n");
   }
   continue;
  }
  FUNC_0(VAR_11);
  FUNC_4(" = ");
  FUNC_0(VAR_10);
  FUNC_4("\n");
 }
 if (VAR_0)
  FUNC_4("END_MAP\n");
}
