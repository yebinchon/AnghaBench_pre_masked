
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (int ) ;

int FUNC_1(struct radeon_device *VAR_5)
{
 u32 VAR_6;

 if (VAR_5->flags & VAR_0)
  return 0;

 if (!(VAR_5->flags & VAR_1))
  return 0;



 VAR_6 = FUNC_0(VAR_2);

 switch ((VAR_6 & VAR_3) >> VAR_4) {
 case 133:
  return 0;
 case 132:
  return 1;
 case 130:
  return 2;
 case 129:
  return 4;
 case 128:
  return 8;
 case 131:
 default:
  return 16;
 }
}
