
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_hpts_entry {int * p_hptss; } ;
struct inpcb {size_t inp_hptsslot; scalar_t__ inp_in_hpts; } ;
typedef int int32_t ;


 int FUNC_0 (struct tcp_hpts_entry*,struct inpcb*,int *,int) ;
 int FUNC_1 (struct inpcb*,struct tcp_hpts_entry*,int ) ;

__attribute__((used)) static void
FUNC_2(struct tcp_hpts_entry *VAR_0, struct inpcb *VAR_1, int32_t VAR_2, int32_t VAR_3)
{
 if (VAR_1->inp_in_hpts) {
  FUNC_0(VAR_0, VAR_1, &VAR_0->p_hptss[VAR_1->inp_hptsslot], 1);
  FUNC_1(VAR_1, VAR_0, VAR_3);
 }
}
