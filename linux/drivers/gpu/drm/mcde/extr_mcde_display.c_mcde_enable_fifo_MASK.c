
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mcde {int flow_lock; int flow_active; scalar_t__ regs; int dev; } ;
typedef enum mcde_fifo { ____Placeholder_mcde_fifo } mcde_fifo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (int ,char*,char) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mcde *VAR_3, enum mcde_fifo VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 switch (VAR_4) {
 case 129:
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_6 = VAR_1;
  break;
 default:
  FUNC_0(VAR_3->dev, "cannot enable FIFO %c\n",
   'A' + VAR_4);
  return;
 }

 FUNC_2(&VAR_3->flow_lock);
 VAR_5 = FUNC_1(VAR_3->regs + VAR_6);
 VAR_5 |= VAR_2;
 FUNC_4(VAR_5, VAR_3->regs + VAR_6);
 VAR_3->flow_active++;
 FUNC_3(&VAR_3->flow_lock);
}
