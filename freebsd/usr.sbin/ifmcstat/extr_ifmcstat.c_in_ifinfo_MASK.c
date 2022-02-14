
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igmp_ifinfo {int igi_version; int igi_rv; int igi_qi; int igi_qri; int igi_uri; int igi_v1_timer; int igi_v2_timer; int igi_v3_timer; scalar_t__ igi_flags; } ;





 int FUNC_0 (char*,scalar_t__,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct igmp_ifinfo *VAR_1)
{

 FUNC_1("\t");
 switch (VAR_1->igi_version) {
 case 130:
 case 129:
 case 128:
  FUNC_1("igmpv%d", VAR_1->igi_version);
  break;
 default:
  FUNC_1("igmpv?(%d)", VAR_1->igi_version);
  break;
 }
 if (VAR_1->igi_flags)
  FUNC_0(" flags", VAR_1->igi_flags, "\020\1SILENT\2LOOPBACK");
 if (VAR_1->igi_version == 128) {
  FUNC_1(" rv %u qi %u qri %u uri %u",
      VAR_1->igi_rv, VAR_1->igi_qi, VAR_1->igi_qri, VAR_1->igi_uri);
 }
 if (VAR_0 >= 2) {
  FUNC_1(" v1timer %u v2timer %u v3timer %u",
      VAR_1->igi_v1_timer, VAR_1->igi_v2_timer, VAR_1->igi_v3_timer);
 }
 FUNC_1("\n");
}
