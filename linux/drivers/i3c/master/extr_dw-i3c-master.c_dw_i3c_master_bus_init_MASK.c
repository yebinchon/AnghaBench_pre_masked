
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i3c_master_controller {int dummy; } ;
struct i3c_device_info {int dyn_addr; } ;
struct i3c_bus {int mode; } ;
struct dw_i3c_master {scalar_t__ regs; int base; } ;
typedef int info ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct dw_i3c_master*) ;
 int FUNC_2 (struct dw_i3c_master*) ;
 int FUNC_3 (struct dw_i3c_master*) ;
 struct i3c_bus* FUNC_4 (struct i3c_master_controller*) ;
 int FUNC_5 (struct i3c_master_controller*,int ) ;
 int FUNC_6 (int *,struct i3c_device_info*) ;
 int FUNC_7 (struct i3c_device_info*,int ,int) ;
 int FUNC_8 (scalar_t__) ;
 struct dw_i3c_master* FUNC_9 (struct i3c_master_controller*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct i3c_master_controller *VAR_17)
{
 struct dw_i3c_master *VAR_18 = FUNC_9(VAR_17);
 struct i3c_bus *VAR_19 = FUNC_4(VAR_17);
 struct i3c_device_info VAR_20 = { };
 u32 VAR_21;
 int VAR_22;

 switch (VAR_19->mode) {
 case 130:
 case 129:
  VAR_22 = FUNC_1(VAR_18);
  if (VAR_22)
   return VAR_22;

 case 128:
  VAR_22 = FUNC_2(VAR_18);
  if (VAR_22)
   return VAR_22;
  break;
 default:
  return -VAR_6;
 }

 VAR_21 = FUNC_8(VAR_18->regs + VAR_15);
 VAR_21 &= ~VAR_16;
 FUNC_10(VAR_21, VAR_18->regs + VAR_15);

 VAR_21 = FUNC_8(VAR_18->regs + VAR_0);
 VAR_21 &= ~VAR_1;
 FUNC_10(VAR_21, VAR_18->regs + VAR_0);

 FUNC_10(VAR_10, VAR_18->regs + VAR_13);
 FUNC_10(VAR_11, VAR_18->regs + VAR_14);
 FUNC_10(VAR_11, VAR_18->regs + VAR_12);

 VAR_22 = FUNC_5(VAR_17, 0);
 if (VAR_22 < 0)
  return VAR_22;

 FUNC_10(VAR_4 | FUNC_0(VAR_22),
        VAR_18->regs + VAR_2);

 FUNC_7(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.dyn_addr = VAR_22;

 VAR_22 = FUNC_6(&VAR_18->base, &VAR_20);
 if (VAR_22)
  return VAR_22;

 FUNC_10(VAR_8, VAR_18->regs + VAR_9);
 FUNC_10(VAR_8, VAR_18->regs + VAR_7);


 FUNC_10(FUNC_8(VAR_18->regs + VAR_3) | VAR_5,
        VAR_18->regs + VAR_3);

 FUNC_3(VAR_18);

 return 0;
}
