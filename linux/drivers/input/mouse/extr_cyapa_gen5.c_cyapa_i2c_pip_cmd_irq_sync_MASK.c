
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cyapa_pip_cmd_states {int* resp_data; int* resp_len; int in_progress_cmd; int is_irq_mode; int cmd_lock; int * resp_sort_func; } ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {TYPE_1__ cmd_states; } ;
typedef int * cb_sort ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cyapa*,int*,int,unsigned long) ;
 int FUNC_1 (struct cyapa*,int*,int,int*,int*,unsigned long,int *) ;
 int FUNC_2 (struct cyapa*,int*,int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(
  struct cyapa *VAR_7,
  u8 *VAR_8, int VAR_9,
  u8 *VAR_10, int *VAR_11,
  unsigned long VAR_12,
  cb_sort VAR_13,
  bool VAR_14)
{
 struct cyapa_pip_cmd_states *VAR_15 = &VAR_7->cmd_states.pip;
 int VAR_16;

 if (!VAR_8 || !VAR_9)
  return -VAR_0;


 VAR_16 = FUNC_3(&VAR_15->cmd_lock);
 if (VAR_16)
  return VAR_16;

 VAR_15->resp_sort_func = VAR_13;
 VAR_15->resp_data = VAR_10;
 VAR_15->resp_len = VAR_11;

 if (VAR_9 >= VAR_5 &&
   VAR_8[4] == VAR_2) {

  VAR_15->in_progress_cmd = VAR_8[6] & 0x7f;
 } else if (VAR_9 >= VAR_6 &&
   VAR_8[4] == VAR_3) {

  VAR_15->in_progress_cmd = VAR_8[7];
 }


 if (VAR_14) {
  VAR_15->is_irq_mode = 1;
  VAR_16 = FUNC_0(VAR_7, VAR_8, VAR_9,
       VAR_12);
  if (VAR_16 == -VAR_1 && VAR_10 &&
    VAR_11 && *VAR_11 != 0 && VAR_13) {





   VAR_16 = FUNC_2(VAR_7,
     VAR_10, VAR_11, VAR_13);
   if (VAR_16 || *VAR_11 == 0)
    VAR_16 = VAR_16 ? VAR_16 : -VAR_1;
  }
 } else {
  VAR_15->is_irq_mode = 0;
  VAR_16 = FUNC_1(VAR_7, VAR_8, VAR_9,
    VAR_10, VAR_11, VAR_12, VAR_13);
 }

 VAR_15->resp_sort_func = ((void*)0);
 VAR_15->resp_data = ((void*)0);
 VAR_15->resp_len = ((void*)0);
 VAR_15->in_progress_cmd = VAR_4;

 FUNC_4(&VAR_15->cmd_lock);
 return VAR_16;
}
