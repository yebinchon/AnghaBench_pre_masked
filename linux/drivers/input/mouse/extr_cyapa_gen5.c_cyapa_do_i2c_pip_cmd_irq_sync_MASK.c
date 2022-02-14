
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cyapa_pip_cmd_states {int cmd_issued; int cmd_ready; } ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {TYPE_1__ cmd_states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cyapa*,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(
  struct cyapa *VAR_2,
  u8 *VAR_3, size_t VAR_4,
  unsigned long VAR_5)
{
 struct cyapa_pip_cmd_states *VAR_6 = &VAR_2->cmd_states.pip;
 int VAR_7;


 FUNC_3(&VAR_6->cmd_ready);

 FUNC_1(&VAR_6->cmd_issued);
 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_7) {
  FUNC_0(&VAR_6->cmd_issued);
  return (VAR_7 < 0) ? VAR_7 : -VAR_0;
 }


 VAR_5 = FUNC_5(&VAR_6->cmd_ready,
    FUNC_4(VAR_5));
 if (VAR_5 == 0) {
  FUNC_0(&VAR_6->cmd_issued);
  return -VAR_1;
 }

 return 0;
}
