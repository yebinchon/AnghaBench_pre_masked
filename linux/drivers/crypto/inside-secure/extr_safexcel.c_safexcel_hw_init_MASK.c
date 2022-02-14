
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pes; int rings; int cd_offset; int rd_offset; } ;
struct safexcel_crypto_priv {int flags; TYPE_1__ config; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_1 (struct safexcel_crypto_priv*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ FUNC_5 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (struct safexcel_crypto_priv*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_21 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_22 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_27 (int) ;
 scalar_t__ FUNC_28 (int) ;
 scalar_t__ FUNC_29 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_30 (int) ;
 scalar_t__ FUNC_31 (int) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int) ;
 scalar_t__ FUNC_34 (int) ;
 int FUNC_35 (int) ;
 int FUNC_36 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_37 (int,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_38 (int ,char*,int,int) ;
 int FUNC_39 (struct safexcel_crypto_priv*) ;
 int FUNC_40 (struct safexcel_crypto_priv*) ;
 int FUNC_41 (scalar_t__) ;
 int FUNC_42 (struct safexcel_crypto_priv*) ;
 int FUNC_43 (struct safexcel_crypto_priv*) ;
 int FUNC_44 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_45(struct safexcel_crypto_priv *VAR_31)
{
 u32 VAR_32;
 int VAR_33, VAR_34, VAR_35;

 FUNC_38(VAR_31->dev, "HW init: using %d pipe(s) and %d ring(s)\n",
  VAR_31->config.pes, VAR_31->config.rings);





 if (VAR_31->flags & VAR_28) {
  VAR_32 = FUNC_41(FUNC_0(VAR_31) + VAR_10);
  VAR_32 |= FUNC_24(5);
  FUNC_44(VAR_32, FUNC_0(VAR_31) + VAR_10);
 }


 FUNC_44(FUNC_23(VAR_27) |
        FUNC_25(VAR_30),
        FUNC_20(VAR_31) + VAR_19);




 FUNC_44(0, FUNC_1(VAR_31) + VAR_5);


 FUNC_44(FUNC_37(31, 0), FUNC_1(VAR_31) + VAR_4);


 for (VAR_35 = 0; VAR_35 < VAR_31->config.pes; VAR_35++) {



  FUNC_44(VAR_2,
         FUNC_7(VAR_31) + FUNC_8(VAR_35));

  if (VAR_31->flags & VAR_28)

   FUNC_44(VAR_12,
          FUNC_0(VAR_31) + FUNC_21(VAR_35));


  VAR_32 = VAR_6;
  VAR_32 |= FUNC_19(6) |
         FUNC_17(9);
  VAR_32 |= FUNC_18(6) |
         FUNC_16(7);
  VAR_32 |= FUNC_15(VAR_26);
  VAR_32 |= FUNC_14(VAR_26);
  FUNC_44(VAR_32, FUNC_5(VAR_31) + FUNC_6(VAR_35));


  FUNC_44(0, FUNC_7(VAR_31) + FUNC_8(VAR_35));


  FUNC_44(FUNC_33(6) |
         FUNC_32(9),
         FUNC_26(VAR_31) + FUNC_30(VAR_35));
  FUNC_44(FUNC_33(6) |
         FUNC_32(7),
         FUNC_26(VAR_31) + FUNC_31(VAR_35));

  if (VAR_31->flags & VAR_28)

   FUNC_44(VAR_11 |
          FUNC_37(VAR_31->config.rings - 1, 0),
          FUNC_0(VAR_31) + FUNC_21(VAR_35));




  FUNC_44(VAR_2,
         FUNC_11(VAR_31) + FUNC_12(VAR_35));


  while ((FUNC_41(FUNC_11(VAR_31) + FUNC_13(VAR_35)) &
   FUNC_37(15, 12)) != FUNC_37(15, 12))
   ;


  VAR_32 = VAR_8;
  VAR_32 |= FUNC_19(7) |
         FUNC_17(8);
  VAR_32 |= FUNC_15(VAR_29);
  VAR_32 |= VAR_7;



  if (VAR_31->flags & VAR_28)
   VAR_32 |= VAR_9;
  FUNC_44(VAR_32, FUNC_9(VAR_31) + FUNC_10(VAR_35));


  FUNC_44(0, FUNC_11(VAR_31) + FUNC_12(VAR_35));


  FUNC_44(FUNC_36(7) |
         FUNC_35(8),
         FUNC_26(VAR_31) + FUNC_34(VAR_35));




  VAR_32 = VAR_20 |
        VAR_22 |
        VAR_21;
  FUNC_44(VAR_32, FUNC_26(VAR_31) + FUNC_29(VAR_35));


  FUNC_44(VAR_3,
         FUNC_26(VAR_31) + FUNC_28(VAR_35));
  FUNC_44(VAR_3,
         FUNC_26(VAR_31) + FUNC_27(VAR_35));
 }


 for (VAR_33 = 0; VAR_33 < VAR_31->config.rings; VAR_33++) {

  FUNC_44(FUNC_37(31, 0),
         FUNC_2(VAR_31) + FUNC_3(VAR_33));


  FUNC_44(0, FUNC_4(VAR_31, VAR_33) + VAR_13);


  FUNC_44(VAR_24,
         FUNC_4(VAR_31, VAR_33) + VAR_14);


  FUNC_44(VAR_25,
         FUNC_4(VAR_31, VAR_33) + VAR_16);

  FUNC_44(0,
         FUNC_4(VAR_31, VAR_33) + VAR_15);
  FUNC_44(0,
         FUNC_4(VAR_31, VAR_33) + VAR_17);

  FUNC_44((VAR_0 * VAR_31->config.cd_offset) << 2,
         FUNC_4(VAR_31, VAR_33) + VAR_18);
 }


 for (VAR_33 = 0; VAR_33 < VAR_31->config.rings; VAR_33++) {

  FUNC_44(0, FUNC_22(VAR_31, VAR_33) + VAR_13);


  FUNC_44(VAR_24,
         FUNC_22(VAR_31, VAR_33) + VAR_14);


  FUNC_44(VAR_25,
         FUNC_22(VAR_31, VAR_33) + VAR_16);

  FUNC_44(0,
         FUNC_22(VAR_31, VAR_33) + VAR_15);
  FUNC_44(0,
         FUNC_22(VAR_31, VAR_33) + VAR_17);


  FUNC_44((VAR_0 * VAR_31->config.rd_offset) << 2,
         FUNC_22(VAR_31, VAR_33) + VAR_18);
 }

 for (VAR_35 = 0; VAR_35 < VAR_31->config.pes; VAR_35++) {

  FUNC_44(VAR_1 | FUNC_37(VAR_31->config.rings - 1, 0),
         FUNC_7(VAR_31) + FUNC_8(VAR_35));


  FUNC_44(VAR_1 | FUNC_37(VAR_31->config.rings - 1, 0),
         FUNC_11(VAR_31) + FUNC_12(VAR_35));
 }


 FUNC_44(FUNC_37(30, 20), FUNC_1(VAR_31) + VAR_4);

 if (VAR_31->flags & VAR_28) {
  FUNC_40(VAR_31);
  VAR_31->flags |= VAR_23;

  VAR_34 = FUNC_39(VAR_31);
  if (VAR_34)
   return VAR_34;
 }

 FUNC_42(VAR_31);
 FUNC_43(VAR_31);

 return 0;
}
