
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int pg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_1)
{
 if (VAR_1->pg_flags) {
  FUNC_2(VAR_1, 0);
  if (VAR_1->pg_flags & VAR_0) {
   FUNC_0(VAR_1, 0);
   FUNC_1(VAR_1, 0);
  }
 }
}
