
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int flags; int * bios; scalar_t__ is_atom_bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;

void FUNC_14(struct radeon_device *VAR_2)
{
 FUNC_11(VAR_2);
 FUNC_1(VAR_2);
 FUNC_12(VAR_2);
 FUNC_9(VAR_2);
 FUNC_8(VAR_2);
 if (VAR_2->flags & VAR_1)
  FUNC_13(VAR_2);
 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_10(VAR_2);
 FUNC_7(VAR_2);
 FUNC_5(VAR_2);
 if (VAR_2->is_atom_bios) {
  FUNC_4(VAR_2);
 } else {
  FUNC_6(VAR_2);
 }
 FUNC_0(VAR_2->bios);
 VAR_2->bios = ((void*)0);
}
