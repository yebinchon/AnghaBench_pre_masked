
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_4, bool VAR_5)
{
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  if (VAR_8 == 0)
   VAR_6 = VAR_2;
  else
   VAR_6 = VAR_3;
  VAR_7 = FUNC_0(VAR_1 + VAR_6);
  if (VAR_5)
   VAR_7 |= VAR_0;
  else
   VAR_7 &= ~VAR_0;
  FUNC_1(VAR_1 + VAR_6, VAR_7);
 }
}
