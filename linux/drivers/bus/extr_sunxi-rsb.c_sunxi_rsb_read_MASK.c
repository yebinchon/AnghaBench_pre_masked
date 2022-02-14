
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sunxi_rsb {int lock; scalar_t__ regs; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct sunxi_rsb*) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct sunxi_rsb *VAR_8, u8 VAR_9, u8 VAR_10,
     u32 *VAR_11, size_t VAR_12)
{
 u32 VAR_13;
 int VAR_14;

 if (!VAR_11)
  return -VAR_0;

 switch (VAR_12) {
 case 1:
  VAR_13 = VAR_5;
  break;
 case 2:
  VAR_13 = VAR_3;
  break;
 case 4:
  VAR_13 = VAR_4;
  break;
 default:
  FUNC_2(VAR_8->dev, "Invalid access width: %zd\n", VAR_12);
  return -VAR_0;
 }

 FUNC_3(&VAR_8->lock);

 FUNC_6(VAR_10, VAR_8->regs + VAR_1);
 FUNC_6(FUNC_0(VAR_9), VAR_8->regs + VAR_6);
 FUNC_6(VAR_13, VAR_8->regs + VAR_2);

 VAR_14 = FUNC_1(VAR_8);
 if (VAR_14)
  goto unlock;

 *VAR_11 = FUNC_5(VAR_8->regs + VAR_7);

unlock:
 FUNC_4(&VAR_8->lock);

 return VAR_14;
}
