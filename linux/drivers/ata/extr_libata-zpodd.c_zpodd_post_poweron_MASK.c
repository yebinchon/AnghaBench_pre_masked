
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpodd {int powered_off; int from_notify; scalar_t__ mech_type; int zp_sampled; int zp_ready; } ;
struct ata_device {int sdev; struct zpodd* zpodd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_device*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ata_device *VAR_1)
{
 struct zpodd *VAR_2 = VAR_1->zpodd;

 if (!VAR_2->powered_off)
  return;

 VAR_2->powered_off = 0;

 if (VAR_2->from_notify) {
  VAR_2->from_notify = 0;
  if (VAR_2->mech_type == VAR_0)
   FUNC_0(VAR_1);
 }

 VAR_2->zp_sampled = 0;
 VAR_2->zp_ready = 0;

 FUNC_1(VAR_1->sdev);
}
