
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int family; int usec_timeout; TYPE_1__* mc_fw; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int VAR_15 ;
 int FUNC_1 (int ,int) ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int) ;

int FUNC_4(struct radeon_device *VAR_20)
{
 const __be32 *VAR_21;
 u32 VAR_22, VAR_23, VAR_24 = 0;
 u32 *VAR_25;
 int VAR_26, VAR_27, VAR_28;

 if (!VAR_20->mc_fw)
  return -VAR_3;

 switch (VAR_20->family) {
 case 131:
  VAR_25 = (u32 *)&VAR_16;
  VAR_27 = VAR_1;
  VAR_28 = VAR_0;
  break;
 case 128:
  VAR_25 = (u32 *)&VAR_19;
  VAR_27 = VAR_1;
  VAR_28 = VAR_0;
  break;
 case 130:
 default:
  VAR_25 = (u32 *)&VAR_17;
  VAR_27 = VAR_1;
  VAR_28 = VAR_0;
  break;
 case 129:
  VAR_25 = (u32 *)&VAR_18;
  VAR_27 = VAR_2;
  VAR_28 = VAR_0;
  break;
 }

 VAR_22 = (FUNC_0(VAR_7) & VAR_8) >> VAR_9;
 VAR_23 = FUNC_0(VAR_11) & VAR_15;

 if ((VAR_22 == VAR_10) && (VAR_23 == 0)) {
  if (VAR_23) {
   VAR_24 = FUNC_0(VAR_13);
   FUNC_1(VAR_13, 1);
  }


  FUNC_1(VAR_11, 0x00000008);
  FUNC_1(VAR_11, 0x00000010);


  for (VAR_26 = 0; VAR_26 < VAR_28; VAR_26++) {
   FUNC_1(VAR_6, VAR_25[(VAR_26 << 1)]);
   FUNC_1(VAR_5, VAR_25[(VAR_26 << 1) + 1]);
  }

  VAR_21 = (const __be32 *)VAR_20->mc_fw->data;
  for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++)
   FUNC_1(VAR_12, FUNC_2(VAR_21++));


  FUNC_1(VAR_11, 0x00000008);
  FUNC_1(VAR_11, 0x00000004);
  FUNC_1(VAR_11, 0x00000001);


  for (VAR_26 = 0; VAR_26 < VAR_20->usec_timeout; VAR_26++) {
   if (FUNC_0(VAR_4) & VAR_14)
    break;
   FUNC_3(1);
  }

  if (VAR_23)
   FUNC_1(VAR_13, VAR_24);
 }

 return 0;
}
