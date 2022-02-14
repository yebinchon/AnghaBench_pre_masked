
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct safexcel_ring_irq_data {int ring; struct safexcel_crypto_priv* priv; } ;
struct safexcel_crypto_priv {int dev; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 struct safexcel_ring_irq_data *VAR_7 = VAR_6;
 struct safexcel_crypto_priv *VAR_8 = VAR_7->priv;
 int VAR_9 = VAR_7->ring, VAR_10 = VAR_3;
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_7(FUNC_0(VAR_8) + FUNC_2(VAR_9));
 if (!VAR_11)
  return VAR_10;


 if (VAR_11 & FUNC_4(VAR_9)) {
  VAR_12 = FUNC_7(FUNC_3(VAR_8, VAR_9) + VAR_0);

  if (FUNC_8(VAR_12 & VAR_1)) {





   FUNC_5(VAR_8->dev, "RDR: fatal error.\n");
  } else if (FUNC_6(VAR_12 & VAR_2)) {
   VAR_10 = VAR_4;
  }


  FUNC_9(VAR_12 & 0xff,
         FUNC_3(VAR_8, VAR_9) + VAR_0);
 }


 FUNC_9(VAR_11, FUNC_0(VAR_8) + FUNC_1(VAR_9));

 return VAR_10;
}
