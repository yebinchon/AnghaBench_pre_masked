
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_12, int VAR_13)
{
 u32 VAR_14, VAR_15;

 if (VAR_12->flags & VAR_0)
  return;

 switch (VAR_13) {
 case 0:
  VAR_15 = VAR_3;
  break;
 case 1:
  VAR_15 = VAR_4;
  break;
 case 2:
  VAR_15 = VAR_6;
  break;
 case 4:
  VAR_15 = VAR_7;
  break;
 case 8:
  VAR_15 = VAR_8;
  break;
 case 16:
  VAR_15 = VAR_5;
  break;
 default:
  FUNC_0("invalid pcie lane request: %d\n", VAR_13);
  return;
 }

 VAR_14 = FUNC_1(VAR_11);
 VAR_14 &= ~VAR_1;
 VAR_14 |= VAR_15 << VAR_2;
 VAR_14 |= (VAR_10 |
       VAR_9);

 FUNC_2(VAR_11, VAR_14);
}
