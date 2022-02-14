
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_soc {struct ipu_di** di_priv; } ;
struct ipu_di {int id; int inuse; struct ipu_soc* ipu; int base; struct clk* clk_ipu; int module; int clk_di; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int,unsigned long,int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,unsigned long,int ) ;
 struct ipu_di* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct ipu_di*,int,int ) ;

int FUNC_7(struct ipu_soc *VAR_5, struct device *VAR_6, int VAR_7,
  unsigned long VAR_8,
  u32 VAR_9, struct clk *VAR_10)
{
 struct ipu_di *VAR_11;

 if (VAR_7 > 1)
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_6, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_5->di_priv[VAR_7] = VAR_11;

 VAR_11->clk_di = FUNC_3(VAR_6, VAR_7 ? "di1" : "di0");
 if (FUNC_0(VAR_11->clk_di))
  return FUNC_1(VAR_11->clk_di);

 VAR_11->module = VAR_9;
 VAR_11->id = VAR_7;
 VAR_11->clk_ipu = VAR_10;
 VAR_11->base = FUNC_4(VAR_6, VAR_8, VAR_4);
 if (!VAR_11->base)
  return -VAR_2;

 FUNC_6(VAR_11, 0x10, VAR_0);

 FUNC_2(VAR_6, "DI%d base: 0x%08lx remapped to %p\n",
   VAR_7, VAR_8, VAR_11->base);
 VAR_11->inuse = 0;
 VAR_11->ipu = VAR_5;

 return 0;
}
