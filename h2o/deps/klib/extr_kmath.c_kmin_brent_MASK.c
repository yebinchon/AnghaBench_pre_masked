
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double (* kmin1_f ) (double,void*) ;


 double FUNC_0 (double) ;

double FUNC_1(kmin1_f VAR_0, double VAR_1, double VAR_2, void *VAR_3, double VAR_4, double *VAR_5)
{
 double VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 const double VAR_16 = 1.6180339887;
 const double VAR_17 = 0.3819660113;
 const double VAR_18 = 1e-20;
 const int VAR_19 = 100;

 double VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31;

 VAR_12 = VAR_0(VAR_1, VAR_3); VAR_13 = VAR_0(VAR_2, VAR_3);
 if (VAR_13 > VAR_12) {
  VAR_11 = VAR_1; VAR_1 = VAR_2; VAR_2 = VAR_11;
  VAR_11 = VAR_12; VAR_12 = VAR_13; VAR_13 = VAR_11;
 }
 VAR_15 = VAR_2 + VAR_16 * (VAR_2 - VAR_1), VAR_14 = VAR_0(VAR_15, VAR_3);
 while (VAR_13 > VAR_14) {
  VAR_6 = VAR_2 + 100.0 * (VAR_15 - VAR_2);
  VAR_8 = (VAR_2 - VAR_1) * (VAR_13 - VAR_14);
  VAR_9 = (VAR_2 - VAR_15) * (VAR_13 - VAR_12);
  if (FUNC_0(VAR_9 - VAR_8) < VAR_18) {
   VAR_11 = VAR_9 > VAR_8? VAR_18 : 0.0 - VAR_18;
  } else VAR_11 = VAR_9 - VAR_8;
  VAR_7 = VAR_2 - ((VAR_2 - VAR_15) * VAR_9 - (VAR_2 - VAR_1) * VAR_8) / (2.0 * VAR_11);
  if ((VAR_2 > VAR_7 && VAR_7 > VAR_15) || (VAR_2 < VAR_7 && VAR_7 < VAR_15)) {
   VAR_10 = VAR_0(VAR_7, VAR_3);
   if (VAR_10 < VAR_14) {
    VAR_1 = VAR_2; VAR_2 = VAR_7; VAR_12 = VAR_13; VAR_13 = VAR_10;
    break;
   } else if (VAR_10 > VAR_13) {
    VAR_15 = VAR_7; VAR_14 = VAR_10;
    break;
   }
   VAR_7 = VAR_15 + VAR_16 * (VAR_15 - VAR_2); VAR_10 = VAR_0(VAR_7, VAR_3);
  } else if ((VAR_15 > VAR_7 && VAR_7 > VAR_6) || (VAR_15 < VAR_7 && VAR_7 < VAR_6)) {
   VAR_10 = VAR_0(VAR_7, VAR_3);
   if (VAR_10 < VAR_14) {
    VAR_2 = VAR_15; VAR_15 = VAR_7; VAR_7 = VAR_15 + VAR_16 * (VAR_15 - VAR_2);
    VAR_13 = VAR_14; VAR_14 = VAR_10; VAR_10 = VAR_0(VAR_7, VAR_3);
   } else {
    VAR_1 = VAR_2; VAR_2 = VAR_15; VAR_15 = VAR_7;
    VAR_12 = VAR_13; VAR_13 = VAR_14; VAR_14 = VAR_10;
    break;
   }
  } else if ((VAR_7 > VAR_6 && VAR_6 > VAR_15) || (VAR_7 < VAR_6 && VAR_6 < VAR_15)) {
   VAR_7 = VAR_6; VAR_10 = VAR_0(VAR_7, VAR_3);
  } else {
   VAR_7 = VAR_15 + VAR_16 * (VAR_15 - VAR_2); VAR_10 = VAR_0(VAR_7, VAR_3);
  }
  VAR_1 = VAR_2; VAR_2 = VAR_15; VAR_15 = VAR_7;
  VAR_12 = VAR_13; VAR_13 = VAR_14; VAR_14 = VAR_10;
 }
 if (VAR_1 > VAR_15) VAR_7 = VAR_1, VAR_1 = VAR_15, VAR_15 = VAR_7;


 VAR_20 = VAR_21 = 0.0;
 VAR_22 = VAR_23 = VAR_2; VAR_29 = VAR_30 = VAR_13;
 for (VAR_31 = 0; VAR_31 != VAR_19; ++VAR_31) {
  VAR_24 = 0.5 * (VAR_1 + VAR_15);
  VAR_26 = 2.0 * (VAR_25 = VAR_4 * FUNC_0(VAR_2) + VAR_18);
  if (FUNC_0(VAR_2 - VAR_24) <= (VAR_26 - 0.5 * (VAR_15 - VAR_1))) {
   *VAR_5 = VAR_2; return VAR_13;
  }
  if (FUNC_0(VAR_20) > VAR_25) {

   VAR_8 = (VAR_2 - VAR_22) * (VAR_13 - VAR_29);
   VAR_9 = (VAR_2 - VAR_23) * (VAR_13 - VAR_30);
   VAR_27 = (VAR_2 - VAR_23) * VAR_9 - (VAR_2 - VAR_22) * VAR_8;
   VAR_9 = 2.0 * (VAR_9 - VAR_8);
   if (VAR_9 > 0.0) VAR_27 = 0.0 - VAR_27;
   else VAR_9 = 0.0 - VAR_9;
   VAR_28 = VAR_20; VAR_20 = VAR_21;
   if (FUNC_0(VAR_27) >= FUNC_0(0.5 * VAR_9 * VAR_28) || VAR_27 <= VAR_9 * (VAR_1 - VAR_2) || VAR_27 >= VAR_9 * (VAR_15 - VAR_2)) {
    VAR_21 = VAR_17 * (VAR_20 = (VAR_2 >= VAR_24 ? VAR_1 - VAR_2 : VAR_15 - VAR_2));
   } else {
    VAR_21 = VAR_27 / VAR_9; VAR_7 = VAR_2 + VAR_21;
    if (VAR_7 - VAR_1 < VAR_26 || VAR_15 - VAR_7 < VAR_26)
     VAR_21 = (VAR_24 > VAR_2)? VAR_25 : 0.0 - VAR_25;
   }
  } else VAR_21 = VAR_17 * (VAR_20 = (VAR_2 >= VAR_24 ? VAR_1 - VAR_2 : VAR_15 - VAR_2));
  VAR_7 = FUNC_0(VAR_21) >= VAR_25 ? VAR_2 + VAR_21 : VAR_2 + (VAR_21 > 0.0? VAR_25 : -VAR_25);
  VAR_10 = VAR_0(VAR_7, VAR_3);
  if (VAR_10 <= VAR_13) {
   if (VAR_7 >= VAR_2) VAR_1 = VAR_2;
   else VAR_15 = VAR_2;
   VAR_23 = VAR_22; VAR_22 = VAR_2; VAR_2 = VAR_7; VAR_29 = VAR_30; VAR_30 = VAR_13; VAR_13 = VAR_10;
  } else {
   if (VAR_7 < VAR_2) VAR_1 = VAR_7;
   else VAR_15 = VAR_7;
   if (VAR_10 <= VAR_30 || VAR_22 == VAR_2) {
    VAR_23 = VAR_22; VAR_22 = VAR_7;
    VAR_29 = VAR_30; VAR_30 = VAR_10;
   } else if (VAR_10 <= VAR_29 || VAR_23 == VAR_2 || VAR_23 == VAR_22) {
    VAR_23 = VAR_7; VAR_29 = VAR_10;
   }
  }
 }
 *VAR_5 = VAR_2;
 return VAR_13;
}
