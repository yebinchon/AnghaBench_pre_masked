
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pktcdvd_device {int mmc3_profile; } ;
struct TYPE_3__ {int disc_type; scalar_t__ erasable; scalar_t__ border_status; } ;
typedef TYPE_1__ disc_information ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,struct pktcdvd_device*,char*,int) ;
 int FUNC_1 (struct pktcdvd_device*,char*,...) ;
 int FUNC_2 (struct pktcdvd_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct pktcdvd_device *VAR_1, disc_information *VAR_2)
{
 switch (VAR_1->mmc3_profile) {
  case 0x0a:
  case 0xffff:
   break;
  case 0x1a:
  case 0x13:
  case 0x12:
   return 1;
  default:
   FUNC_0(2, VAR_1, "Wrong disc profile (%x)\n",
    VAR_1->mmc3_profile);
   return 0;
 }





 if (VAR_2->disc_type == 0xff) {
  FUNC_2(VAR_1, "unknown disc - no track?\n");
  return 0;
 }

 if (VAR_2->disc_type != 0x20 && VAR_2->disc_type != 0) {
  FUNC_1(VAR_1, "wrong disc type (%x)\n", VAR_2->disc_type);
  return 0;
 }

 if (VAR_2->erasable == 0) {
  FUNC_2(VAR_1, "disc not erasable\n");
  return 0;
 }

 if (VAR_2->border_status == VAR_0) {
  FUNC_1(VAR_1, "can't write to last track (reserved)\n");
  return 0;
 }

 return 1;
}
