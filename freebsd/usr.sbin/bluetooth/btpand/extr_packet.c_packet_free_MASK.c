
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* chan; int extlist; int refcnt; } ;
typedef TYPE_1__ packet_t ;
typedef TYPE_1__ exthdr_t ;
struct TYPE_8__ {scalar_t__ refcnt; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

void
FUNC_4(packet_t *VAR_1)
{
 exthdr_t *VAR_2;

 if (VAR_1->refcnt-- > 0)
  return;

 while ((VAR_2 = FUNC_0(&VAR_1->extlist)) != ((void*)0)) {
  FUNC_1(&VAR_1->extlist, VAR_0);
  FUNC_3(VAR_2);
 }

 VAR_1->chan->refcnt--;
 if (VAR_1->chan->refcnt == 0)
  FUNC_2(VAR_1->chan);

 FUNC_3(VAR_1);
}
