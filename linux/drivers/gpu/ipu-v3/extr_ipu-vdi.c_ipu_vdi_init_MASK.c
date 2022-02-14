
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_vdi {struct ipu_soc* ipu; int base; int module; int lock; } ;
struct ipu_soc {struct ipu_vdi* vdi_priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned long,int ) ;
 int FUNC_1 (struct device*,unsigned long,int ) ;
 struct ipu_vdi* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ipu_soc *VAR_3, struct device *VAR_4,
   unsigned long VAR_5, u32 VAR_6)
{
 struct ipu_vdi *VAR_7;

 VAR_7 = FUNC_2(VAR_4, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_3->vdi_priv = VAR_7;

 FUNC_3(&VAR_7->lock);
 VAR_7->module = VAR_6;
 VAR_7->base = FUNC_1(VAR_4, VAR_5, VAR_2);
 if (!VAR_7->base)
  return -VAR_0;

 FUNC_0(VAR_4, "VDI base: 0x%08lx remapped to %p\n", VAR_5, VAR_7->base);
 VAR_7->ipu = VAR_3;

 return 0;
}
