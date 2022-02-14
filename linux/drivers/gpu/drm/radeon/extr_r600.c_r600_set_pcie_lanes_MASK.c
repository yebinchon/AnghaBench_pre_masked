
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int flags; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*,int) ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct radeon_device*) ;

void FUNC_5(struct radeon_device *VAR_14, int VAR_15)
{
 u32 VAR_16, VAR_17;

 if (VAR_14->flags & VAR_1)
  return;

 if (!(VAR_14->flags & VAR_2))
  return;


 if (FUNC_0(VAR_14))
  return;

 FUNC_4(VAR_14);

 switch (VAR_15) {
 case 0:
  VAR_17 = VAR_6;
  break;
 case 1:
  VAR_17 = VAR_7;
  break;
 case 2:
  VAR_17 = VAR_10;
  break;
 case 4:
  VAR_17 = VAR_11;
  break;
 case 8:
  VAR_17 = VAR_12;
  break;
 case 12:

  VAR_17 = VAR_8;
  break;
 case 16:
  VAR_17 = VAR_9;
  break;
 default:
  FUNC_1("invalid pcie lane request: %d\n", VAR_15);
  return;
 }

 VAR_16 = FUNC_2(VAR_3);
 VAR_16 &= ~VAR_4;
 VAR_16 |= VAR_17 << VAR_5;
 VAR_16 |= (VAR_13 |
       VAR_0);

 FUNC_3(VAR_3, VAR_16);
}
