
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; } ;
typedef enum cxd2880_tnrdmd_gpio_mode { ____Placeholder_cxd2880_tnrdmd_gpio_mode } cxd2880_tnrdmd_gpio_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int ,int,int,int,int) ;

int FUNC_1(struct cxd2880_tnrdmd *VAR_5,
    u8 VAR_6,
    u8 VAR_7,
    enum cxd2880_tnrdmd_gpio_mode VAR_8,
    u8 VAR_9, u8 VAR_10)
{
 int VAR_11;

 if (!VAR_5)
  return -VAR_4;

 if (VAR_6 > 2)
  return -VAR_4;

 if (VAR_8 > VAR_1)
  return -VAR_4;

 if (VAR_5->state != VAR_3 &&
     VAR_5->state != VAR_2)
  return -VAR_4;

 VAR_11 =
     FUNC_0(VAR_5, VAR_0,
       0x00, 0x40 + VAR_6, VAR_8,
       0x0f);
 if (VAR_11)
  return VAR_11;

 VAR_11 =
     FUNC_0(VAR_5, VAR_0,
       0x00, 0x43,
       VAR_9 ? (1 << VAR_6) : 0,
       1 << VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_11 =
     FUNC_0(VAR_5, VAR_0,
       0x00, 0x44,
       VAR_10 ? (1 << VAR_6) : 0,
       1 << VAR_6);
 if (VAR_11)
  return VAR_11;

 return FUNC_0(VAR_5,
          VAR_0,
          0x00, 0x45,
          VAR_7 ? 0 : (1 << VAR_6),
          1 << VAR_6);
}
