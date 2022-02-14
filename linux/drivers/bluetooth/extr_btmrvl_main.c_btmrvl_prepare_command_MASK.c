
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hsmode; scalar_t__ hscmd; scalar_t__ pscmd; scalar_t__ hscfgcmd; } ;
struct btmrvl_private {int (* hw_wakeup_firmware ) (struct btmrvl_private*) ;TYPE_1__* adapter; TYPE_2__ btmrvl_dev; } ;
struct TYPE_3__ {int hs_state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct btmrvl_private*) ;
 int FUNC_2 (struct btmrvl_private*) ;
 int FUNC_3 (struct btmrvl_private*) ;
 int FUNC_4 (struct btmrvl_private*) ;

int FUNC_5(struct btmrvl_private *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->btmrvl_dev.hscfgcmd) {
  VAR_1->btmrvl_dev.hscfgcmd = 0;
  FUNC_3(VAR_1);
 }

 if (VAR_1->btmrvl_dev.pscmd) {
  VAR_1->btmrvl_dev.pscmd = 0;
  FUNC_2(VAR_1);
 }

 if (VAR_1->btmrvl_dev.hscmd) {
  VAR_1->btmrvl_dev.hscmd = 0;

  if (VAR_1->btmrvl_dev.hsmode) {
   VAR_2 = FUNC_1(VAR_1);
  } else {
   VAR_2 = VAR_1->hw_wakeup_firmware(VAR_1);
   VAR_1->adapter->hs_state = VAR_0;
   FUNC_0("BT: HS DEACTIVATED due to host activity!");
  }
 }

 return VAR_2;
}
