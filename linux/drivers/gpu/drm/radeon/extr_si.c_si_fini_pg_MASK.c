
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ pg_flags; } ;


 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0)
{
 if (VAR_0->pg_flags) {
  FUNC_0(VAR_0, 0);
  FUNC_1(VAR_0, 0);
 }
}
