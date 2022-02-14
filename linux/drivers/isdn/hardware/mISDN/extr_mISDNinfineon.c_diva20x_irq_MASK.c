
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int p; } ;
struct inf_hw {int lock; TYPE_1__ cfg; int ipac; int irqcnt; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_4, void *VAR_5)
{
 struct inf_hw *VAR_6 = VAR_5;
 u8 VAR_7;

 FUNC_2(&VAR_6->lock);
 VAR_7 = FUNC_1(VAR_6->cfg.p);
 if (!(VAR_7 & VAR_2)) {
  FUNC_3(&VAR_6->lock);
  return VAR_1;
 }
 VAR_6->irqcnt++;
 FUNC_0(&VAR_6->ipac, VAR_3);
 FUNC_4(VAR_2, VAR_6->cfg.p);
 FUNC_3(&VAR_6->lock);
 return VAR_0;
}
