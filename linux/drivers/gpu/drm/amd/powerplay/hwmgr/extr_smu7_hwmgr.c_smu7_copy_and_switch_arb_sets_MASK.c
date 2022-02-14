
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_11,
  uint32_t VAR_12, uint32_t VAR_13)
{
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;

 switch (VAR_12) {
 case 129:
  VAR_14 = FUNC_2(VAR_11->device, VAR_6);
  VAR_15 = FUNC_2(VAR_11->device, VAR_7);
  VAR_16 = FUNC_0(VAR_11->device, VAR_2, VAR_4);
  break;
 case 128:
  VAR_14 = FUNC_2(VAR_11->device, VAR_9);
  VAR_15 = FUNC_2(VAR_11->device, VAR_8);
  VAR_16 = FUNC_0(VAR_11->device, VAR_2, VAR_5);
  break;
 default:
  return -VAR_1;
 }

 switch (VAR_13) {
 case 129:
  FUNC_3(VAR_11->device, VAR_6, VAR_14);
  FUNC_3(VAR_11->device, VAR_7, VAR_15);
  FUNC_1(VAR_11->device, VAR_2, VAR_4, VAR_16);
  break;
 case 128:
  FUNC_3(VAR_11->device, VAR_9, VAR_14);
  FUNC_3(VAR_11->device, VAR_8, VAR_15);
  FUNC_1(VAR_11->device, VAR_2, VAR_5, VAR_16);
  break;
 default:
  return -VAR_1;
 }

 VAR_17 = FUNC_2(VAR_11->device, VAR_10);
 VAR_17 |= 0x0000000F;
 FUNC_3(VAR_11->device, VAR_10, VAR_17);
 FUNC_1(VAR_11->device, VAR_3, VAR_0, VAR_13);

 return 0;
}
