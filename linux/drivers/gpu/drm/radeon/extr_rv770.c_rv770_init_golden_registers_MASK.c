
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int family; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct radeon_device*,int ,int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_11)
{
 switch (VAR_11->family) {
 case 128:
  FUNC_1(VAR_11,
       VAR_1,
       (const u32)FUNC_0(VAR_1));
  FUNC_1(VAR_11,
       VAR_0,
       (const u32)FUNC_0(VAR_0));
  if (VAR_11->pdev->device == 0x994e)
   FUNC_1(VAR_11,
        VAR_10,
        (const u32)FUNC_0(VAR_10));
  else
   FUNC_1(VAR_11,
        VAR_8,
        (const u32)FUNC_0(VAR_8));
  FUNC_1(VAR_11,
       VAR_9,
       (const u32)FUNC_0(VAR_9));
  break;
 case 130:
  FUNC_1(VAR_11,
       VAR_1,
       (const u32)FUNC_0(VAR_1));
  FUNC_1(VAR_11,
       VAR_0,
       (const u32)FUNC_0(VAR_0));
  FUNC_1(VAR_11,
       VAR_4,
       (const u32)FUNC_0(VAR_4));
  FUNC_1(VAR_11,
       VAR_5,
       (const u32)FUNC_0(VAR_5));
  break;
 case 131:
  FUNC_1(VAR_11,
       VAR_1,
       (const u32)FUNC_0(VAR_1));
  FUNC_1(VAR_11,
       VAR_0,
       (const u32)FUNC_0(VAR_0));
  FUNC_1(VAR_11,
       VAR_2,
       (const u32)FUNC_0(VAR_2));
  FUNC_1(VAR_11,
       VAR_3,
       (const u32)FUNC_0(VAR_3));
  break;
 case 129:
  FUNC_1(VAR_11,
       VAR_6,
       (const u32)FUNC_0(VAR_6));
  FUNC_1(VAR_11,
       VAR_7,
       (const u32)FUNC_0(VAR_7));
  break;
 default:
  break;
 }
}
