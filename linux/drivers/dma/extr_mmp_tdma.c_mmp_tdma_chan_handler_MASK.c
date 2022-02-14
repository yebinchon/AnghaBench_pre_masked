
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {int tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mmp_tdma_chan*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct mmp_tdma_chan *VAR_4 = VAR_3;

 if (FUNC_0(VAR_4) == 0) {
  FUNC_1(&VAR_4->tasklet);
  return VAR_0;
 } else
  return VAR_1;
}
