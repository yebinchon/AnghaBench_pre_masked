
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_chan {int cleanup_task; int state; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct ioatdma_chan *VAR_4 = VAR_3;

 if (FUNC_1(VAR_0, &VAR_4->state))
  FUNC_0(&VAR_4->cleanup_task);

 return VAR_1;
}
