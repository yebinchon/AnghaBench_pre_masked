
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_st {struct hci_dev* hdev; } ;
struct TYPE_2__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; } ;






__attribute__((used)) static inline void FUNC_0(struct ti_st *VAR_0, int VAR_1)
{
 struct hci_dev *VAR_2 = VAR_0->hdev;


 switch (VAR_1) {
 case 129:
  VAR_2->stat.cmd_tx++;
  break;

 case 130:
  VAR_2->stat.acl_tx++;
  break;

 case 128:
  VAR_2->stat.sco_tx++;
  break;
 }
}
