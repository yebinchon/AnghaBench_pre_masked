
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct safexcel_crypto_priv {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_11 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,int,int,int,int) ;
 int FUNC_9 (struct safexcel_crypto_priv*,int,int) ;
 int FUNC_10 (struct safexcel_crypto_priv*,int,int) ;
 int FUNC_11 (struct safexcel_crypto_priv*) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (scalar_t__) ;
 int VAR_12 ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct safexcel_crypto_priv *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;


 FUNC_11(VAR_13);





 VAR_14 = FUNC_13(VAR_13->base + VAR_2);
 VAR_14 &= ~VAR_6;
 VAR_14 |= VAR_5 | VAR_0;
 FUNC_14(VAR_14, VAR_13->base + VAR_2);
 VAR_14 = FUNC_13(VAR_13->base + VAR_2);
 VAR_23 = ((VAR_14&VAR_0)>>VAR_1) + 1;


 FUNC_14(0, VAR_13->base + VAR_4);





 VAR_14 = FUNC_13(VAR_13->base + VAR_8);
 VAR_14 |= VAR_11 | VAR_10;
 FUNC_14(VAR_14, VAR_13->base + VAR_8);


 VAR_15 = FUNC_10(VAR_13, VAR_23, 0xffffffff);






 VAR_14 = FUNC_13(VAR_13->base + VAR_8);

 VAR_14 &= ~(VAR_10 | VAR_0);
 FUNC_14(VAR_14, VAR_13->base + VAR_8);


 VAR_16 = FUNC_10(VAR_13, 0, 0xbfffffff) >> 4;


 FUNC_14(0, VAR_13->base + VAR_4);
 VAR_19 = VAR_3;
 VAR_20 = VAR_3;





 VAR_21 = FUNC_12(VAR_12, ((VAR_15 >> 2) / VAR_20), 1023);

 VAR_17 = FUNC_12(VAR_12, VAR_21, (VAR_16 >> 1));

 VAR_22 = FUNC_7(VAR_16 - VAR_17) - 2;

 VAR_18 = 16<<VAR_22;

 VAR_17 = FUNC_12(VAR_12, VAR_21, VAR_16 - (VAR_18 >> 4));


 FUNC_9(VAR_13, VAR_17, VAR_18);


 VAR_14 = FUNC_13(VAR_13->base + VAR_2);
 VAR_14 &= ~VAR_6;
 FUNC_14(VAR_14, VAR_13->base + VAR_2);


 VAR_14 = FUNC_0(0) |
       FUNC_1(VAR_17 - 1);
 FUNC_14(VAR_14, VAR_13->base + VAR_7);


 VAR_14 = FUNC_3(VAR_19) |
       FUNC_2(VAR_17);
 FUNC_14(VAR_14, VAR_13->base + VAR_9);


 VAR_14 = FUNC_6(VAR_20) |
       FUNC_4(1) |
       FUNC_5(VAR_22);
 FUNC_14(VAR_14, VAR_13->base + VAR_8);

 FUNC_8(VAR_13->dev, "TRC init: %dd,%da (%dr,%dh)\n",
   VAR_15, VAR_16, VAR_17, VAR_18 + VAR_18);
}
