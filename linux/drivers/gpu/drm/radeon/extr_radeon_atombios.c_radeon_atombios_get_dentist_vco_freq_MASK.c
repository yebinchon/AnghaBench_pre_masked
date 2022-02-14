
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ulDentistVCOFreq; } ;
union igp_info {TYPE_2__ info_6; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_mode_info {TYPE_3__* atom_context; } ;
struct TYPE_4__ {int vco_freq; } ;
struct radeon_device {TYPE_1__ clock; struct radeon_mode_info mode_info; } ;
struct TYPE_6__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,int *,int *,int *,scalar_t__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_2)
{
 struct radeon_mode_info *VAR_3 = &VAR_2->mode_info;
 int VAR_4 = FUNC_0(VAR_0, VAR_1);
 union igp_info *VAR_5;
 u8 VAR_6, VAR_7;
 u16 VAR_8;

 if (FUNC_1(VAR_3->atom_context, VAR_4, ((void*)0),
   &VAR_6, &VAR_7, &VAR_8)) {
  VAR_5 = (union igp_info *)(VAR_3->atom_context->bios +
   VAR_8);
  VAR_2->clock.vco_freq =
   FUNC_2(VAR_5->info_6.ulDentistVCOFreq);
 }
}
