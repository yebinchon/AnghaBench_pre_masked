
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_chan {int prep_lock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct ioatdma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct ioatdma_chan *VAR_1)
{
 FUNC_1(&VAR_1->prep_lock);
 if (!FUNC_3(VAR_0, &VAR_1->state))
  FUNC_0(VAR_1);
 FUNC_2(&VAR_1->prep_lock);
}
