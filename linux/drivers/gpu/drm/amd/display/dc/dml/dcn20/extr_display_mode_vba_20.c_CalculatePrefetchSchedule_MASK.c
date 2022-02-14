
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_mode_lib {int dummy; } ;
typedef enum output_format_class { ____Placeholder_output_format_class } output_format_class ;


 int VAR_0 ;
 double FUNC_0 (double,int) ;
 double FUNC_1 (double,int) ;
 double FUNC_2 (double,double) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static bool FUNC_4(
  struct display_mode_lib *VAR_1,
  double VAR_2,
  double VAR_3,
  double VAR_4,
  double VAR_5,
  unsigned int VAR_6,
  unsigned int VAR_7,
  bool VAR_8,
  unsigned int VAR_9,
  double VAR_10,
  double VAR_11,
  double VAR_12,
  double VAR_13,
  double VAR_14,
  double VAR_15,
  unsigned int VAR_16,
  enum output_format_class VAR_17,
  unsigned int VAR_18,
  unsigned int VAR_19,
  unsigned int VAR_20,
  unsigned int VAR_21,
  unsigned int VAR_22,
  bool VAR_23,
  bool VAR_24,
  unsigned int VAR_25,
  unsigned int VAR_26,
  bool VAR_27,
  double VAR_28,
  double VAR_29,
  double VAR_30,
  unsigned int VAR_31,
  unsigned int VAR_32,
  unsigned int VAR_33,
  double VAR_34,
  unsigned int VAR_35,
  double VAR_36,
  double VAR_37,
  unsigned int VAR_38,
  double VAR_39,
  double VAR_40,
  double VAR_41,
  unsigned int VAR_42,
  unsigned int VAR_43,
  unsigned int VAR_44,
  double VAR_45,
  bool VAR_46,
  double VAR_47,
  bool VAR_48,
  bool VAR_49,
  double *VAR_50,
  double *VAR_51,
  double *VAR_52,
  double *VAR_53,
  double *VAR_54,
  double *VAR_55,
  double *VAR_56,
  double *VAR_57,
  double *VAR_58,
  unsigned int *VAR_59,
  double *VAR_60,
  unsigned int *VAR_61,
  double *VAR_62,
  double *VAR_63)
{
 bool VAR_64 = 0;
 unsigned int VAR_65, VAR_66;
 double VAR_67, VAR_68;
 double VAR_69, VAR_70, VAR_71;
 double VAR_72;
 double VAR_73;
 double VAR_74;
 double VAR_75;
 double VAR_76;
 double VAR_77;
 double VAR_78;
 double VAR_79 = 0;
 double VAR_80 = 0;
 double VAR_81 = 0;

 if (VAR_8)
  VAR_65 = VAR_10 + VAR_11;
 else
  VAR_65 = VAR_10 + VAR_12;

 VAR_65 = VAR_65 + VAR_13 + VAR_9 * VAR_14;

 VAR_66 = VAR_15;

 if (VAR_2 == 0.0 || VAR_3 == 0.0)
  return 1;

 *VAR_50 = VAR_65 * VAR_4 / VAR_2 + VAR_66 * VAR_4 / VAR_3
   + VAR_6;

 if (VAR_7 > 1)
  *VAR_50 = *VAR_50 + VAR_16;

 if (VAR_17 == VAR_0 || (VAR_48 && VAR_49))
  *VAR_51 = 1;
 else
  *VAR_51 = 0;

 VAR_67 = ((double) (*VAR_51 * VAR_19)) + *VAR_50;
 *VAR_51 = FUNC_1(VAR_67 / VAR_19, 1);
 *VAR_50 = VAR_67 - ((double) (*VAR_51 * VAR_19));

 *VAR_61 = FUNC_0(VAR_19 / 4.0, 1);
 VAR_68 = VAR_20 * (2.0 / VAR_2 + 3.0 / VAR_3);
 *VAR_62 = (14.0 / VAR_5 + 12.0 / VAR_2 + VAR_68)
   * VAR_4;

 *VAR_63 = FUNC_2(
   150.0 / VAR_2,
   VAR_68 + 20.0 / VAR_5 + 10.0 / VAR_2)
   * VAR_4;

 VAR_71 = (double) (*VAR_61 + *VAR_62 + *VAR_63) / VAR_4;

 VAR_70 = (double) VAR_19 / VAR_4;

 if (VAR_24) {
  double VAR_82, VAR_83, VAR_84;

  VAR_69 = FUNC_2(0.0, VAR_29 - VAR_30);
  VAR_82 = VAR_26 / 4.0 / VAR_3;
  VAR_83 = VAR_70;
  if (VAR_25 == 0)
   VAR_84 = VAR_18 * VAR_70 / 2.0;
  else
   VAR_84 = VAR_25 * VAR_70;
  if (VAR_48 && !VAR_49)
   VAR_84 = VAR_84 / 2;
  if (VAR_21 * VAR_70
    < VAR_71 + VAR_45 + VAR_29 + VAR_82 + VAR_83 + VAR_84) {
   VAR_64 = 1;
   *VAR_59 = (VAR_71 + VAR_45
     + VAR_29 + VAR_82 + VAR_83 + VAR_84) / VAR_70;
  } else
   *VAR_59 = 0.0;
 } else
  VAR_69 = 0;

 if (VAR_23) {
  if (VAR_22 == 4)
   *VAR_60 = VAR_29 + VAR_28;
  else if (VAR_22 == 3)
   *VAR_60 = VAR_29;
  else
   *VAR_60 = 0;
 } else if (VAR_27)
  *VAR_60 = VAR_70;
 else
  *VAR_60 = VAR_70 / 4;

 VAR_72 = VAR_21 - FUNC_2(VAR_30 + VAR_45, VAR_47) / VAR_70
   - (VAR_71 + VAR_69) / VAR_70
   - (*VAR_51 + *VAR_50 / VAR_19);

 VAR_73 = FUNC_2(VAR_34, VAR_39) * VAR_70;

 VAR_74 = (VAR_32 + VAR_33
   + VAR_34 * VAR_35 * FUNC_0(VAR_36, 1)
   + VAR_39 * VAR_35 / 2 * FUNC_0(VAR_40, 2))
   / VAR_73;

 if (VAR_23 == 1) {
  VAR_75 =
    FUNC_2(
      *VAR_60 + VAR_31 / VAR_74,
      FUNC_2(
        VAR_29
          + VAR_28
            * (VAR_22
              - 1),
        VAR_70 / 4.0));
 } else
  VAR_75 = VAR_70 / 4.0;

 if ((VAR_23 == 1 || VAR_27 == 1)) {
  VAR_76 = FUNC_2(
    (VAR_32 + VAR_33) / VAR_74,
    FUNC_2(VAR_28, FUNC_2(VAR_70 - VAR_75, VAR_70 / 4)));
 } else
  VAR_76 = VAR_70 - VAR_75;

 VAR_77 = VAR_75 + VAR_76 + VAR_73;

 VAR_78 = VAR_77 / VAR_70;

 if (VAR_78 < VAR_72)
  *VAR_52 = VAR_78;
 else
  *VAR_52 = VAR_72;

 *VAR_52 = FUNC_1(4.0 * (*VAR_52 + 0.125), 1)
   / 4;

 FUNC_3("DML: VStartup: %d\n", VAR_21);
 FUNC_3("DML: TCalc: %f\n", VAR_30);
 FUNC_3("DML: TWait: %f\n", VAR_45);
 FUNC_3("DML: XFCRemoteSurfaceFlipDelay: %f\n", VAR_47);
 FUNC_3("DML: LineTime: %f\n", VAR_70);
 FUNC_3("DML: Tsetup: %f\n", VAR_71);
 FUNC_3("DML: Tdm: %f\n", VAR_69);
 FUNC_3("DML: DSTYAfterScaler: %f\n", *VAR_51);
 FUNC_3("DML: DSTXAfterScaler: %f\n", *VAR_50);
 FUNC_3("DML: HTotal: %d\n", VAR_19);

 *VAR_53 = 0;
 *VAR_54 = 0;
 *VAR_55 = 0;
 *VAR_56 = 0;
 *VAR_57 = 0;
 *VAR_58 = 0;
 if (*VAR_52 > 1) {
  *VAR_53 = (VAR_31 + 2 * VAR_32
    + 2 * VAR_33
    + VAR_34 * VAR_35 * FUNC_0(VAR_36, 1)
    + VAR_39 * VAR_35 / 2
      * FUNC_0(VAR_40, 2))
    / (*VAR_52 * VAR_70 - *VAR_60);
  if (VAR_23) {
   VAR_79 =
     FUNC_2(
       *VAR_60
         + (double) VAR_31
           / *VAR_53,
       FUNC_2(
         VAR_29
           + VAR_28
             * (VAR_22
               - 1),
         VAR_70 / 4));
  } else {
   if (VAR_9 > 0 || VAR_46)
    VAR_79 = VAR_70 / 4;
   else
    VAR_79 = 0.0;
  }

  if ((VAR_23 == 1 || VAR_27 == 1)) {
   VAR_80 =
     FUNC_2(
       (VAR_32 + VAR_33)
         / *VAR_53,
       FUNC_2(
         VAR_28,
         FUNC_2(
           VAR_70
             - VAR_79,
           VAR_70
             / 4.0)));
  } else {
   if (VAR_9 > 0 || VAR_46)
    VAR_80 = VAR_70 - VAR_79;
   else
    VAR_80 = 0.0;
  }

  *VAR_54 = FUNC_1(
    4.0 * (VAR_79 / VAR_70 + 0.125),
    1) / 4.0;

  *VAR_55 = FUNC_1(
    4.0 * (VAR_80 / VAR_70 + 0.125),
    1) / 4.0;

  VAR_81 =
    *VAR_52
      - ((VAR_9 > 0 || VAR_23
        || VAR_27) ?
        (*VAR_54
          + *VAR_55) :
        0.0);

  if (VAR_81 > 0) {

   *VAR_56 = (double) VAR_34
     / VAR_81;
   *VAR_56 = FUNC_2(*VAR_56, 1.0);
   if ((VAR_43 > 4) && (VAR_37 > 3)) {
    if (VAR_81 > (VAR_37 - 3.0) / 2.0) {
     *VAR_56 =
       FUNC_2(
         (double) VAR_34
           / VAR_81,
         (double) VAR_38
           * VAR_43
           / (VAR_81
             - (VAR_37
               - 3.0)
               / 2.0));
     *VAR_56 = FUNC_2(*VAR_56, 1.0);
    } else {
     VAR_64 = 1;
     *VAR_56 = 0;
    }
   }

   *VAR_57 = (double) VAR_39
     / VAR_81;
   *VAR_57 = FUNC_2(*VAR_57, 1.0);

   if ((VAR_44 > 4)) {
    if (VAR_81 > (VAR_41 - 3.0) / 2.0) {
     *VAR_57 =
       FUNC_2(
         *VAR_57,
         (double) VAR_42
           * VAR_44
           / (VAR_81
             - (VAR_41
               - 3.0)
               / 2.0));
     *VAR_57 = FUNC_2(*VAR_57, 1.0);
    } else {
     VAR_64 = 1;
     *VAR_57 = 0;
    }
   }

   *VAR_58 =
     VAR_7
       * ((double) VAR_34
         / VAR_81
         * FUNC_0(
           VAR_36,
           1)
         + (double) VAR_39
           / VAR_81
           * FUNC_0(
             VAR_40,
             2)
           / 2)
       * VAR_35 / VAR_70;
  } else {
   VAR_64 = 1;
   *VAR_56 = 0;
   *VAR_57 = 0;
   *VAR_58 = 0;
  }

 } else {
  VAR_64 = 1;
 }

 if (VAR_64) {
  *VAR_53 = 0;
  VAR_79 = 0;
  VAR_80 = 0;
  *VAR_54 = 0;
  *VAR_55 = 0;
  *VAR_52 = 0;
  VAR_81 = 0;
  *VAR_56 = 0;
  *VAR_57 = 0;
  *VAR_58 = 0;
 }

 return VAR_64;
}
