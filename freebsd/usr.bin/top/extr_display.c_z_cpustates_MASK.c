
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(void)
{
    int VAR_6 = 0;
    const char * const *VAR_7;
    const char *VAR_8;
    int VAR_9, VAR_10;

    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
     VAR_7 = VAR_0;


     if (VAR_4 == 1)
      FUNC_0("\nCPU: ");
     else {
      VAR_10 = FUNC_0("\nCPU %d: ", VAR_9);
      while (VAR_10++ <= VAR_1)
       FUNC_0(" ");
     }
     VAR_2++;

     while ((VAR_8 = *VAR_7++) != ((void*)0))
     {
      if (*VAR_8 != '\0')
      {
       FUNC_0("%s    %% %s", (VAR_6++ % VAR_5) == 0 ? "" : ", ", VAR_8);
      }
     }
    }


 for (VAR_6 = 0; VAR_6 < VAR_5 * VAR_4; ++VAR_6) {
  VAR_3[VAR_6] = -1;
    }
}
