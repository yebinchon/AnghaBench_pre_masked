
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (char*,int,int,int,int,int,int) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,char*,int) ;

int
FUNC_7(int VAR_2, char **VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_6 = VAR_7 = VAR_8 = VAR_9 = VAR_10 = 0;
 VAR_11 = VAR_12 = VAR_13 = VAR_14 = VAR_15 = VAR_16= 0;
 VAR_5 = 4;

 while ((VAR_4 = FUNC_2(VAR_2, VAR_3, "aBbcDehlrwVv")) != -1) {
  switch(VAR_4) {
  case 'a':
   VAR_9 = 1;
   break;

  case 'B':
   VAR_12 = 1;
   break;

  case 'b':
   VAR_11 = 1;
   VAR_5 = 1;
   break;

  case 'c':
   VAR_13 = 1;
   break;

  case 'D':
   VAR_10 = 1;
   break;

  case 'e':
   VAR_14 = 1;
   break;

  case 'h':
   VAR_5 = 2;
   break;

  case 'l':
   VAR_6 = 1;
   break;

  case 'r':
   VAR_7 = 1;
   break;

  case 'w':
   VAR_8 = 1;
   break;

  case 'v':
   VAR_15 = 1;
   break;

  case 'V':
   VAR_16 = 1;
   break;

  case 'x':
   VAR_5 = 8;
   break;

  default:
   FUNC_5();
  }
 }

 if ((VAR_6 && VAR_1 >= VAR_2 + 1)
     || (VAR_8 && VAR_1 + 3 != VAR_2)
     || (VAR_7 && VAR_1 + 2 != VAR_2)
     || (VAR_9 && VAR_1 + 1 != VAR_2)
     || (VAR_10 && (VAR_1 + 2 > VAR_2 || VAR_1 + 4 < VAR_2))
     || (VAR_5 == 8 && !VAR_10))
  FUNC_5();

 if (VAR_6) {
  FUNC_3(VAR_1 + 1 == VAR_2 ? VAR_3[VAR_1] : ((void*)0), VAR_15,
      VAR_11, VAR_12, VAR_13, VAR_14, VAR_16);
 } else if (VAR_9) {
  FUNC_0(VAR_3[VAR_1]);
 } else if (VAR_7) {
  FUNC_4(VAR_3[VAR_1], VAR_3[VAR_1 + 1], VAR_5);
 } else if (VAR_8) {
  FUNC_6(VAR_3[VAR_1], VAR_3[VAR_1 + 1], VAR_3[VAR_1 + 2],
      VAR_5);
 } else if (VAR_10) {
  FUNC_1(VAR_3[VAR_1], VAR_3[VAR_1 + 1],
      VAR_1 + 2 < VAR_2 ? VAR_3[VAR_1 + 2] : ((void*)0),
      VAR_1 + 3 < VAR_2 ? VAR_3[VAR_1 + 3] : ((void*)0),
      VAR_5, VAR_15);
 } else {
  FUNC_5();
 }

 return (VAR_0);
}
