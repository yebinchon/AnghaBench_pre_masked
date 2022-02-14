
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmiaction {int flags; int list; int irq_work; int handler; } ;
struct nmi_desc {int lock; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 struct nmi_desc* FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(unsigned int VAR_5, struct nmiaction *VAR_6)
{
 struct nmi_desc *VAR_7 = FUNC_5(VAR_5);
 unsigned long VAR_8;

 if (!VAR_6->handler)
  return -VAR_0;

 FUNC_1(&VAR_6->irq_work, VAR_4);

 FUNC_6(&VAR_7->lock, VAR_8);





 FUNC_0(VAR_5 == VAR_3 && !FUNC_4(&VAR_7->head));
 FUNC_0(VAR_5 == VAR_2 && !FUNC_4(&VAR_7->head));





 if (VAR_6->flags & VAR_1)
  FUNC_2(&VAR_6->list, &VAR_7->head);
 else
  FUNC_3(&VAR_6->list, &VAR_7->head);

 FUNC_7(&VAR_7->lock, VAR_8);
 return 0;
}
