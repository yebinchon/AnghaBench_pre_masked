
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct radeon_device {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct radeon_device*,scalar_t__,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct radeon_device *VAR_1, u64 *VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (VAR_2[VAR_3] && FUNC_0(VAR_1, VAR_2[VAR_3], VAR_3))
   return 1;
 }
 return 0;
}
