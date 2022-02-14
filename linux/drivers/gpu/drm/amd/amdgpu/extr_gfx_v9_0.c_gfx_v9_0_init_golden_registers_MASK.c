
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_device {int asic_type; int rev_id; } ;


 scalar_t__ const FUNC_0 (int ) ;






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
 int FUNC_1 (struct amdgpu_device*,int ,scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_11)
{
 switch (VAR_11->asic_type) {
 case 130:
  FUNC_1(VAR_11,
      VAR_0,
      FUNC_0(VAR_0));
  FUNC_1(VAR_11,
      VAR_1,
      FUNC_0(VAR_1));
  break;
 case 129:
  FUNC_1(VAR_11,
      VAR_7,
      FUNC_0(VAR_7));
  FUNC_1(VAR_11,
      VAR_8,
      FUNC_0(VAR_8));
  break;
 case 128:
  FUNC_1(VAR_11,
      VAR_0,
      FUNC_0(VAR_0));
  FUNC_1(VAR_11,
      VAR_2,
      FUNC_0(VAR_2));
  break;
 case 133:
  FUNC_1(VAR_11,
      VAR_9,
      FUNC_0(VAR_9));
  break;
 case 132:
  FUNC_1(VAR_11, VAR_3,
      FUNC_0(VAR_3));
  if (VAR_11->rev_id >= 8)
   FUNC_1(VAR_11,
       VAR_6,
       FUNC_0(VAR_6));
  else
   FUNC_1(VAR_11,
       VAR_5,
       FUNC_0(VAR_5));
  break;
  case 131:
  FUNC_1(VAR_11,
      VAR_4,
      FUNC_0(VAR_4));
  return;
 default:
  break;
 }

 if (VAR_11->asic_type != 133)
  FUNC_1(VAR_11, VAR_10,
      (const u32)FUNC_0(VAR_10));
}
