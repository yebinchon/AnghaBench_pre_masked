
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcp_hpts_entry {scalar_t__ p_hpts_active; scalar_t__ p_on_min_sleep; void* p_inp; size_t p_nxt_slot; size_t p_runningtick; int p_direct_wake; int * p_hptss; int p_prev_slot; scalar_t__ p_wheel_complete; } ;
struct inpcb {scalar_t__ inp_in_hpts; size_t inp_hptsslot; scalar_t__ inp_hpts_request; } ;
typedef int int32_t ;


 int FUNC_0 (struct tcp_hpts_entry*) ;
 int FUNC_1 (struct tcp_hpts_entry*,struct inpcb*,int *,int ,int ) ;
 size_t FUNC_2 (int ,int) ;
 int FUNC_3 (struct tcp_hpts_entry*) ;

__attribute__((used)) static int
FUNC_4(struct inpcb *VAR_0, struct tcp_hpts_entry *VAR_1, int32_t VAR_2, int32_t VAR_3)
{
 uint32_t VAR_4 = 0;

 FUNC_0(VAR_1);
 if (VAR_0->inp_in_hpts == 0) {

  VAR_0->inp_hpts_request = 0;
  if ((VAR_1->p_hpts_active == 0) ||
      (VAR_1->p_wheel_complete)) {




   VAR_0->inp_hptsslot = FUNC_2(VAR_1->p_prev_slot, 1);
   if ((VAR_1->p_on_min_sleep == 0) && (VAR_1->p_hpts_active == 0))
    VAR_4 = 1;
  } else if ((void *)VAR_0 == VAR_1->p_inp) {






   VAR_0->inp_hptsslot = VAR_1->p_nxt_slot;
  } else
   VAR_0->inp_hptsslot = VAR_1->p_runningtick;
  FUNC_1(VAR_1, VAR_0, &VAR_1->p_hptss[VAR_0->inp_hptsslot], VAR_2, VAR_3);
  if (VAR_4) {




   VAR_1->p_direct_wake = 1;
   FUNC_3(VAR_1);
  }
 }
 return (VAR_4);
}
