
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;

int
FUNC_4(int VAR_3, char *VAR_4[])
{
 int VAR_5, VAR_6;
 const char *VAR_7;

 while ((VAR_5 = FUNC_2(VAR_3, VAR_4, "pP")) > 0) {
  switch (VAR_5) {
  case 'p':
   VAR_2 = 1;
   break;
  case 'P':
   VAR_0 = 1;
   break;
  default:
   FUNC_3();

  }
 }
 VAR_3 -= VAR_1;
 VAR_4 += VAR_1;

 if (VAR_3 == 0)
  FUNC_3();

 VAR_6 = 0;
 while ((VAR_7 = *VAR_4++) != ((void*)0))
  VAR_6 |= FUNC_0(VAR_7);

 FUNC_1(VAR_6);
}
