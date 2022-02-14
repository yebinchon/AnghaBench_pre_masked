
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int completion_timeout; } ;
struct efa_com_dev {TYPE_1__ aq; int efa_dev; scalar_t__ reg_bar; } ;
typedef enum efa_regs_reset_reason_types { ____Placeholder_efa_regs_reset_reason_types } efa_regs_reset_reason_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct efa_com_dev*) ;
 int FUNC_1 (struct efa_com_dev*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct efa_com_dev*,int,int ) ;
 int FUNC_4 (int,scalar_t__) ;

int FUNC_5(struct efa_com_dev *VAR_14,
        enum efa_regs_reset_reason_types VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20;

 VAR_16 = FUNC_1(VAR_14, VAR_10);
 VAR_18 = FUNC_1(VAR_14, VAR_3);

 if (!(VAR_16 & VAR_11)) {
  FUNC_2(VAR_14->efa_dev,
     "Device isn't ready, can't reset device\n");
  return -VAR_13;
 }

 VAR_17 = (VAR_18 & VAR_4) >>
    VAR_5;
 if (!VAR_17) {
  FUNC_2(VAR_14->efa_dev, "Invalid timeout value\n");
  return -VAR_13;
 }


 VAR_19 = VAR_6;
 VAR_19 |= (VAR_15 << VAR_9) &
       VAR_8;
 FUNC_4(VAR_19, VAR_14->reg_bar + VAR_7);


 FUNC_0(VAR_14);

 VAR_20 = FUNC_3(VAR_14, VAR_17,
       VAR_12);
 if (VAR_20) {
  FUNC_2(VAR_14->efa_dev, "Reset indication didn't turn on\n");
  return VAR_20;
 }


 FUNC_4(0, VAR_14->reg_bar + VAR_7);
 VAR_20 = FUNC_3(VAR_14, VAR_17, 0);
 if (VAR_20) {
  FUNC_2(VAR_14->efa_dev, "Reset indication didn't turn off\n");
  return VAR_20;
 }

 VAR_17 = (VAR_18 & VAR_1) >>
    VAR_2;
 if (VAR_17)

  VAR_14->aq.completion_timeout = VAR_17 * 100000;
 else
  VAR_14->aq.completion_timeout = VAR_0;

 return 0;
}
