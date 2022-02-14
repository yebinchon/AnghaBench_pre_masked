
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (void*,char*,char*,int*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (void*,char*,char*,char*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0];
 const char *VAR_4;
 char *VAR_5 = VAR_3;
 int VAR_6 = 0;


 VAR_4 = FUNC_0(VAR_1, "/chosen", "bootargs", &VAR_6);
 if (VAR_4)
  if (VAR_6 < VAR_0) {
   FUNC_1(VAR_5, VAR_4, VAR_6);


   VAR_5 += VAR_6 - 1;
  }


 if (VAR_2) {
  VAR_6 = FUNC_3(VAR_2);
  if (VAR_5 - VAR_3 + VAR_6 + 2 < VAR_0) {
   *VAR_5++ = ' ';
   FUNC_1(VAR_5, VAR_2, VAR_6);
   VAR_5 += VAR_6;
  }
 }
 *VAR_5 = '\0';

 FUNC_2(VAR_1, "/chosen", "bootargs", VAR_3);
}
