
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_3, char *VAR_4[])
{
 int VAR_5, VAR_6;
 char VAR_7[256];

 VAR_0 = 0;
 while ((VAR_5 = FUNC_4(VAR_3, VAR_4, "l")) != -1)
  switch (VAR_5) {
  case 'l':
   VAR_0 = 1;
   break;
  case '?':
  default:
   FUNC_7();
  }
 VAR_3 -= VAR_1;
 VAR_4 += VAR_1;

 if (*VAR_4 == ((void*)0))
  for (VAR_6 = 1;
      FUNC_3(VAR_7, sizeof(VAR_7), VAR_2) != ((void*)0); VAR_6 = 0) {
   if (FUNC_6(VAR_7, '\n') == ((void*)0))
    FUNC_1(1, "line too long.");
   if (!VAR_6)
    (void)FUNC_5("...\n");
   FUNC_0(VAR_7);
  }
 else
  for (VAR_6 = 1; *VAR_4 != ((void*)0); VAR_6 = 0, ++VAR_4) {
   if (!VAR_6)
    (void)FUNC_5("...\n");
   FUNC_0(*VAR_4);
  }
 FUNC_2(0);
}
