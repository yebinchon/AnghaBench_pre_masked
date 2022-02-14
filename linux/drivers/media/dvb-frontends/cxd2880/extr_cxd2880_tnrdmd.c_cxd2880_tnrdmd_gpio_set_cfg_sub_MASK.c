
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; int diver_sub; } ;
typedef enum cxd2880_tnrdmd_gpio_mode { ____Placeholder_cxd2880_tnrdmd_gpio_mode } cxd2880_tnrdmd_gpio_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ) ;

int FUNC_1(struct cxd2880_tnrdmd *VAR_2,
        u8 VAR_3,
        u8 VAR_4,
        enum cxd2880_tnrdmd_gpio_mode
        VAR_5, u8 VAR_6, u8 VAR_7)
{
 if (!VAR_2)
  return -VAR_1;

 if (VAR_2->diver_mode != VAR_0)
  return -VAR_1;

 return FUNC_0(VAR_2->diver_sub, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7);
}
