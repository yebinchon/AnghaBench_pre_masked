
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct tpm_info {int irq; struct resource res; } ;
struct pnp_device_id {int dummy; } ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (struct pnp_dev*,int ,int ) ;
 int FUNC_1 (struct pnp_dev*,int ) ;
 scalar_t__ FUNC_2 (struct pnp_dev*,int ) ;
 int FUNC_3 (int *,struct tpm_info*) ;

__attribute__((used)) static int FUNC_4(struct pnp_dev *VAR_2,
       const struct pnp_device_id *VAR_3)
{
 struct tpm_info VAR_4 = {};
 struct resource *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, 0);
 if (!VAR_5)
  return -VAR_0;
 VAR_4.res = *VAR_5;

 if (FUNC_2(VAR_2, 0))
  VAR_4.irq = FUNC_1(VAR_2, 0);
 else
  VAR_4.irq = -1;

 return FUNC_3(&VAR_2->dev, &VAR_4);
}
