
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int** VAR_1 ;
 size_t FUNC_3 (int) ;
 int** VAR_2 ;
 int FUNC_4 (char*,int,int,int,int,int,int,double) ;
 int FUNC_5 (int,int,int,int,int,int,int ,double,double,double*,double*) ;

int
FUNC_6(int VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 double VAR_9;
 double VAR_10, VAR_11;
 int *VAR_12, *VAR_13, *VAR_14, VAR_15;
 int VAR_16 = -1;

 VAR_14 = VAR_1[FUNC_3(VAR_3)];
 VAR_13 = VAR_2[FUNC_3(VAR_3)];
 VAR_12 = VAR_5;

 VAR_8 = 0;
 FUNC_5(VAR_3 - 1, 12, 31,
     -24 * (VAR_4 / 360.0),
     FUNC_0(VAR_8), FUNC_1(VAR_8), FUNC_2(VAR_8), 0.0, 0.0, &VAR_11, &VAR_9);

 for (VAR_6 = 1; VAR_6 <= 12; VAR_6++) {
  for (VAR_7 = 1; VAR_7 <= VAR_13[VAR_6]; VAR_7++) {
   for (VAR_8 = 0; VAR_8 < 4 * VAR_0; VAR_8++) {
    FUNC_5(VAR_3, VAR_6, VAR_7,
        -24 * (VAR_4 / 360.0),
        FUNC_0(VAR_8), FUNC_1(VAR_8), FUNC_2(VAR_8),
        0.0, 0.0, &VAR_10, &VAR_9);
    if (VAR_10 < 180 && VAR_11 > 180) {
     *VAR_12 = VAR_14[VAR_6] + VAR_7;




         VAR_12++;
    } else {
     for (VAR_15 = 0; VAR_15 <= 360; VAR_15 += 30)
      if (VAR_10 > VAR_15 && VAR_11 < VAR_15) {
       *VAR_12 =
           VAR_14[VAR_6] + VAR_7;




       if (VAR_15 == 330)
        VAR_16 = *VAR_12;
       VAR_12++;
      }
    }
    VAR_11 = VAR_10;
   }
  }
 }
 *VAR_12 = -1;
 return (VAR_16);
}
