
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cyapa_pip_cmd_states {scalar_t__ in_progress_cmd; } ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {TYPE_1__ cmd_states; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__*) ;

bool FUNC_2(struct cyapa *VAR_8,
  u8 *VAR_9, int VAR_10)
{
 struct cyapa_pip_cmd_states *VAR_11 = &VAR_8->cmd_states.pip;
 int VAR_12;

 if (!VAR_9 || VAR_10 < VAR_1)
  return 0;

 if (VAR_9[VAR_4] == VAR_0 &&
   VAR_9[VAR_6] == VAR_5) {
  VAR_12 = FUNC_1(&VAR_9[VAR_3]);
  if (FUNC_0(VAR_9[VAR_2]) == 0x00 &&
   VAR_12 == VAR_7 &&
   VAR_9[5] == VAR_11->in_progress_cmd) {

   return 0;
  } else if (FUNC_0(VAR_9[VAR_2]) ==
    VAR_11->in_progress_cmd) {

   return 1;
  }
 }

 return 0;
}
