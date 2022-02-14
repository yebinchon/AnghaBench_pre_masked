
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*,int ) ;
 int FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_3)
{
 if (VAR_3->family == VAR_0 || VAR_3->family == VAR_1)
  return FUNC_0(VAR_3, VAR_2);
 else
  return FUNC_1(VAR_3);
}
