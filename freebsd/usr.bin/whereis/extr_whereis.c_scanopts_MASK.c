
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ccharp ;


 int ** VAR_0 ;
 int FUNC_0 (char*,int ***,int*) ;
 int FUNC_1 (int,char**,char*) ;
 int ** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char** VAR_10 ;
 int ** FUNC_2 (int **,int) ;
 int ** VAR_11 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(int VAR_12, char **VAR_13)
{
 int VAR_14, VAR_15;
 ccharp **VAR_16;

 while ((VAR_14 = FUNC_1(VAR_12, VAR_13, "BMSabfmqsux")) != -1)
  switch (VAR_14) {
  case 'B':
   VAR_16 = &VAR_0;
   goto dolist;

  case 'M':
   VAR_16 = &VAR_1;
   goto dolist;

  case 'S':
   VAR_16 = &VAR_11;
    dolist:
   VAR_15 = 0;
   *VAR_16 = FUNC_2(*VAR_16, (VAR_15 + 1) * sizeof(char *));
   (*VAR_16)[VAR_15] = ((void*)0);
   while (VAR_9 < VAR_12 &&
          FUNC_3(VAR_13[VAR_9], "-f") != 0 &&
          FUNC_3(VAR_13[VAR_9], "-B") != 0 &&
          FUNC_3(VAR_13[VAR_9], "-M") != 0 &&
          FUNC_3(VAR_13[VAR_9], "-S") != 0) {
    FUNC_0(VAR_13[VAR_9], VAR_16, &VAR_15);
    VAR_9++;
   }
   break;

  case 'a':
   VAR_2 = 1;
   break;

  case 'b':
   VAR_3 = 1;
   break;

  case 'f':
   goto breakout;

  case 'm':
   VAR_4 = 1;
   break;

  case 'q':
   VAR_5 = 1;
   break;

  case 's':
   VAR_6 = 1;
   break;

  case 'u':
   VAR_7 = 1;
   break;

  case 'x':
   VAR_8 = 1;
   break;

  default:
   FUNC_4();
  }
  breakout:
 if (VAR_9 == VAR_12)
  FUNC_4();
 VAR_10 = VAR_13 + VAR_9;
}
