
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ses_ctrl_dev_slot {int common; } ;
struct TYPE_2__ {unsigned int elm_idx; int * cstat; } ;
typedef TYPE_1__ encioc_elm_status_t ;
typedef int elm_type_t ;
typedef int caddr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct ses_ctrl_dev_slot*,int) ;
 int FUNC_4 (struct ses_ctrl_dev_slot*,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_3, unsigned int VAR_4, elm_type_t VAR_5, bool VAR_6, bool VAR_7)
{
 int VAR_8 = VAR_6 ? 1 : 0;
 encioc_elm_status_t VAR_9;
 struct ses_ctrl_dev_slot *VAR_10;

 VAR_9.elm_idx = VAR_4;
 if (FUNC_1(VAR_3, VAR_0, (caddr_t) &VAR_9) < 0) {
  FUNC_0(VAR_3);
  FUNC_5(VAR_2, "ENCIOC_GETELMSTAT");
 }
 VAR_10 = (struct ses_ctrl_dev_slot *) &VAR_9.cstat[0];
 switch (VAR_5) {
 case 128:
 case 129:
  FUNC_2(&VAR_10->common, 1);
  if (VAR_7)
   FUNC_3(VAR_10, VAR_8);
  else
   FUNC_4(VAR_10, VAR_8);
  break;
 default:
  return;
 }
 if (FUNC_1(VAR_3, VAR_1, (caddr_t) &VAR_9) < 0) {
  FUNC_0(VAR_3);
  FUNC_5(VAR_2, "ENCIOC_SETELMSTAT");
 }
}
