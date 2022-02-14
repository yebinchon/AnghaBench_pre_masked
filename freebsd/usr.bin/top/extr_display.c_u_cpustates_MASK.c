
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int* VAR_0 ;
 char** VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,double) ;
 scalar_t__ VAR_7 ;

void
FUNC_2(int *VAR_8)
{
    int VAR_9;
    const char * const *VAR_10;
    const char *VAR_11;
    int *VAR_12 = VAR_8;
    int *VAR_13;
    int *VAR_14;
    int VAR_15;

for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
    VAR_10 = VAR_1;

    FUNC_0(VAR_2, VAR_7 + VAR_15);
    VAR_3 = VAR_7 + VAR_15;
    VAR_13 = VAR_4 + (VAR_15 * VAR_6);
    VAR_14 = VAR_0;


    while ((VAR_11 = *VAR_10++) != ((void*)0))
    {
 if (*VAR_11 != '\0')
 {

     if (*VAR_13 != *VAR_8)
     {

  FUNC_0(VAR_2 + *VAR_14, VAR_7 + VAR_15);
  VAR_3 = VAR_7 + VAR_15;


  VAR_9 = *VAR_8;


  FUNC_1((VAR_9 >= 1000 ? "%4.0f" : "%4.1f"),
         ((double)VAR_9)/10.);


  *VAR_13 = VAR_9;
     }
 }


 VAR_13++;
 VAR_8++;
 VAR_14++;
    }
}

    VAR_8 = VAR_12;
}
