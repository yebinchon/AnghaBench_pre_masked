
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {struct ipu_cpmem* cpmem_priv; } ;
struct ipu_cpmem {struct ipu_soc* ipu; int base; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned long,int ) ;
 int FUNC_1 (struct device*,unsigned long,int ) ;
 struct ipu_cpmem* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ipu_soc *VAR_3, struct device *VAR_4, unsigned long VAR_5)
{
 struct ipu_cpmem *VAR_6;

 VAR_6 = FUNC_2(VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_3->cpmem_priv = VAR_6;

 FUNC_3(&VAR_6->lock);
 VAR_6->base = FUNC_1(VAR_4, VAR_5, VAR_2);
 if (!VAR_6->base)
  return -VAR_0;

 FUNC_0(VAR_4, "CPMEM base: 0x%08lx remapped to %p\n",
  VAR_5, VAR_6->base);
 VAR_6->ipu = VAR_3;

 return 0;
}
