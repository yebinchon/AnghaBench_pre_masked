
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_soc {struct ipu_ic_priv* ic_priv; } ;
struct ipu_ic_priv {TYPE_1__* task; struct ipu_soc* ipu; void* base; void* tpmem_base; int lock; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int task; int * bit; int * reg; struct ipu_ic_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,unsigned long,void*) ;
 void* FUNC_1 (struct device*,unsigned long,int ) ;
 struct ipu_ic_priv* FUNC_2 (struct device*,int,int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ipu_soc *VAR_7, struct device *VAR_8,
  unsigned long VAR_9, unsigned long VAR_10)
{
 struct ipu_ic_priv *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_8, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_7->ic_priv = VAR_11;

 FUNC_3(&VAR_11->lock);
 VAR_11->base = FUNC_1(VAR_8, VAR_9, VAR_3);
 if (!VAR_11->base)
  return -VAR_0;
 VAR_11->tpmem_base = FUNC_1(VAR_8, VAR_10, VAR_4);
 if (!VAR_11->tpmem_base)
  return -VAR_0;

 FUNC_0(VAR_8, "IC base: 0x%08lx remapped to %p\n", VAR_9, VAR_11->base);

 VAR_11->ipu = VAR_7;

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_11->task[VAR_12].task = VAR_12;
  VAR_11->task[VAR_12].priv = VAR_11;
  VAR_11->task[VAR_12].reg = &VAR_6[VAR_12];
  VAR_11->task[VAR_12].bit = &VAR_5[VAR_12];
 }

 return 0;
}
