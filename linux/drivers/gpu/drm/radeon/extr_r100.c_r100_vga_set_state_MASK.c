
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct radeon_device *VAR_3, bool VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_4 == 0) {
  VAR_5 &= ~VAR_1;
  VAR_5 |= VAR_0;
 } else {
  VAR_5 &= ~VAR_0;
 }
 FUNC_1(VAR_2, VAR_5);
}
