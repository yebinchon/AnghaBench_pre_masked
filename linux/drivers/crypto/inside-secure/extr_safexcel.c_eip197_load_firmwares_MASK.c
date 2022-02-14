
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pes; } ;
struct safexcel_crypto_priv {scalar_t__ version; int dev; TYPE_1__ config; } ;
struct firmware {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_4 (struct safexcel_crypto_priv*,int,int,int) ;
 int FUNC_5 (struct safexcel_crypto_priv*,struct firmware const*) ;
 int FUNC_6 (struct firmware const**,char const*,int ) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (char*,int,char*,char*,char const*) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct safexcel_crypto_priv *VAR_8)
{
 const char *VAR_9[] = {"ifpp.bin", "ipue.bin"};
 const struct firmware *VAR_10[VAR_7];
 char VAR_11[37], *VAR_12 = ((void*)0);
 int VAR_13, VAR_14, VAR_15 = 0, VAR_16;
 int VAR_17, VAR_18, VAR_19 = 0;

 if (VAR_8->version == VAR_1)
  VAR_12 = "eip197d";
 else if (VAR_8->version == VAR_0 ||
   VAR_8->version == VAR_2)
  VAR_12 = "eip197b";
 else
  return -VAR_4;

retry_fw:
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  FUNC_8(VAR_11, 37, "inside-secure/%s/%s", VAR_12, VAR_9[VAR_13]);
  VAR_15 = FUNC_6(&VAR_10[VAR_13], VAR_11, VAR_8->dev);
  if (VAR_15) {
   if (VAR_19 || VAR_8->version != VAR_0)
    goto release_fw;




   VAR_15 = FUNC_6(&VAR_10[VAR_13], VAR_9[VAR_13],
            VAR_8->dev);
   if (VAR_15)
    goto release_fw;
  }
 }

 FUNC_3(VAR_8);

 VAR_18 = FUNC_5(VAR_8, VAR_10[VAR_5]);


 for (VAR_16 = 0; VAR_16 < VAR_8->config.pes; VAR_16++)
  FUNC_9(VAR_3,
         FUNC_0(VAR_8) + FUNC_1(VAR_16));

 VAR_17 = FUNC_5(VAR_8, VAR_10[VAR_6]);

 if (FUNC_4(VAR_8, VAR_17, VAR_18, VAR_19)) {
  FUNC_2(VAR_8->dev, "Firmware loaded successfully\n");
  return 0;
 }

 VAR_15 = -VAR_4;

release_fw:
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  FUNC_7(VAR_10[VAR_14]);

 if (!VAR_19) {

  FUNC_2(VAR_8->dev, "Firmware set not (fully) present or init failed, falling back to BCLA mode\n");
  VAR_12 = "eip197_minifw";
  VAR_19 = 1;
  goto retry_fw;
 }

 FUNC_2(VAR_8->dev, "Firmware load failed.\n");

 return VAR_15;
}
