
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char**,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int,int,char*,int,int) ;
 int FUNC_3 (int ) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 char *VAR_14;

 VAR_9 = VAR_10 = VAR_11 = VAR_12 = VAR_13 = 0;
 VAR_14 = ((void*)0);
 while ((VAR_6 = FUNC_0(VAR_4, VAR_5, "-aprP:RS")) != -1) {
  if (VAR_6 == '-')
   break;
  switch (VAR_6) {
  case 'a':
   VAR_9 = 1;
   VAR_11 = 1;
   break;
  case 'p':
   if (VAR_14 != ((void*)0))
    FUNC_4();
   VAR_10 = 1;
   break;
  case 'r':
   VAR_11 = 1;
   break;
  case 'P':
   if (VAR_10)
    FUNC_4();
   VAR_10 = 1;
   VAR_14 = VAR_2;
   break;
  case 'R':
   if (VAR_13)
    FUNC_4();
   VAR_12 = 1;
   break;
  case 'S':
   if (VAR_12)
    FUNC_4();
   VAR_13 = 1;
   break;
  case '?':
  default:
   FUNC_4();

  }
 }
 VAR_4 -= VAR_3;
 VAR_5 += VAR_3;

 VAR_8 = FUNC_3(VAR_1);
 if (VAR_9) {
  if (VAR_4 != 0)
   FUNC_4();
  FUNC_2(VAR_8, ((void*)0), VAR_11, VAR_10, VAR_14, VAR_12, VAR_13);
 } else {




  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
   FUNC_2(VAR_8, VAR_5[VAR_7], VAR_11, VAR_10, VAR_14, VAR_12, VAR_13);
 }
 FUNC_1(VAR_8);
 return (VAR_0);
}
