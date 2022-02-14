
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_hpts_entry {int dummy; } ;
struct inpcb {int inp_flags2; } ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inpcb*,int) ;
 scalar_t__ FUNC_1 (struct inpcb*) ;
 int FUNC_2 (char*,struct inpcb*) ;

__attribute__((used)) static void
FUNC_3(struct inpcb *VAR_1, struct tcp_hpts_entry *VAR_2, int VAR_3)
{
 int32_t VAR_4;

 if (VAR_1->inp_flags2 & VAR_0) {




  VAR_4 = 1;
  VAR_1->inp_flags2 &= ~VAR_0;
 } else {
  VAR_4 = 0;
 }

 if (FUNC_1(VAR_1)) {





  FUNC_2("inpcb:%p release ret 1",
      VAR_1);
 }
 if (VAR_4) {
  VAR_1->inp_flags2 |= VAR_0;
 }
}
