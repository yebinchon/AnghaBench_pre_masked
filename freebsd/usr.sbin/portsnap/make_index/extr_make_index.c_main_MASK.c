
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PORT ;
typedef int FILE ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,size_t*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int **,size_t,size_t) ;
 int ** FUNC_7 (size_t) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int ** FUNC_10 (int **,size_t) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,size_t,int *) ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_0, char *VAR_1[])
{
 FILE * VAR_2;
 char * VAR_3;
 size_t VAR_4;
 PORT ** VAR_5;
 PORT * VAR_6;
 size_t VAR_7;
 size_t VAR_8;

 if (VAR_0 != 2)
  FUNC_13();
 if ((VAR_2 = FUNC_5(VAR_1[1], "r")) == ((void*)0))
  FUNC_0(1, "fopen(%s)", VAR_1[1]);

 VAR_7 = 1024;
 if ((VAR_5 = FUNC_7(VAR_7 * sizeof(PORT *))) == ((void*)0))
  FUNC_0(1, "malloc(pp)");




 for(VAR_8 = 0; (VAR_3 = FUNC_4(VAR_2, &VAR_4)) != ((void*)0); VAR_8++) {
  if (VAR_3[VAR_4 - 1] != '\n')
   FUNC_1(1, "Unterminated line encountered");
  VAR_3[VAR_4 - 1] = 0;


  if (VAR_8 >= VAR_7) {
   VAR_7 *= 2;
   if ((VAR_5 = FUNC_10(VAR_5, VAR_7 * sizeof(PORT *))) == ((void*)0))
    FUNC_0(1, "realloc(pp)");
  }

  VAR_5[VAR_8] = FUNC_8(VAR_3);
 }

 VAR_7 = VAR_8;
 if ((VAR_5 = FUNC_10(VAR_5, VAR_7 * sizeof(PORT *))) == ((void*)0))
  FUNC_0(1, "realloc(pp)");


 if (!FUNC_3(VAR_2))
  FUNC_0(1, "fgetln(%s)", VAR_1[1]);

 if (FUNC_2(VAR_2) != 0)
  FUNC_0(1, "fclose(%s)", VAR_1[1]);




 if (VAR_7 == 0)
  return 0;




 for (VAR_8 = VAR_7; VAR_8 > 0; VAR_8--)
  FUNC_6(VAR_5, VAR_7, VAR_8 - 1);
 for (VAR_8 = VAR_7 - 1; VAR_8 > 0; VAR_8--) {
  VAR_6 = VAR_5[0];
  VAR_5[0] = VAR_5[VAR_8];
  VAR_5[VAR_8] = VAR_6;
  FUNC_6(VAR_5, VAR_8, 0);
 }





 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_12(VAR_5, VAR_7, VAR_5[VAR_8]);





 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_11(VAR_5[VAR_8]);





 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_9(VAR_5[VAR_8]);

 return 0;
}
