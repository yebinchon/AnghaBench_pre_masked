
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct apm_event_info {size_t type; int index; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int ,struct apm_event_info*) ;
 int FUNC_4 (int ,char*,size_t,...) ;

void
FUNC_5(int VAR_4)
{
 struct apm_event_info VAR_5;

 while (FUNC_3(VAR_4, VAR_0, &VAR_5) == 0) {
  int VAR_6;
  FUNC_4(VAR_2, "apmevent %04x index %d\n",
   VAR_5.type, VAR_5.index);
  FUNC_4(VAR_1, "apm event: %s", VAR_3[VAR_5.type].name);
  if (FUNC_2() == 0) {
   VAR_6 = FUNC_0(&VAR_3[VAR_5.type]);
   FUNC_1(VAR_6);
  }
 }
}
