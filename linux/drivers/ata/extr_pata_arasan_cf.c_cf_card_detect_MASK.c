
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ata_eh_info {int dummy; } ;
struct TYPE_4__ {struct ata_eh_info eh_info; } ;
struct ata_port {TYPE_2__ link; } ;
struct arasan_cf_dev {int card_present; scalar_t__ vbase; TYPE_1__* host; } ;
struct TYPE_3__ {struct ata_port** ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ata_eh_info*) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct arasan_cf_dev*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct arasan_cf_dev *VAR_3, bool VAR_4)
{
 struct ata_port *VAR_5 = VAR_3->host->ports[0];
 struct ata_eh_info *VAR_6 = &VAR_5->link.eh_info;
 u32 VAR_7 = FUNC_3(VAR_3->vbase + VAR_2);


 if (!(VAR_7 & (VAR_0 | VAR_1))) {
  if (VAR_3->card_present)
   return;
  VAR_3->card_present = 1;
  FUNC_2(VAR_3);
 } else {
  if (!VAR_3->card_present)
   return;
  VAR_3->card_present = 0;
 }

 if (VAR_4) {
  FUNC_0(VAR_6);
  FUNC_1(VAR_5);
 }
}
