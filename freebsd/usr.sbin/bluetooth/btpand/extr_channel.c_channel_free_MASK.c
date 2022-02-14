
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ refcnt; scalar_t__ state; scalar_t__ qlen; struct TYPE_5__* sendbuf; struct TYPE_5__* mfilter; struct TYPE_5__* pfilter; int pktlist; } ;
typedef TYPE_1__ channel_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ) ;

void
FUNC_7(channel_t *VAR_5)
{

 FUNC_2(VAR_5->refcnt == 0);
 FUNC_2(VAR_5->state == VAR_0);
 FUNC_2(VAR_5->qlen == 0);
 FUNC_2(FUNC_1(&VAR_5->pktlist));

 FUNC_0(VAR_5, VAR_3);
 FUNC_4(VAR_5->pfilter);
 FUNC_4(VAR_5->mfilter);
 FUNC_4(VAR_5->sendbuf);
 FUNC_4(VAR_5);

 FUNC_6(--VAR_2);

 if (VAR_4 == 0) {
  FUNC_5("connection closed, exiting");
  FUNC_3(VAR_1);
 }
}
