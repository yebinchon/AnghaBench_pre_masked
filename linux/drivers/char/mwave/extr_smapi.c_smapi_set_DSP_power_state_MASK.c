
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int ,unsigned short,unsigned short*,unsigned short*,unsigned short*,unsigned short*,unsigned short*,unsigned short*) ;

int FUNC_2(bool VAR_2)
{
 int VAR_3 = -VAR_0;
 unsigned short VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned short VAR_10;

 FUNC_0(VAR_1, "smapi::smapi_set_DSP_power_state entry bOn %x\n", VAR_2);

 VAR_10 = (VAR_2) ? 1 : 0;

 VAR_3 = FUNC_1(0x4901, 0x0000, 0, VAR_10,
  &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9);

 FUNC_0(VAR_1, "smapi::smapi_set_DSP_power_state exit bRC %x\n", VAR_3);

 return VAR_3;
}
