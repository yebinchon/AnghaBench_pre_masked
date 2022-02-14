
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int default_dispclk; } ;
struct radeon_device {TYPE_1__ clock; } ;
struct radeon_atom_ss {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct radeon_device*,int ,int ,int,struct radeon_atom_ss*) ;
 int FUNC_3 (struct radeon_device*,int ) ;
 int FUNC_4 (struct radeon_device*,struct radeon_atom_ss*,int ,int ) ;

void FUNC_5(struct radeon_device *VAR_4)
{

 if (FUNC_1(VAR_4))
  FUNC_3(VAR_4, VAR_4->clock.default_dispclk);
 else if (FUNC_0(VAR_4)) {
  struct radeon_atom_ss VAR_5;
  bool VAR_6 = FUNC_4(VAR_4, &VAR_5,
           VAR_0,
           VAR_4->clock.default_dispclk);
  if (VAR_6)
   FUNC_2(VAR_4, VAR_2, VAR_1, -1, &VAR_5);

  FUNC_3(VAR_4, VAR_4->clock.default_dispclk);
  if (VAR_6)
   FUNC_2(VAR_4, VAR_3, VAR_1, -1, &VAR_5);
 }

}
