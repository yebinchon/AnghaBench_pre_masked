
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pkthdr_t ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ refcnt; int * pfh; int qlen; int pktlist; scalar_t__ tick; int fd; int wr_ev; int rd_ev; } ;
typedef TYPE_1__ channel_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(channel_t *VAR_2)
{
 pkthdr_t *VAR_3;

 FUNC_2(VAR_2->state != VAR_0);

 FUNC_6("(fd#%d)", VAR_2->fd);

 VAR_2->state = VAR_0;
 FUNC_5(&VAR_2->rd_ev);
 FUNC_5(&VAR_2->wr_ev);
 FUNC_4(VAR_2->fd);
 VAR_2->refcnt--;
 VAR_2->tick = 0;

 while ((VAR_3 = FUNC_0(&VAR_2->pktlist)) != ((void*)0)) {
  FUNC_1(&VAR_2->pktlist, VAR_1);
  FUNC_8(VAR_3);
  VAR_2->qlen--;
 }

 if (VAR_2->pfh != ((void*)0)) {
  FUNC_7(VAR_2->pfh);
  VAR_2->pfh = ((void*)0);
 }

 if (VAR_2->refcnt == 0)
  FUNC_3(VAR_2);
}
