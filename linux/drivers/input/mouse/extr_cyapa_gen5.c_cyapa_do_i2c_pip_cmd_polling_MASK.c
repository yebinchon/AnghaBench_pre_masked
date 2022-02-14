
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cyapa_pip_cmd_states {int cmd_issued; } ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {TYPE_1__ cmd_states; } ;
typedef scalar_t__ cb_sort ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cyapa*,int *,int*,scalar_t__) ;
 int FUNC_3 (struct cyapa*,int *,size_t) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(
  struct cyapa *VAR_2,
  u8 *VAR_3, size_t VAR_4,
  u8 *VAR_5, int *VAR_6,
  unsigned long VAR_7,
  cb_sort VAR_8)
{
 struct cyapa_pip_cmd_states *VAR_9 = &VAR_2->cmd_states.pip;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_1(&VAR_9->cmd_issued);
 VAR_12 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_12) {
  FUNC_0(&VAR_9->cmd_issued);
  return VAR_12 < 0 ? VAR_12 : -VAR_0;
 }

 VAR_11 = VAR_6 ? *VAR_6 : 0;
 if (VAR_5 && VAR_6 && VAR_11 != 0 && VAR_8) {
  VAR_10 = VAR_7 / 5;
  do {
   FUNC_4(3000, 5000);
   *VAR_6 = VAR_11;
   VAR_12 = FUNC_2(VAR_2,
     VAR_5, VAR_6, VAR_8);
   if (VAR_12 || *VAR_6 == 0)
    continue;
   else
    break;
  } while (--VAR_10 > 0);
  if ((VAR_12 || *VAR_6 == 0) || VAR_10 <= 0)
   VAR_12 = VAR_12 ? VAR_12 : -VAR_1;
 }

 FUNC_0(&VAR_9->cmd_issued);
 return VAR_12;
}
