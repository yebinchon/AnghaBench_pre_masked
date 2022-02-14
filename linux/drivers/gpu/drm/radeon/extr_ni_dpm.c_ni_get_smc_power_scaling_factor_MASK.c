
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static u32 FUNC_2(struct radeon_device *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5 = FUNC_0(VAR_0) & VAR_1;

 VAR_3 = (1000000000UL / VAR_4);
 VAR_3 /= 10000UL;

 return VAR_5 * VAR_3;
}
