
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct mcs814x_rng_priv {unsigned long priv; int regs; int data_read; int name; } ;
struct hwrng {unsigned long priv; int regs; int data_read; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct resource*) ;
 int FUNC_3 (struct mcs814x_rng_priv*) ;
 int FUNC_4 (struct mcs814x_rng_priv*) ;
 struct mcs814x_rng_priv* FUNC_5 (int,int ) ;
 int VAR_4 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct mcs814x_rng_priv*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct mcs814x_rng_priv *VAR_7;
 struct hwrng *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_6(VAR_5, VAR_3, 0);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto out_priv;
 }

 FUNC_7(VAR_5, VAR_8);
 VAR_8->priv = (unsigned long)VAR_7;
 VAR_8->name = VAR_5->name;
 VAR_8->data_read = VAR_4;

 VAR_7->regs = FUNC_2(&VAR_5->dev, VAR_6);
 if (!VAR_7->regs) {
  VAR_9 = -VAR_1;
  goto out_rng;
 }

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9) {
  FUNC_0(&VAR_5->dev, "failed to register hwrng driver\n");
  goto out;
 }

 FUNC_1(&VAR_5->dev, "registered\n");

 return VAR_9;

out_rng:
 FUNC_7(VAR_5, ((void*)0));
 FUNC_4(VAR_8);
out_priv:
 FUNC_4(VAR_7);
out:
 return VAR_9;
}
