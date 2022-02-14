
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int lock; } ;
struct cdns_i3c_master {TYPE_1__ xferqueue; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct cdns_i3c_master*,int) ;
 int FUNC_1 (struct cdns_i3c_master*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct cdns_i3c_master *VAR_7 = VAR_6;
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_7->regs + VAR_4);
 if (!(VAR_8 & FUNC_2(VAR_7->regs + VAR_2)))
  return VAR_1;

 FUNC_3(&VAR_7->xferqueue.lock);
 FUNC_0(VAR_7, VAR_8);
 FUNC_4(&VAR_7->xferqueue.lock);

 if (VAR_8 & VAR_3)
  FUNC_1(VAR_7);

 return VAR_0;
}
