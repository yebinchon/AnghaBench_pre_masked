
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcde {int regs; int dev; int flow_lock; scalar_t__ flow_active; } ;
typedef enum mcde_fifo { ____Placeholder_mcde_fifo } mcde_fifo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct mcde *VAR_3, enum mcde_fifo VAR_4,
         bool VAR_5)
{
 int VAR_6 = 100;
 u32 VAR_7;
 u32 VAR_8;

 switch (VAR_4) {
 case 129:
  VAR_8 = VAR_0;
  break;
 case 128:
  VAR_8 = VAR_1;
  break;
 default:
  FUNC_0(VAR_3->dev, "cannot disable FIFO %c\n",
   'A' + VAR_4);
  return;
 }

 FUNC_2(&VAR_3->flow_lock);
 VAR_7 = FUNC_1(VAR_3->regs + VAR_8);
 VAR_7 &= ~VAR_2;
 FUNC_5(VAR_7, VAR_3->regs + VAR_8);
 VAR_3->flow_active = 0;
 FUNC_3(&VAR_3->flow_lock);

 if (!VAR_5)
  return;


 while (FUNC_1(VAR_3->regs + VAR_8) & VAR_2) {
  FUNC_4(1000, 1500);
  if (!--VAR_6) {
   FUNC_0(VAR_3->dev,
    "FIFO timeout while clearing FIFO %c\n",
    'A' + VAR_4);
   return;
  }
 }
}
