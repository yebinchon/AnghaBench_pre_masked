
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stack ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_5 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*,char*,char*,int) ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_6, char *VAR_7[])
{
 char VAR_8[VAR_2];
 char *VAR_9, *VAR_10;
 bool VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = 0;
 VAR_12 = 0;
 VAR_8[0] = '\0';
 VAR_14 = VAR_1;

 while ((VAR_13 = FUNC_2(VAR_6, VAR_7, "ailS:s")) != -1) {
  switch (VAR_13) {
  case 'a':
   VAR_11 = 1;
   break;
  case 'i':
   VAR_14 = VAR_0;
   break;
  case 'l':
   VAR_5 = 1;
   break;
  case 'S':
   VAR_12 = 1;
   FUNC_3(VAR_8, VAR_3, sizeof(VAR_8));
   break;
  case 's':
   VAR_14 = VAR_1;
   break;
  default:
   FUNC_6();
  }
 }
 VAR_6 -= VAR_4;
 VAR_7 += VAR_4;

 if (VAR_11 && VAR_12)
  FUNC_6();
 if (VAR_11 || VAR_12) {
  if (VAR_6 != 0)
   FUNC_6();
  if (!FUNC_4(VAR_8, VAR_14))
   FUNC_0(1);
  FUNC_0(0);
 }

 if ((VAR_6 != 2 && VAR_6 != 4) || VAR_5)
  FUNC_6();

 if (VAR_6 == 2) {
  VAR_9 = FUNC_1(VAR_7[0]);
  VAR_10 = FUNC_1(VAR_7[1]);
  if (VAR_9 == ((void*)0) || VAR_9[1] == '\0' || VAR_10 == ((void*)0) ||
      VAR_10[1] == '\0')
   FUNC_6();
  *VAR_9++ = '\0';
  *VAR_10++ = '\0';
  if (!FUNC_5(VAR_7[0], VAR_9, VAR_7[1], VAR_10, VAR_14))
   FUNC_0(1);
 } else if (!FUNC_5(VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3], VAR_14))
  FUNC_0(1);

 FUNC_0(0);
}
