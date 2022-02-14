
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipuv3_channel {TYPE_1__* ipu; int num; } ;
struct ipu_prg_channel {int enabled; } ;
struct ipu_prg {int dev; scalar_t__ regs; struct ipu_prg_channel* chan; } ;
struct TYPE_2__ {struct ipu_prg* prg_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipu_prg*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

void FUNC_7(struct ipuv3_channel *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3->num);
 struct ipu_prg *VAR_5 = VAR_3->ipu->prg_priv;
 struct ipu_prg_channel *VAR_6;
 u32 VAR_7;

 if (VAR_4 < 0)
  return;

 VAR_6 = &VAR_5->chan[VAR_4];
 if (!VAR_6->enabled)
  return;

 FUNC_3(VAR_5->dev);

 VAR_7 = FUNC_5(VAR_5->regs + VAR_0);
 VAR_7 |= FUNC_0(VAR_4);
 FUNC_6(VAR_7, VAR_5->regs + VAR_0);

 VAR_7 = VAR_2;
 FUNC_6(VAR_7, VAR_5->regs + VAR_1);

 FUNC_4(VAR_5->dev);

 FUNC_2(VAR_5, VAR_4);

 VAR_6->enabled = 0;
}
