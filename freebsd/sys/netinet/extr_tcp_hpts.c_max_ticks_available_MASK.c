
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcp_hpts_entry {int p_hpts_active; scalar_t__ p_wheel_complete; scalar_t__ p_runningtick; scalar_t__ p_prev_slot; scalar_t__ p_cur_slot; scalar_t__ p_nxt_slot; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int32_t
FUNC_2(struct tcp_hpts_entry *VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;

 if ((VAR_2->p_hpts_active == 1) &&
     (VAR_2->p_wheel_complete == 0)) {
  VAR_6 = VAR_2->p_runningtick;

  if (VAR_6 == 0)
   VAR_6 = VAR_0 - 1;
  else
   VAR_6--;
  if (VAR_4)
   *VAR_4 = VAR_6;
 } else {
  VAR_6 = VAR_2->p_prev_slot;
  if (VAR_6 == 0)
   VAR_6 = VAR_0 - 1;
  else
   VAR_6--;
  if (VAR_4)
   *VAR_4 = VAR_6;






  if (VAR_2->p_prev_slot != VAR_3)
   VAR_5 = FUNC_1(VAR_2->p_prev_slot, VAR_3);
  else
   VAR_5 = 1;
  return (VAR_0 - VAR_5);
 }






 if (VAR_2->p_runningtick == VAR_2->p_cur_slot)
  VAR_5 = 1;
 else
  VAR_5 = FUNC_1(VAR_2->p_runningtick, VAR_2->p_cur_slot);



 if (VAR_2->p_cur_slot != VAR_3) {

  VAR_7 = FUNC_1(VAR_2->p_cur_slot, VAR_3);
 } else {

  VAR_7 = 0;
 }





 VAR_8 = VAR_0 - VAR_5;





 if (VAR_8 <= VAR_7) {






  FUNC_0(VAR_1, 1);
  *VAR_4 = VAR_2->p_nxt_slot;
  return (0);
 } else {
  return (VAR_8 - VAR_7);
 }
}
