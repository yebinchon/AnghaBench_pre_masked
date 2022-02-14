
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int GPUVMMaxPageTableLevels; } ;
struct display_mode_lib {TYPE_1__ vba; } ;
typedef enum source_format_class { ____Placeholder_source_format_class } source_format_class ;
typedef enum scan_direction_class { ____Placeholder_scan_direction_class } scan_direction_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_0 (double,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(
  struct display_mode_lib *VAR_17,
  bool VAR_18,
  unsigned int VAR_19,
  unsigned int VAR_20,
  enum source_format_class VAR_21,
  unsigned int VAR_22,
  unsigned int VAR_23,
  enum scan_direction_class VAR_24,
  unsigned int VAR_25,
  unsigned int VAR_26,
  unsigned int VAR_27,
  bool VAR_28,
  unsigned int VAR_29,
  unsigned int VAR_30,
  unsigned int VAR_31,
  unsigned int VAR_32,
  unsigned int VAR_33,
  unsigned int *VAR_34,
  unsigned int *VAR_35,
  unsigned int *VAR_36,
  bool *VAR_37,
  unsigned int *VAR_38,
  unsigned int *VAR_39)
{
 unsigned int VAR_40;
 unsigned int VAR_41;
 unsigned int VAR_42;
 unsigned int VAR_43;
 unsigned int VAR_44;
 unsigned int VAR_45;
 unsigned int VAR_46;

 unsigned int VAR_47;
 unsigned int VAR_48;
 unsigned int VAR_49;
 unsigned int VAR_50;
 unsigned int VAR_51;

 if (VAR_18 == 1) {
  VAR_40 = 8 * VAR_19;
  VAR_41 = 8 * VAR_20;
  if (VAR_24 == VAR_2) {
   *VAR_39 = VAR_40;
   VAR_42 = FUNC_0((double) VAR_27 - 1, VAR_41)
     + VAR_41;
   *VAR_35 = VAR_42 * VAR_40 * VAR_23 / 256.0;
  } else {
   *VAR_39 = VAR_41;
   VAR_43 = FUNC_0((double) VAR_27 - 1, VAR_40)
     + VAR_40;
   *VAR_35 = VAR_43 * VAR_41 * VAR_23 / 256.0;
  }
  if (VAR_24 == VAR_2) {
   VAR_46 = VAR_33
     * (FUNC_0(VAR_26 - 1, 64 * VAR_19)
       + 64 * VAR_19) * VAR_23
     / 256;
  } else {
   VAR_46 = VAR_33
     * (FUNC_0(
       (double) VAR_26 - 1,
       64 * VAR_19)
       + 64 * VAR_19) * VAR_23
     / 256;
  }
  if (VAR_28 == 1) {
   VAR_45 = (FUNC_0(
     (double) (VAR_46 - VAR_29)
       / (8 * VAR_29),
     1) + 1) * 64;
   VAR_44 = 128 * (VAR_17->vba.GPUVMMaxPageTableLevels - 1);
  } else {
   VAR_45 = 0;
   VAR_44 = 0;
  }
 } else {
  VAR_45 = 0;
  VAR_44 = 0;
  *VAR_35 = 0;
 }

 if (VAR_22 == VAR_16 || VAR_22 == VAR_14 || VAR_22 == VAR_15) {
  VAR_47 = 256;
  VAR_48 = VAR_19;
 } else if (VAR_22 == VAR_5 || VAR_22 == VAR_6
   || VAR_22 == VAR_3 || VAR_22 == VAR_4) {
  VAR_47 = 4096;
  VAR_48 = 4 * VAR_19;
 } else if (VAR_22 == VAR_11 || VAR_22 == VAR_12
   || VAR_22 == VAR_13 || VAR_22 == VAR_7
   || VAR_22 == VAR_8 || VAR_22 == VAR_9
   || VAR_22 == VAR_10) {
  VAR_47 = 65536;
  VAR_48 = 16 * VAR_19;
 } else {
  VAR_47 = 262144;
  VAR_48 = 32 * VAR_19;
 }
 *VAR_34 = VAR_47 / VAR_23 / VAR_48;

 if (VAR_28 == 1 && VAR_17->vba.GPUVMMaxPageTableLevels > 1) {
  if (VAR_24 == VAR_2) {
   VAR_49 =
     64
       * (FUNC_0(
         ((VAR_32
           * (FUNC_0(
             VAR_26
               - 1,
             VAR_48)
             + VAR_48)
           * VAR_23)
           - VAR_47)
           / (8
             * 2097152),
         1) + 1);
  } else {
   VAR_49 =
     64
       * (FUNC_0(
         ((VAR_32
           * (FUNC_0(
             (double) VAR_27
               - 1,
             VAR_48)
             + VAR_48)
           * VAR_23)
           - VAR_47)
           / (8
             * 2097152),
         1) + 1);
  }
  VAR_50 = 128 * (VAR_17->vba.GPUVMMaxPageTableLevels - 2);
 } else {
  VAR_49 = 0;
  VAR_50 = 0;
 }

 VAR_51 = VAR_45 + VAR_44 + VAR_49
   + VAR_50;

 if (VAR_28 == 1) {
  unsigned int VAR_52;
  unsigned int VAR_53;
  unsigned int VAR_54;
  double VAR_55;
  unsigned int VAR_56;

  if (VAR_22 == VAR_16) {
   VAR_53 = 1;
   VAR_54 = 8.0 * VAR_29 / VAR_23;
   VAR_52 = 64;
   VAR_55 = 0;
  } else if (VAR_47 == 4096) {
   VAR_53 = VAR_48;
   VAR_54 = 8 * *VAR_34;
   VAR_52 = 64;
   if (VAR_24 == VAR_2)
    VAR_55 = 0;
   else
    VAR_55 = 7 / 8;
  } else if (VAR_29 == 4096 && VAR_47 > 4096) {
   VAR_53 = 16 * VAR_19;
   VAR_54 = 16 * VAR_20;
   VAR_52 = 128;
   VAR_55 = 0;
  } else {
   VAR_53 = VAR_48;
   VAR_54 = 8 * *VAR_34;
   VAR_52 = 64;
   VAR_55 = 0;
  }

  if (VAR_21 == VAR_1 || VAR_21 == VAR_0)
   VAR_56 = VAR_31 / 2;
  else
   VAR_56 = VAR_31;

  if (VAR_22 == VAR_16) {
   *VAR_38 =
     FUNC_3(
       128,
       1
         << (unsigned int) FUNC_1(
           FUNC_2(
             FUNC_3(
               (double) VAR_30
                 * VAR_54,
               VAR_56
                 * 65536.0
                 / VAR_23)
               / VAR_32),
           1));
   *VAR_36 = VAR_52
     * (FUNC_0(
       (double) (VAR_32 * *VAR_38 - 1)
         / VAR_54,
       1) + 1);
  } else if (VAR_24 == VAR_2) {
   *VAR_38 = VAR_53;
   *VAR_36 = VAR_52
     * (FUNC_0(((double) VAR_27 - 1) / VAR_54, 1)
       + 1);
  } else {
   *VAR_38 = FUNC_3(VAR_54, *VAR_34);
   *VAR_36 = VAR_52
     * (FUNC_0(
       ((double) VAR_27 - 1)
         / VAR_53,
       1) + 1);
  }
  if (*VAR_36 * (1 - VAR_55)
    <= 64 * VAR_30) {
   *VAR_37 = 1;
  } else {
   *VAR_37 = 0;
  }
 } else {
  *VAR_36 = 0;
  *VAR_37 = 1;
 }

 return VAR_51;
}
