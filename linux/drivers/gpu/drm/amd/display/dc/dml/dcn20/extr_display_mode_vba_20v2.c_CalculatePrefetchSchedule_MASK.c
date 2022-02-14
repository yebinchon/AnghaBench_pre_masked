
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_mode_lib {int dummy; } ;


 double FUNC_0 (double,int) ;
 double FUNC_1 (double,int) ;
 double FUNC_2 (double,double) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static bool FUNC_4(
  struct display_mode_lib *VAR_0,
  double VAR_1,
  double VAR_2,
  double VAR_3,
  double VAR_4,
  unsigned int VAR_5,
  unsigned int VAR_6,
  unsigned int VAR_7,
  unsigned int VAR_8,
  unsigned int VAR_9,
  unsigned int VAR_10,
  unsigned int VAR_11,
  bool VAR_12,
  bool VAR_13,
  unsigned int VAR_14,
  unsigned int VAR_15,
  bool VAR_16,
  double VAR_17,
  double VAR_18,
  double VAR_19,
  unsigned int VAR_20,
  unsigned int VAR_21,
  unsigned int VAR_22,
  double VAR_23,
  unsigned int VAR_24,
  double VAR_25,
  double VAR_26,
  unsigned int VAR_27,
  double VAR_28,
  double VAR_29,
  double VAR_30,
  unsigned int VAR_31,
  unsigned int VAR_32,
  unsigned int VAR_33,
  double VAR_34,
  bool VAR_35,
  double VAR_36,
  bool VAR_37,
  bool VAR_38,
  double VAR_39,
  double VAR_40,
  double *VAR_41,
  double *VAR_42,
  double *VAR_43,
  double *VAR_44,
  double *VAR_45,
  double *VAR_46,
  double *VAR_47,
  double *VAR_48,
  unsigned int *VAR_49,
  double *VAR_50,
  double *VAR_51)
{
 bool VAR_52 = 0;
 double VAR_53;
 double VAR_54, VAR_55, VAR_56;
 double VAR_57;
 double VAR_58;
 double VAR_59;
 double VAR_60;
 double VAR_61;
 double VAR_62;
 double VAR_63;
 double VAR_64 = 0;
 double VAR_65 = 0;
 double VAR_66 = 0;

 *VAR_49 = FUNC_0(VAR_8 / 4.0, 1);
 VAR_53 = VAR_9 * (2.0 / VAR_1 + 3.0 / VAR_2);
 *VAR_50 = (14.0 / VAR_4 + 12.0 / VAR_1 + VAR_53)
   * VAR_3;

 *VAR_51 = FUNC_2(
   150.0 / VAR_1,
   VAR_53 + 20.0 / VAR_4 + 10.0 / VAR_1)
   * VAR_3;

 VAR_56 = (double) (*VAR_49 + *VAR_50 + *VAR_51) / VAR_3;

 VAR_55 = (double) VAR_8 / VAR_3;

 if (VAR_13) {
  double VAR_67, VAR_68, VAR_69;

  VAR_54 = FUNC_2(0.0, VAR_18 - VAR_19);
  VAR_67 = VAR_15 / 4.0 / VAR_2;
  VAR_68 = VAR_55;
  if (VAR_14 == 0)
   VAR_69 = VAR_7 * VAR_55 / 2.0;
  else
   VAR_69 = VAR_14 * VAR_55;
  if (VAR_37 && !VAR_38)
   VAR_69 = VAR_69 / 2;
  if (VAR_10 * VAR_55
    < VAR_56 + VAR_34 + VAR_18 + VAR_67 + VAR_68 + VAR_69) {
   VAR_52 = 1;
  }
 } else
  VAR_54 = 0;

 if (VAR_12) {
  if (VAR_11 == 4)
   *VAR_48 = VAR_18 + VAR_17;
  else if (VAR_11 == 3)
   *VAR_48 = VAR_18;
  else
   *VAR_48 = 0;
 } else if (VAR_16)
  *VAR_48 = VAR_55;
 else
  *VAR_48 = VAR_55 / 4;

 VAR_57 = VAR_10 - FUNC_2(VAR_19 + VAR_34, VAR_36) / VAR_55
   - (VAR_56 + VAR_54) / VAR_55
   - (VAR_40 + VAR_39 / VAR_8);

 VAR_58 = FUNC_2(VAR_23, VAR_28) * VAR_55;

 VAR_59 = (VAR_21 + VAR_22
   + VAR_23 * VAR_24 * FUNC_0(VAR_25, 1)
   + VAR_28 * VAR_24 / 2 * FUNC_0(VAR_29, 2))
   / VAR_58;

 if (VAR_12 == 1) {
  VAR_60 =
    FUNC_2(
      *VAR_48 + VAR_20 / VAR_59,
      FUNC_2(
        VAR_18
          + VAR_17
            * (VAR_11
              - 1),
        VAR_55 / 4.0));
 } else
  VAR_60 = VAR_55 / 4.0;

 if ((VAR_12 == 1 || VAR_16 == 1)) {
  VAR_61 = FUNC_2(
    (VAR_21 + VAR_22) / VAR_59,
    FUNC_2(VAR_17, FUNC_2(VAR_55 - VAR_60, VAR_55 / 4)));
 } else
  VAR_61 = VAR_55 - VAR_60;

 VAR_62 = VAR_60 + VAR_61 + VAR_58;

 VAR_63 = VAR_62 / VAR_55;

 if (VAR_63 < VAR_57)
  *VAR_41 = VAR_63;
 else
  *VAR_41 = VAR_57;

 *VAR_41 = FUNC_1(4.0 * (*VAR_41 + 0.125), 1)
   / 4;

 FUNC_3("DML: VStartup: %d\n", VAR_10);
 FUNC_3("DML: TCalc: %f\n", VAR_19);
 FUNC_3("DML: TWait: %f\n", VAR_34);
 FUNC_3("DML: XFCRemoteSurfaceFlipDelay: %f\n", VAR_36);
 FUNC_3("DML: LineTime: %f\n", VAR_55);
 FUNC_3("DML: Tsetup: %f\n", VAR_56);
 FUNC_3("DML: Tdm: %f\n", VAR_54);
 FUNC_3("DML: DSTYAfterScaler: %f\n", VAR_40);
 FUNC_3("DML: DSTXAfterScaler: %f\n", VAR_39);
 FUNC_3("DML: HTotal: %d\n", VAR_8);

 *VAR_42 = 0;
 *VAR_43 = 0;
 *VAR_44 = 0;
 *VAR_45 = 0;
 *VAR_46 = 0;
 *VAR_47 = 0;
 if (*VAR_41 > 1) {
  *VAR_42 = (VAR_20 + 2 * VAR_21
    + 2 * VAR_22
    + VAR_23 * VAR_24 * FUNC_0(VAR_25, 1)
    + VAR_28 * VAR_24 / 2
      * FUNC_0(VAR_29, 2))
    / (*VAR_41 * VAR_55 - *VAR_48);
  if (VAR_12) {
   VAR_64 =
     FUNC_2(
       *VAR_48
         + (double) VAR_20
           / *VAR_42,
       FUNC_2(
         VAR_18
           + VAR_17
             * (VAR_11
               - 1),
         VAR_55 / 4));
  } else {
   if (VAR_6 > 0 || VAR_35)
    VAR_64 = VAR_55 / 4;
   else
    VAR_64 = 0.0;
  }

  if ((VAR_12 == 1 || VAR_16 == 1)) {
   VAR_65 =
     FUNC_2(
       (VAR_21 + VAR_22)
         / *VAR_42,
       FUNC_2(
         VAR_17,
         FUNC_2(
           VAR_55
             - VAR_64,
           VAR_55
             / 4.0)));
  } else {
   if (VAR_6 > 0 || VAR_35)
    VAR_65 = VAR_55 - VAR_64;
   else
    VAR_65 = 0.0;
  }

  *VAR_43 = FUNC_1(
    4.0 * (VAR_64 / VAR_55 + 0.125),
    1) / 4.0;

  *VAR_44 = FUNC_1(
    4.0 * (VAR_65 / VAR_55 + 0.125),
    1) / 4.0;

  VAR_66 =
    *VAR_41
      - ((VAR_6 > 0 || VAR_12
        || VAR_16) ?
        (*VAR_43
          + *VAR_44) :
        0.0);

  if (VAR_66 > 0) {

   *VAR_45 = (double) VAR_23
     / VAR_66;
   *VAR_45 = FUNC_2(*VAR_45, 1.0);
   if ((VAR_32 > 4) && (VAR_26 > 3)) {
    if (VAR_66 > (VAR_26 - 3.0) / 2.0) {
     *VAR_45 =
       FUNC_2(
         (double) VAR_23
           / VAR_66,
         (double) VAR_27
           * VAR_32
           / (VAR_66
             - (VAR_26
               - 3.0)
               / 2.0));
     *VAR_45 = FUNC_2(*VAR_45, 1.0);
    } else {
     VAR_52 = 1;
     *VAR_45 = 0;
    }
   }

   *VAR_46 = (double) VAR_28
     / VAR_66;
   *VAR_46 = FUNC_2(*VAR_46, 1.0);

   if ((VAR_33 > 4)) {
    if (VAR_66 > (VAR_30 - 3.0) / 2.0) {
     *VAR_46 =
       FUNC_2(
         *VAR_46,
         (double) VAR_31
           * VAR_33
           / (VAR_66
             - (VAR_30
               - 3.0)
               / 2.0));
     *VAR_46 = FUNC_2(*VAR_46, 1.0);
    } else {
     VAR_52 = 1;
     *VAR_46 = 0;
    }
   }

   *VAR_47 =
     VAR_5
       * ((double) VAR_23
         / VAR_66
         * FUNC_0(
           VAR_25,
           1)
         + (double) VAR_28
           / VAR_66
           * FUNC_0(
             VAR_29,
             2)
           / 2)
       * VAR_24 / VAR_55;
  } else {
   VAR_52 = 1;
   *VAR_45 = 0;
   *VAR_46 = 0;
   *VAR_47 = 0;
  }

 } else {
  VAR_52 = 1;
 }

 if (VAR_52) {
  *VAR_42 = 0;
  VAR_64 = 0;
  VAR_65 = 0;
  *VAR_43 = 0;
  *VAR_44 = 0;
  *VAR_41 = 0;
  VAR_66 = 0;
  *VAR_45 = 0;
  *VAR_46 = 0;
  *VAR_47 = 0;
 }

 return VAR_52;
}
