
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct tcphdr {int th_flags; } ;
struct tcpcb {int t_flags; TYPE_1__* ccv; int t_inpcb; } ;
struct TYPE_4__ {int (* ecnpkt_handler ) (TYPE_1__*) ;} ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (int ) ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_3 (struct tcpcb*,int ,int ) ;

__attribute__((used)) static void inline
FUNC_4(struct tcpcb *VAR_9, struct tcphdr *VAR_10, uint8_t VAR_11)
{
 FUNC_1(VAR_9->t_inpcb);

 if (FUNC_0(VAR_9)->ecnpkt_handler != ((void*)0)) {
  switch (VAR_11 & VAR_4) {
  case 130:
      VAR_9->ccv->flags |= VAR_2;
      break;
  case 129:
      VAR_9->ccv->flags &= ~VAR_2;
      break;
  case 128:
      VAR_9->ccv->flags &= ~VAR_2;
      break;
  }

  if (VAR_10->th_flags & VAR_6)
   VAR_9->ccv->flags |= VAR_3;
  else
   VAR_9->ccv->flags &= ~VAR_3;

  if (VAR_9->t_flags & VAR_5)
   VAR_9->ccv->flags |= VAR_1;
  else
   VAR_9->ccv->flags &= ~VAR_1;

  FUNC_0(VAR_9)->ecnpkt_handler(VAR_9->ccv);

  if (VAR_9->ccv->flags & VAR_0)
   FUNC_3(VAR_9, VAR_7, VAR_8);
 }
}
