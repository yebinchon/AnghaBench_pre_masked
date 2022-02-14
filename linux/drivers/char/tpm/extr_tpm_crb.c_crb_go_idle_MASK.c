
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct tpm_chip {struct device dev; } ;
struct crb_priv {int dummy; } ;


 int FUNC_0 (struct device*,struct crb_priv*) ;
 struct crb_priv* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct tpm_chip *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct crb_priv *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_1, VAR_2);
}
