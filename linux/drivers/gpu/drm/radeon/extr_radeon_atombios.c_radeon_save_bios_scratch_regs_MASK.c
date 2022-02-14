
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct radeon_device {scalar_t__ family; int * bios_scratch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct radeon_device *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 if (VAR_4->family >= VAR_0)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_4->bios_scratch[VAR_6] = FUNC_0(VAR_5 + (VAR_6 * 4));
}
