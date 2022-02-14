
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cyapa_pip_cmd_states {int is_irq_mode; int* resp_len; int cmd_ready; int cmd_issued; int irq_cmd_buf; scalar_t__ resp_data; scalar_t__ (* resp_sort_func ) (struct cyapa*,int ,int) ;} ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {TYPE_1__ cmd_states; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cyapa*,scalar_t__,int*,scalar_t__ (*) (struct cyapa*,int ,int)) ;
 int FUNC_4 (struct cyapa*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_7 (struct cyapa*,int ,int) ;

bool FUNC_8(struct cyapa *VAR_1)
{
 struct cyapa_pip_cmd_states *VAR_2 = &VAR_1->cmd_states.pip;
 int VAR_3;

 if (FUNC_1(&VAR_2->cmd_issued)) {

  if (VAR_2->is_irq_mode == 0)
   return 0;






  FUNC_4(VAR_1, VAR_2->irq_cmd_buf,
   VAR_0);
  VAR_3 = FUNC_5(VAR_2->irq_cmd_buf);
  VAR_3 = (VAR_3 <= VAR_0) ?
    VAR_0 : VAR_3;
  if (VAR_3 > VAR_0)
   FUNC_4(VAR_1,
    VAR_2->irq_cmd_buf, VAR_3);
  if (!(VAR_2->resp_sort_func &&
   VAR_2->resp_sort_func(VAR_1,
    VAR_2->irq_cmd_buf, VAR_3))) {
   VAR_3 = 0;
   if (VAR_2->resp_len)
    VAR_3 = *VAR_2->resp_len;
   FUNC_3(VAR_1,
     VAR_2->resp_data,
     &VAR_3,
     VAR_2->resp_sort_func);
   if (VAR_2->resp_len && VAR_3 != 0) {
    *VAR_2->resp_len = VAR_3;
    FUNC_0(&VAR_2->cmd_issued);
    FUNC_2(&VAR_2->cmd_ready);
   }
   return 0;
  }

  if (VAR_2->resp_data && VAR_2->resp_len) {
   *VAR_2->resp_len = (*VAR_2->resp_len < VAR_3) ?
    *VAR_2->resp_len : VAR_3;
   FUNC_6(VAR_2->resp_data, VAR_2->irq_cmd_buf,
    *VAR_2->resp_len);
  }
  FUNC_0(&VAR_2->cmd_issued);
  FUNC_2(&VAR_2->cmd_ready);
  return 0;
 }

 return 1;
}
