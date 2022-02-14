
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clone {TYPE_1__* ti; int mode; int cmd; } ;
typedef enum clone_metadata_mode { ____Placeholder_clone_metadata_mode } clone_metadata_mode ;
struct TYPE_2__ {int table; } ;





 int FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct clone*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct clone*) ;

__attribute__((used)) static void FUNC_7(struct clone *VAR_0, enum clone_metadata_mode VAR_1)
{
 const char *VAR_2[] = {
  "read-write",
  "read-only",
  "fail"
 };

 enum clone_metadata_mode VAR_3 = FUNC_6(VAR_0);


 if (VAR_3 == 130)
  VAR_1 = 130;

 switch (VAR_1) {
 case 130:
 case 129:
  FUNC_3(VAR_0->cmd);
  break;

 case 128:
  FUNC_4(VAR_0->cmd);
  break;
 }

 FUNC_1(VAR_0->mode, VAR_1);

 if (VAR_1 != VAR_3) {
  FUNC_5(VAR_0->ti->table);
  FUNC_0("%s: Switching to %s mode", FUNC_2(VAR_0),
         VAR_2[(int)VAR_1]);
 }
}
