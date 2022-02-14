
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_hpts_entry {int dummy; } ;
struct inpcb {scalar_t__ inp_in_input; } ;
typedef int int32_t ;


 int FUNC_0 (struct tcp_hpts_entry*) ;
 int FUNC_1 (struct tcp_hpts_entry*,struct inpcb*,int) ;
 int FUNC_2 (struct inpcb*,struct tcp_hpts_entry*,int ) ;

__attribute__((used)) static void
FUNC_3(struct tcp_hpts_entry *VAR_0, struct inpcb *VAR_1, int32_t VAR_2, int32_t VAR_3)
{
 FUNC_0(VAR_0);
 if (VAR_1->inp_in_input) {
  FUNC_1(VAR_0, VAR_1, 1);
  FUNC_2(VAR_1, VAR_0, VAR_3);
 }
}
