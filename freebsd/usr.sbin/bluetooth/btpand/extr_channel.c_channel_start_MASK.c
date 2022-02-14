
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__ pkthdr_t ;
struct TYPE_9__ {int oactive; scalar_t__ qlen; int (* send ) (TYPE_2__*,int ) ;int pktlist; int wr_ev; } ;
typedef TYPE_2__ channel_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_1, short VAR_2, void *VAR_3)
{
 channel_t *VAR_4 = VAR_3;
 pkthdr_t *VAR_5;

 VAR_4->oactive = 1;

 while (VAR_4->qlen > 0) {
  VAR_5 = FUNC_0(&VAR_4->pktlist);

  FUNC_3(VAR_4, 10);
  if (VAR_4->send(VAR_4, VAR_5->data) == 0) {
   if (FUNC_4(&VAR_4->wr_ev, ((void*)0)) == -1) {
    FUNC_5("Could not add channel write event: %m");
    FUNC_2(VAR_4);
   }
   return;
  }

  FUNC_1(&VAR_4->pktlist, VAR_0);
  FUNC_6(VAR_5);
  VAR_4->qlen--;
 }

 FUNC_3(VAR_4, 0);
 VAR_4->oactive = 0;
}
