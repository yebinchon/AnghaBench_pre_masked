
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb {int status; int dev; scalar_t__ regs; int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sunxi_rsb *VAR_15)
{
 if (FUNC_2(VAR_15->regs + VAR_4) & VAR_7) {
  FUNC_0(VAR_15->dev, "RSB transfer still in progress\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_15->complete);

 FUNC_5(VAR_10 | VAR_11 | VAR_14,
        VAR_15->regs + VAR_8);
 FUNC_5(VAR_7 | VAR_6,
        VAR_15->regs + VAR_4);

 if (!FUNC_4(&VAR_15->complete,
         FUNC_1(100))) {
  FUNC_0(VAR_15->dev, "RSB timeout\n");


  FUNC_5(VAR_5, VAR_15->regs + VAR_4);


  FUNC_5(FUNC_2(VAR_15->regs + VAR_9), VAR_15->regs + VAR_9);

  return -VAR_3;
 }

 if (VAR_15->status & VAR_10) {
  FUNC_0(VAR_15->dev, "RSB busy\n");
  return -VAR_0;
 }

 if (VAR_15->status & VAR_11) {
  if (VAR_15->status & VAR_12) {
   FUNC_0(VAR_15->dev, "RSB slave nack\n");
   return -VAR_1;
  }

  if (VAR_15->status & VAR_13) {
   FUNC_0(VAR_15->dev, "RSB transfer data error\n");
   return -VAR_2;
  }
 }

 return 0;
}
