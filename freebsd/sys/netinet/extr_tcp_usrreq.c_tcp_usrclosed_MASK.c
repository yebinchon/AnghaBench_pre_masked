
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int t_state; TYPE_1__* t_inpcb; int t_flags; } ;
struct TYPE_2__ {int inp_socket; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_3 (struct tcpcb*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 struct tcpcb* FUNC_5 (struct tcpcb*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct tcpcb*) ;
 int FUNC_7 (struct tcpcb*,int) ;
 int FUNC_8 (struct tcpcb*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct tcpcb *VAR_7)
{

 FUNC_2();
 FUNC_0(VAR_7->t_inpcb);

 switch (VAR_7->t_state) {
 case 130:



  FUNC_7(VAR_7, 133);

 case 133:
  VAR_7 = FUNC_5(VAR_7);




  FUNC_1(VAR_7 != ((void*)0),
      ("tcp_usrclosed: tcp_close() returned NULL"));
  break;

 case 128:
 case 129:
  VAR_7->t_flags |= VAR_3;
  break;

 case 131:
  FUNC_7(VAR_7, VAR_0);
  break;

 case 132:
  FUNC_7(VAR_7, VAR_2);
  break;
 }
 if (VAR_7->t_state >= VAR_1) {
  FUNC_4(VAR_7->t_inpcb->inp_socket);

  if (VAR_7->t_state == VAR_1) {
   int VAR_8;

   VAR_8 = (VAR_5) ?
       VAR_6 : FUNC_3(VAR_7);
   FUNC_8(VAR_7, VAR_4, VAR_8);
  }
 }
}
