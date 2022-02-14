
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct tegra_adma_chan {TYPE_2__ vc; TYPE_1__* desc; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int vd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned long FUNC_2 (struct tegra_adma_chan*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct tegra_adma_chan *VAR_4 = VAR_3;
 unsigned long VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_4->vc.lock, VAR_6);

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == 0 || !VAR_4->desc) {
  FUNC_1(&VAR_4->vc.lock, VAR_6);
  return VAR_1;
 }

 FUNC_3(&VAR_4->desc->vd);

 FUNC_1(&VAR_4->vc.lock, VAR_6);

 return VAR_0;
}
