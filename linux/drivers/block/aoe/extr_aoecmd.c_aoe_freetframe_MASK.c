
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int head; scalar_t__ flags; int * r_skb; int iter; int * buf; struct aoetgt* t; } ;
struct aoetgt {int ffree; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int) ;

void
FUNC_2(struct frame *VAR_0)
{
 struct aoetgt *VAR_1;

 VAR_1 = VAR_0->t;
 VAR_0->buf = ((void*)0);
 FUNC_1(&VAR_0->iter, 0, sizeof(VAR_0->iter));
 VAR_0->r_skb = ((void*)0);
 VAR_0->flags = 0;
 FUNC_0(&VAR_0->head, &VAR_1->ffree);
}
