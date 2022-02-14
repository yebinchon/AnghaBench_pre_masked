
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char**,char*) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 VAR_2 = FUNC_4();
 if (VAR_2 == ((void*)0))
  FUNC_0(VAR_1, "sl_init()");

 while ((VAR_8 = FUNC_1(VAR_6, VAR_7, "CrtvI:")) != -1) {
  switch (VAR_8) {
  case 'C':
   VAR_11 |= VAR_0;
   break;
  case 'r':
  case 'v':
  case 't':

   break;
  case 'I':
   FUNC_2(VAR_2, VAR_3);
   break;
  default:
   FUNC_3(VAR_2, 0);
   FUNC_7();
  }
 }

 VAR_6 -= VAR_4;
 VAR_7 += VAR_4;

 if (VAR_6 == 0)
  VAR_10 = FUNC_5(VAR_5, VAR_11);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_10 = FUNC_5(FUNC_6(VAR_7[VAR_9]), VAR_11);

 FUNC_3(VAR_2, 0);

 return (VAR_10);
}
