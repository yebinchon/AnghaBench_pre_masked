
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; } ;
typedef enum clock_recovery_m_value_type { ____Placeholder_clock_recovery_m_value_type } clock_recovery_m_value_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct analogix_dp_device *VAR_9,
     enum clock_recovery_m_value_type VAR_10,
     u32 VAR_11, u32 VAR_12)
{
 u32 VAR_13;

 if (VAR_10 == VAR_8) {
  VAR_13 = FUNC_0(VAR_9->reg_base + VAR_6);
  VAR_13 |= VAR_7;
  FUNC_1(VAR_13, VAR_9->reg_base + VAR_6);
  VAR_13 = VAR_11 & 0xff;
  FUNC_1(VAR_13, VAR_9->reg_base + VAR_0);
  VAR_13 = (VAR_11 >> 8) & 0xff;
  FUNC_1(VAR_13, VAR_9->reg_base + VAR_1);
  VAR_13 = (VAR_11 >> 16) & 0xff;
  FUNC_1(VAR_13, VAR_9->reg_base + VAR_2);

  VAR_13 = VAR_12 & 0xff;
  FUNC_1(VAR_13, VAR_9->reg_base + VAR_3);
  VAR_13 = (VAR_12 >> 8) & 0xff;
  FUNC_1(VAR_13, VAR_9->reg_base + VAR_4);
  VAR_13 = (VAR_12 >> 16) & 0xff;
  FUNC_1(VAR_13, VAR_9->reg_base + VAR_5);
 } else {
  VAR_13 = FUNC_0(VAR_9->reg_base + VAR_6);
  VAR_13 &= ~VAR_7;
  FUNC_1(VAR_13, VAR_9->reg_base + VAR_6);

  FUNC_1(0x00, VAR_9->reg_base + VAR_3);
  FUNC_1(0x80, VAR_9->reg_base + VAR_4);
  FUNC_1(0x00, VAR_9->reg_base + VAR_5);
 }
}
