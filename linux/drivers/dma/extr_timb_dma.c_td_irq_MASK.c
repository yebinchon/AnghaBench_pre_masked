
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct timb_dma {int tasklet; scalar_t__ membase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct timb_dma *VAR_6 = VAR_5;
 u32 VAR_7 = FUNC_0(VAR_6->membase + VAR_3);

 if (VAR_7) {

  FUNC_1(0, VAR_6->membase + VAR_2);

  FUNC_2(&VAR_6->tasklet);

  return VAR_0;
 } else
  return VAR_1;
}
