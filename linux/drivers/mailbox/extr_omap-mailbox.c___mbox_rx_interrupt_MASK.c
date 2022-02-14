
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_mbox_queue {int full; int work; int fifo; } ;
struct omap_mbox {struct omap_mbox_queue* rxq; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct omap_mbox*,int ) ;
 int FUNC_2 (struct omap_mbox*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (struct omap_mbox*) ;
 int FUNC_6 (struct omap_mbox*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct omap_mbox *VAR_1)
{
 struct omap_mbox_queue *VAR_2 = VAR_1->rxq;
 u32 VAR_3;
 int VAR_4;

 while (!FUNC_5(VAR_1)) {
  if (FUNC_8(FUNC_3(&VAR_2->fifo) < sizeof(VAR_3))) {
   FUNC_1(VAR_1, VAR_0);
   VAR_2->full = 1;
   goto nomem;
  }

  VAR_3 = FUNC_6(VAR_1);

  VAR_4 = FUNC_4(&VAR_2->fifo, (unsigned char *)&VAR_3, sizeof(VAR_3));
  FUNC_0(VAR_4 != sizeof(VAR_3));
 }


 FUNC_2(VAR_1, VAR_0);
nomem:
 FUNC_7(&VAR_1->rxq->work);
}
