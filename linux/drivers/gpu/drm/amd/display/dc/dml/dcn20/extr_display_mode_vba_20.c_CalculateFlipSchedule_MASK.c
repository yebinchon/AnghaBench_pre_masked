
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* ImmediateFlipBW; } ;
struct display_mode_lib {TYPE_1__ vba; } ;
typedef enum source_format_class { ____Placeholder_source_format_class } source_format_class ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (double,int) ;
 unsigned int FUNC_1 (double,unsigned int) ;
 double FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(
  struct display_mode_lib *VAR_2,
  double VAR_3,
  double VAR_4,
  unsigned int VAR_5,
  bool VAR_6,
  double VAR_7,
  unsigned int VAR_8,
  enum source_format_class VAR_9,
  unsigned int VAR_10,
  double VAR_11,
  double VAR_12,
  double VAR_13,
  double VAR_14,
  unsigned int VAR_15,
  unsigned int VAR_16,
  bool VAR_17,
  unsigned int VAR_18,
  unsigned int VAR_19,
  double VAR_20,
  double *VAR_21,
  double *VAR_22,
  double *VAR_23,
  bool *VAR_24)
{
 double VAR_25 = 0.0;

 if (VAR_9 == VAR_1 || VAR_9 == VAR_0) {
  *VAR_21 = 0.0;
  *VAR_22 = 0.0;
  *VAR_23 = VAR_20;
  *VAR_24 = 1;
 } else {
  double VAR_26;
  double VAR_27;

  if (VAR_6 == 1) {
   VAR_2->vba.ImmediateFlipBW[0] = VAR_7
     * VAR_10 / VAR_8;
   VAR_26 =
     FUNC_1(
       VAR_13
         + VAR_14
           / VAR_2->vba.ImmediateFlipBW[0],
       FUNC_1(
         VAR_3
           + VAR_4
             * (VAR_5
               - 1),
         VAR_11 / 4.0));
  } else {
   VAR_26 = 0;
  }

  *VAR_21 = FUNC_0(
    4.0 * (VAR_26 / VAR_11 + 0.125),
    1) / 4.0;

  if ((VAR_6 == 1 || VAR_17 == 1)) {
   VAR_2->vba.ImmediateFlipBW[0] = VAR_7
     * VAR_10 / VAR_8;
   VAR_27 = FUNC_1(
     (VAR_15 + VAR_16)
       / VAR_2->vba.ImmediateFlipBW[0],
     FUNC_1(VAR_4, VAR_11 / 4.0));
  } else {
   VAR_27 = 0;
  }

  *VAR_22 = FUNC_0(
    4.0 * (VAR_27 / VAR_11 + 0.125),
    1) / 4.0;

  if (VAR_6 == 1) {
   *VAR_23 =
     FUNC_1(
       VAR_14
         / (*VAR_21
           * VAR_11),
       (VAR_15 + VAR_16)
         / (VAR_27
           * VAR_11));
  } else if (VAR_15 + VAR_16 > 0) {
   *VAR_23 = (VAR_15 + VAR_16)
     / (VAR_27 * VAR_11);
  } else {
   *VAR_23 = 0;
  }

  if (VAR_6 && !VAR_17)
   VAR_25 = VAR_18 * VAR_11 / VAR_12;
  else if (!VAR_6 && VAR_17)
   VAR_25 = VAR_19 * VAR_11 / VAR_12;
  else
   VAR_25 = FUNC_2(VAR_18, VAR_19) * VAR_11
     / VAR_12;

  if (*VAR_21 >= 8
    || *VAR_22 >= 16
    || VAR_26
      + 2 * VAR_27
      > VAR_25)
   *VAR_24 = 0;
  else
   *VAR_24 = 1;
 }
}
