
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stack ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_6 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int * VAR_7 ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_8, char *VAR_9[])
{
 char VAR_10[VAR_2];
 char *VAR_11, *VAR_12;
 bool VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = 0;
 VAR_14 = 0;
 VAR_10[0] = '\0';
 VAR_16 = -1;

 while ((VAR_15 = FUNC_2(VAR_8, VAR_9, "alS:s:")) != -1) {
  switch (VAR_15) {
  case 'a':
   VAR_13 = 1;
   break;
  case 'l':
   VAR_6 = 1;
   break;
  case 'S':
   VAR_14 = 1;
   FUNC_4(VAR_10, VAR_4, sizeof(VAR_10));
   break;
  case 's':
   VAR_14 = 1;
   for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
    if (FUNC_3(VAR_7[VAR_16], VAR_4) == 0)
     break;
   }
   break;
  default:
   FUNC_7();
  }
 }
 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;

 if (VAR_16 == VAR_3 ||
     VAR_16 == VAR_0 ||
     VAR_16 == VAR_1)
  FUNC_7();
 if (VAR_13 && VAR_14)
  FUNC_7();
 if (VAR_13 || VAR_14) {
  if (VAR_8 != 0)
   FUNC_7();
  if (!FUNC_5(VAR_10, VAR_16))
   FUNC_0(1);
  FUNC_0(0);
 }

 if ((VAR_8 != 2 && VAR_8 != 4) || VAR_6)
  FUNC_7();

 if (VAR_8 == 2) {
  VAR_11 = FUNC_1(VAR_9[0]);
  VAR_12 = FUNC_1(VAR_9[1]);
  if (VAR_11 == ((void*)0) || VAR_11[1] == '\0' || VAR_12 == ((void*)0) ||
      VAR_12[1] == '\0')
   FUNC_7();
  *VAR_11++ = '\0';
  *VAR_12++ = '\0';
  if (!FUNC_6(VAR_9[0], VAR_11, VAR_9[1], VAR_12))
   FUNC_0(1);
 } else if (!FUNC_6(VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3]))
  FUNC_0(1);

 FUNC_0(0);
}
