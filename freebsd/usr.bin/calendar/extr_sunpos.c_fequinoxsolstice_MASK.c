
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double,double) ;
 int FUNC_1 (int,int,int,int ,int ,double,double,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (double) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int** VAR_3 ;
 size_t FUNC_9 (int) ;
 int FUNC_10 (int,int,int,double,int ,int ,int ,double,double,double*,double*) ;

void
FUNC_11(int VAR_4, double VAR_5, double *VAR_6, double *VAR_7)
{
 double VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0;

 double VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;

 int *VAR_21;
 VAR_21 = VAR_3[FUNC_9(VAR_4)];






 for (VAR_12 = 18; VAR_12 < 31; VAR_12++) {

  FUNC_10(VAR_4, 3, VAR_12, VAR_5, 0, 0, 0, 0.0, 0.0, &VAR_10, &VAR_16);
  FUNC_10(VAR_4, 3, VAR_12 + 1, VAR_5, 0, 0, 0, 0.0, 0.0,
      &VAR_10, &VAR_17);

  if (FUNC_6(VAR_16) == FUNC_6(VAR_17))
   continue;

  VAR_19 = VAR_2;
  VAR_20 = VAR_2 / 2;
  while (VAR_20 > 0) {


   FUNC_10(VAR_4, 3, VAR_12, VAR_5,
       FUNC_5(VAR_19), FUNC_7(VAR_19), FUNC_8(VAR_19),
       0.0, 0.0, &VAR_10, &VAR_18);

   if (FUNC_6(VAR_16) == FUNC_6(VAR_18)) {
    VAR_16 = VAR_18;
    VAR_19 += VAR_20;
   } else {
    VAR_17 = VAR_18;
    VAR_19 -= VAR_20;
   }




   VAR_20 /= 2;
  }
  VAR_6[0] = 1 + VAR_21[3] + VAR_12 + (VAR_19 / VAR_0);
  break;
 }





 for (VAR_12 = 18; VAR_12 < 31; VAR_12++) {

  FUNC_10(VAR_4, 9, VAR_12, VAR_5, 0, 0, 0, 0.0, 0.0, &VAR_10, &VAR_16);
  FUNC_10(VAR_4, 9, VAR_12 + 1, VAR_5, 0, 0, 0, 0.0, 0.0,
      &VAR_10, &VAR_17);

  if (FUNC_6(VAR_16) == FUNC_6(VAR_17))
   continue;

  VAR_19 = VAR_2;
  VAR_20 = VAR_2 / 2;
  while (VAR_20 > 0) {


   FUNC_10(VAR_4, 9, VAR_12, VAR_5,
       FUNC_5(VAR_19), FUNC_7(VAR_19), FUNC_8(VAR_19),
       0.0, 0.0, &VAR_10, &VAR_18);

   if (FUNC_6(VAR_16) == FUNC_6(VAR_18)) {
    VAR_16 = VAR_18;
    VAR_19 += VAR_20;
   } else {
    VAR_17 = VAR_18;
    VAR_19 -= VAR_20;
   }




   VAR_20 /= 2;
  }
  VAR_6[1] = 1 + VAR_21[9] + VAR_12 + (VAR_19 / VAR_0);
  break;
 }






 VAR_15 = 0;
 VAR_9 = 0;
 VAR_13 = 1;
 for (VAR_12 = 18; VAR_12 < 31; VAR_12++) {
  for (VAR_11 = 0; VAR_11 < 4 * VAR_1; VAR_11++) {
   FUNC_10(VAR_4, 6, VAR_12, VAR_5, FUNC_2(VAR_11), FUNC_3(VAR_11), FUNC_4(VAR_11),
       0.0, 0.0, &VAR_10, &VAR_8);
   VAR_14 = FUNC_0(VAR_9, VAR_8);
   if (VAR_13 != VAR_14) {




    VAR_7[0] = 1 + VAR_21[6] + VAR_12 +
        ((VAR_11 / 4.0) / 24.0);
    VAR_15 = 1;
    break;
   }
   VAR_9 = VAR_8;
   VAR_13 = VAR_14;
  }
  if (VAR_15)
   break;
 }






 VAR_15 = 0;
 VAR_9 = 360;
 VAR_13 = -1;
 for (VAR_12 = 18; VAR_12 < 31; VAR_12++) {
  for (VAR_11 = 0; VAR_11 < 4 * VAR_1; VAR_11++) {
   FUNC_10(VAR_4, 12, VAR_12, VAR_5, FUNC_2(VAR_11), FUNC_3(VAR_11), FUNC_4(VAR_11),
       0.0, 0.0, &VAR_10, &VAR_8);
   VAR_14 = FUNC_0(VAR_9, VAR_8);
   if (VAR_13 != VAR_14) {




    VAR_7[1] = 1 + VAR_21[12] + VAR_12 +
        ((VAR_11 / 4.0) / 24.0);
    VAR_15 = 1;
    break;
   }
   VAR_9 = VAR_8;
   VAR_13 = VAR_14;
  }
  if (VAR_15)
   break;
 }

 return;
}
