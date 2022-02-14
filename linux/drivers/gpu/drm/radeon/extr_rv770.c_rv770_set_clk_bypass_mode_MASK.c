
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int flags; scalar_t__ usec_timeout; scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int) ;

void FUNC_4(struct radeon_device *VAR_11)
{
 u32 VAR_12, VAR_13;

 if (VAR_11->flags & VAR_6)
  return;

 VAR_12 = FUNC_0(VAR_0);
 VAR_12 &= VAR_8;
 VAR_12 |= FUNC_1(1) | VAR_9;
 FUNC_2(VAR_0, VAR_12);

 for (VAR_13 = 0; VAR_13 < VAR_11->usec_timeout; VAR_13++) {
  if (FUNC_0(VAR_1) & VAR_10)
   break;
  FUNC_3(1);
 }

 VAR_12 &= ~VAR_9;
 FUNC_2(VAR_0, VAR_12);

 VAR_12 = FUNC_0(VAR_4);
 if ((VAR_11->family == VAR_2) || (VAR_11->family == VAR_3))
  VAR_12 &= ~VAR_7;
 else
  VAR_12 &= ~VAR_5;
 FUNC_2(VAR_4, VAR_12);
}
