
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_soc {struct ipu_csi** csi_priv; } ;
struct ipu_csi {int id; struct ipu_soc* ipu; int base; struct clk* clk_ipu; int module; int lock; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int,unsigned long,int ) ;
 int FUNC_1 (struct device*,unsigned long,int ) ;
 struct ipu_csi* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ipu_soc *VAR_4, struct device *VAR_5, int VAR_6,
   unsigned long VAR_7, u32 VAR_8, struct clk *VAR_9)
{
 struct ipu_csi *VAR_10;

 if (VAR_6 > 1)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_5, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_4->csi_priv[VAR_6] = VAR_10;

 FUNC_3(&VAR_10->lock);
 VAR_10->module = VAR_8;
 VAR_10->id = VAR_6;
 VAR_10->clk_ipu = VAR_9;
 VAR_10->base = FUNC_1(VAR_5, VAR_7, VAR_3);
 if (!VAR_10->base)
  return -VAR_1;

 FUNC_0(VAR_5, "CSI%d base: 0x%08lx remapped to %p\n",
  VAR_6, VAR_7, VAR_10->base);
 VAR_10->ipu = VAR_4;

 return 0;
}
