
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct capilib_ncci {size_t winsize; TYPE_1__* msgidpool; TYPE_1__* msgidfree; scalar_t__ nmsg; int * msgidlast; int * msgidqueue; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct capilib_ncci *VAR_0)
{
 u_int VAR_1;
 VAR_0->msgidqueue = ((void*)0);
 VAR_0->msgidlast = ((void*)0);
 VAR_0->nmsg = 0;
 FUNC_0(VAR_0->msgidpool, 0, sizeof(VAR_0->msgidpool));
 VAR_0->msgidfree = &VAR_0->msgidpool[0];
 for (VAR_1 = 1; VAR_1 < VAR_0->winsize; VAR_1++) {
  VAR_0->msgidpool[VAR_1].next = VAR_0->msgidfree;
  VAR_0->msgidfree = &VAR_0->msgidpool[VAR_1];
 }
}
