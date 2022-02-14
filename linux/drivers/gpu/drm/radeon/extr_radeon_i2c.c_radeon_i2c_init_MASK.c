
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ is_atom_bios; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;

void FUNC_3(struct radeon_device *VAR_1)
{
 if (VAR_0)
  FUNC_0("hw_i2c forced on, you may experience display detection problems!\n");

 if (VAR_1->is_atom_bios)
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1);
}
