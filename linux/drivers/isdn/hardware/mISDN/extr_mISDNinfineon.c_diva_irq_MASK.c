
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ start; } ;
struct inf_hw {int lock; int ipac; int irqcnt; TYPE_1__ cfg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_5, void *VAR_6)
{
 struct inf_hw *VAR_7 = VAR_6;
 u8 VAR_8;

 FUNC_2(&VAR_7->lock);
 VAR_8 = FUNC_0((u32)VAR_7->cfg.start + VAR_1);
 if (!(VAR_8 & VAR_0)) {
  FUNC_3(&VAR_7->lock);
  return VAR_3;
 }
 VAR_7->irqcnt++;
 FUNC_1(&VAR_7->ipac, VAR_4);
 FUNC_3(&VAR_7->lock);
 return VAR_2;
}
