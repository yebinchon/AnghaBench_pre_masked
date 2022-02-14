
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int lock; } ;
struct dw_i3c_master {TYPE_1__ xferqueue; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dw_i3c_master*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct dw_i3c_master *VAR_8 = VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_8->regs + VAR_1);

 if (!(VAR_9 & FUNC_1(VAR_8->regs + VAR_2))) {
  FUNC_4(VAR_0, VAR_8->regs + VAR_1);
  return VAR_5;
 }

 FUNC_2(&VAR_8->xferqueue.lock);
 FUNC_0(VAR_8, VAR_9);
 if (VAR_9 & VAR_3)
  FUNC_4(VAR_3, VAR_8->regs + VAR_1);
 FUNC_3(&VAR_8->xferqueue.lock);

 return VAR_4;
}
