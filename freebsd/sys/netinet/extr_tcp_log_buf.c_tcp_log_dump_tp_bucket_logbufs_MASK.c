
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_inpcb; struct tcp_log_id_bucket* t_lib; } ;
struct tcp_log_id_bucket {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct tcp_log_id_bucket*) ;
 int FUNC_3 (struct tcp_log_id_bucket*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

 int VAR_1 ;

 int FUNC_6 (struct tcpcb*,char*,int ,int) ;
 int FUNC_7 (struct tcp_log_id_bucket*,char*) ;
 scalar_t__ FUNC_8 (struct tcp_log_id_bucket*,int*,int *) ;

void
FUNC_9(struct tcpcb *VAR_2, char *VAR_3)
{
 struct tcp_log_id_bucket *VAR_4;
 int VAR_5;


 FUNC_0(VAR_2->t_inpcb);
 VAR_4 = VAR_2->t_lib;
 if (VAR_4 == ((void*)0)) {




  (void)FUNC_6(VAR_2, VAR_3, VAR_0, 1);
  FUNC_1(VAR_2->t_inpcb);
  return;
 }
 FUNC_3(VAR_4);
 FUNC_1(VAR_2->t_inpcb);
 FUNC_2(VAR_4);


 VAR_5 = VAR_1;
 if (FUNC_8(VAR_4, &VAR_5, ((void*)0))) {
  switch (VAR_5) {
  case 128:
   FUNC_5();
   break;
  case 129:
   FUNC_4();
   break;
  }
  return;
 }


 FUNC_7(VAR_4, VAR_3);
}
