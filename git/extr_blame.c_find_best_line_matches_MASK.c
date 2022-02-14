
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_number_mapping {int dummy; } ;
struct fingerprint {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fingerprint*,struct fingerprint*) ;
 int* FUNC_3 (int*,int,int,int,int const) ;
 int FUNC_4 (int,struct line_number_mapping const*) ;

__attribute__((used)) static void FUNC_5(
 int VAR_2,
 int VAR_3,
 int VAR_4,
 int VAR_5,
 struct fingerprint *VAR_6,
 struct fingerprint *VAR_7,
 int *VAR_8,
 int *VAR_9,
 int *VAR_10,
 int *VAR_11,
 const int VAR_12,
 const struct line_number_mapping *VAR_13)
{

 int VAR_14, VAR_15, VAR_16, VAR_17, *VAR_18,
  VAR_19 = 0, VAR_20 = 0,
  VAR_21 = 0, VAR_22 = 0;


 if (VAR_9[VAR_5] != VAR_0)
  return;

 VAR_17 = FUNC_4(
  VAR_5 + VAR_4, VAR_13) - VAR_2;

 VAR_15 = VAR_17 - VAR_12;
 if (VAR_15 < 0)
  VAR_15 = 0;

 VAR_16 = VAR_17 + VAR_12 + 1;
 if (VAR_16 > VAR_3)
  VAR_16 = VAR_3;

 for (VAR_14 = VAR_15; VAR_14 < VAR_16; ++VAR_14) {
  VAR_18 = FUNC_3(VAR_8,
         VAR_14, VAR_5,
         VAR_17,
         VAR_12);
  if (*VAR_18 == -1) {



   FUNC_1(FUNC_0(VAR_14 - VAR_17) < 1000);




   *VAR_18 = FUNC_2(
    VAR_7 + VAR_5,
    VAR_6 + VAR_14) *
    (1000 - FUNC_0(VAR_14 - VAR_17));
  }
  if (*VAR_18 > VAR_19) {
   VAR_20 = VAR_19;
   VAR_22 = VAR_21;
   VAR_19 = *VAR_18;
   VAR_21 = VAR_14;
  } else if (*VAR_18 > VAR_20) {
   VAR_20 = *VAR_18;
   VAR_22 = VAR_14;
  }
 }

 if (VAR_19 == 0) {




  VAR_9[VAR_5] = VAR_1;
  VAR_11[VAR_5] = -1;
 } else {
  VAR_9[VAR_5] = VAR_19 * 2 -
   VAR_20;





  VAR_11[VAR_5] = VAR_2 + VAR_21;
  VAR_10[VAR_5] =
   VAR_2 + VAR_22;
 }
}
