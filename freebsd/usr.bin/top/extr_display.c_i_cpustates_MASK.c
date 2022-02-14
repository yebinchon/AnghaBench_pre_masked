
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(int *VAR_6)
{
    int VAR_7 = 0;
    int VAR_8;
    const char * const *VAR_9;
    const char *VAR_10;
    int *VAR_11 = VAR_6;
    int VAR_12;

for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
    VAR_9 = VAR_0;


    if (VAR_4 == 1)
 FUNC_1("\nCPU: ");
    else {
 VAR_8 = FUNC_1("\nCPU %d: ", VAR_12);
 while (VAR_8++ <= VAR_1)
  FUNC_1(" ");
    }
    VAR_2++;


    while ((VAR_10 = *VAR_9++) != ((void*)0))
    {
 if (*VAR_10 != '\0')
 {

     VAR_8 = *VAR_6++;


     FUNC_1((VAR_8 >= 1000 ? "%s%4.0f%% %s" : "%s%4.1f%% %s"),
     (VAR_7++ % VAR_5) == 0 ? "" : ", ",
     ((float)VAR_8)/10.,
     VAR_10);
 }
    }
}


    VAR_6 = VAR_11;
    FUNC_0(VAR_3, VAR_6, VAR_5 * sizeof(int) * VAR_4);
}
