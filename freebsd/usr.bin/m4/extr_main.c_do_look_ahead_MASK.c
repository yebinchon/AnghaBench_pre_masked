
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char const) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, const char *VAR_2)
{
 int VAR_3;

 FUNC_0((unsigned char)VAR_1 == (unsigned char)VAR_2[0]);

 for (VAR_3 = 1; *++VAR_2; VAR_3++) {
  VAR_1 = FUNC_1();
  if (VAR_1 == VAR_0 || (unsigned char)VAR_1 != (unsigned char)*VAR_2) {
   FUNC_2(VAR_1);
   while (--VAR_3)
    FUNC_2(*--VAR_2);
   return 0;
  }
 }
 return 1;
}
