
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;



__attribute__((used)) static u32 FUNC_0(struct radeon_device *VAR_0,
           u32 VAR_1)
{
 u32 VAR_2 = 0;

 while ((VAR_1 & (1 << VAR_2)) == 0)
  VAR_2++;

 return VAR_2;
}
