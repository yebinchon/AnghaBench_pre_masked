
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipuv3_channel {TYPE_1__* ipu; int num; } ;
struct ipu_prg_channel {size_t used_pre; int enabled; } ;
struct ipu_prg {int * pres; struct ipu_prg_channel* chan; } ;
struct TYPE_2__ {struct ipu_prg* prg_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct ipuv3_channel *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0->num);
 struct ipu_prg *VAR_2 = VAR_0->ipu->prg_priv;
 struct ipu_prg_channel *VAR_3;

 if (VAR_1 < 0)
  return 0;

 VAR_3 = &VAR_2->chan[VAR_1];
 FUNC_0(!VAR_3->enabled);

 return FUNC_1(VAR_2->pres[VAR_3->used_pre]);
}
