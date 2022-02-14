
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bios_hardcoded_edid_size; struct edid* bios_hardcoded_edid; } ;
struct radeon_device {unsigned char* bios; TYPE_1__ mode_info; int ddev; } ;
struct edid {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct edid*) ;
 int FUNC_2 (struct edid*) ;
 struct edid* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;

bool FUNC_5(struct radeon_device *VAR_3)
{
 int VAR_4, VAR_5;
 struct edid *VAR_6;
 unsigned char *VAR_7;
 VAR_4 = FUNC_0(VAR_3->ddev, VAR_0);
 if (!VAR_4)
  return 0;

 VAR_7 = VAR_3->bios + VAR_4;
 VAR_5 = VAR_1 * (VAR_7[0x7e] + 1);
 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (VAR_6 == ((void*)0))
  return 0;

 FUNC_4((unsigned char *)VAR_6, VAR_7, VAR_5);

 if (!FUNC_1(VAR_6)) {
  FUNC_2(VAR_6);
  return 0;
 }

 VAR_3->mode_info.bios_hardcoded_edid = VAR_6;
 VAR_3->mode_info.bios_hardcoded_edid_size = VAR_5;
 return 1;
}
