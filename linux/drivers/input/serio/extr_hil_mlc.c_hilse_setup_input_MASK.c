
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int packet; } ;
struct hilse_node {int act; int arg; TYPE_1__ object; } ;
typedef int hil_packet ;
struct TYPE_5__ {int imatch; int istarted; int icount; int isem; int ipacket; int instart; int intimeout; int ddi; } ;
typedef TYPE_2__ hil_mlc ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;




 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(hil_mlc *VAR_2, const struct hilse_node *VAR_3)
{

 switch (VAR_3->act) {
 case 130:
  VAR_2->imatch = VAR_3->object.packet;
  VAR_2->imatch |= ((VAR_2->ddi + 2) << VAR_0);
  break;
 case 129:
  VAR_2->imatch = VAR_3->object.packet;
  VAR_2->imatch |= ((VAR_2->ddi + 1) << VAR_0);
  break;
 case 131:
  VAR_2->imatch = VAR_3->object.packet;
  break;
 case 128:
  VAR_2->imatch = 0;
  break;
 default:
  FUNC_0();
 }
 VAR_2->istarted = 1;
 VAR_2->intimeout = FUNC_4(VAR_3->arg);
 VAR_2->instart = VAR_1;
 VAR_2->icount = 15;
 FUNC_3(VAR_2->ipacket, 0, 16 * sizeof(hil_packet));
 FUNC_1(FUNC_2(&VAR_2->isem));
}
