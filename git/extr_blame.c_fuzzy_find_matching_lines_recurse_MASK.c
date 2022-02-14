
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_number_mapping {int dummy; } ;
struct fingerprint {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,struct fingerprint*,struct fingerprint*,int*,int*,int*,int*,int,struct line_number_mapping const*) ;
 int FUNC_2 (struct fingerprint*,struct fingerprint*) ;
 int* FUNC_3 (int*,int,int,int,int) ;
 int FUNC_4 (int,struct line_number_mapping const*) ;

__attribute__((used)) static void FUNC_5(
 int VAR_1, int VAR_2,
 int VAR_3, int VAR_4,
 struct fingerprint *VAR_5,
 struct fingerprint *VAR_6,
 int *VAR_7,
 int *VAR_8,
 int *VAR_9,
 int *VAR_10,
 int VAR_11,
 int VAR_12,
 const struct line_number_mapping *VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17,
  VAR_18, VAR_19,
  VAR_20, VAR_21,
  VAR_22, VAR_23 = -1,
  VAR_24 = -1,
  VAR_25;

 for (VAR_14 = 0; VAR_14 < VAR_4; ++VAR_14) {
  FUNC_1(VAR_1,
           VAR_3,
           VAR_2,
           VAR_14,
           VAR_5,
           VAR_6,
           VAR_7,
           VAR_8,
           VAR_9,
           VAR_10,
           VAR_11,
           VAR_13);

  if (VAR_8[VAR_14] > VAR_24) {
   VAR_24 = VAR_8[VAR_14];
   VAR_23 = VAR_14;
  }
 }


 if (VAR_23 == -1)
  return;

 VAR_22 = VAR_10[VAR_23];






 FUNC_2(VAR_5 + VAR_22 - VAR_1,
        VAR_6 + VAR_23);




 VAR_15 = VAR_23 - VAR_12;
 VAR_16 = VAR_23 + VAR_12 + 1;
 if (VAR_15 < 0)
  VAR_15 = 0;
 if (VAR_16 > VAR_4)
  VAR_16 = VAR_4;




 for (VAR_14 = VAR_15; VAR_14 < VAR_16; ++VAR_14) {
  VAR_25 = FUNC_4(
   VAR_14 + VAR_2, VAR_13) - VAR_1;




  if (FUNC_0(VAR_22 - VAR_1 - VAR_25) >
   VAR_11) {
   continue;
  }

  *FUNC_3(VAR_7, VAR_22 - VAR_1,
    VAR_14, VAR_25,
    VAR_11) = -1;
 }







 for (VAR_14 = VAR_23 - 1; VAR_14 >= VAR_15; --VAR_14) {




  if (VAR_8[VAR_14] >= 0 &&
      (VAR_10[VAR_14] >= VAR_22 ||
       VAR_9[VAR_14] >= VAR_22)) {
   VAR_8[VAR_14] = VAR_0;
  }
 }
 for (VAR_14 = VAR_23 + 1; VAR_14 < VAR_16; ++VAR_14) {




  if (VAR_8[VAR_14] >= 0 &&
      (VAR_10[VAR_14] <= VAR_22 ||
       VAR_9[VAR_14] <= VAR_22)) {
   VAR_8[VAR_14] = VAR_0;
  }
 }



 if (VAR_23 > 0) {
  FUNC_5(
   VAR_1, VAR_2,
   VAR_22 + 1 - VAR_1,
   VAR_23,
   VAR_5, VAR_6, VAR_7,
   VAR_8, VAR_9, VAR_10,
   VAR_11,
   VAR_12,
   VAR_13);
 }


 if (VAR_23 + 1 < VAR_4) {
  VAR_18 = VAR_22;
  VAR_17 = VAR_23 + 1;
  VAR_19 = VAR_2 + VAR_17;
  VAR_20 =
   VAR_3 + VAR_1 - VAR_18;
  VAR_21 =
   VAR_4 + VAR_2 - VAR_19;
  FUNC_5(
   VAR_18, VAR_19,
   VAR_20, VAR_21,
   VAR_5 + VAR_18 - VAR_1,
   VAR_6 + VAR_17,
   VAR_7 +
    VAR_17 * (VAR_11 * 2 + 1),
   VAR_8 + VAR_17,
   VAR_9 + VAR_17, VAR_10 + VAR_17,
   VAR_11,
   VAR_12,
   VAR_13);
 }
}
