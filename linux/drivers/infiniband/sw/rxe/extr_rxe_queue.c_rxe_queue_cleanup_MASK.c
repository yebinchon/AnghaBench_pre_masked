
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_queue {int buf; TYPE_1__* ip; } ;
struct TYPE_2__ {int ref; } ;


 int FUNC_0 (struct rxe_queue*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

void FUNC_3(struct rxe_queue *VAR_1)
{
 if (VAR_1->ip)
  FUNC_1(&VAR_1->ip->ref, VAR_0);
 else
  FUNC_2(VAR_1->buf);

 FUNC_0(VAR_1);
}
