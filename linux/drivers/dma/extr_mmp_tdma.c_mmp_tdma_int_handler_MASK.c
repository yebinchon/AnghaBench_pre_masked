
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_device {struct mmp_tdma_chan** tdmac; } ;
struct mmp_tdma_chan {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct mmp_tdma_chan*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct mmp_tdma_device *VAR_5 = VAR_4;
 int VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct mmp_tdma_chan *VAR_9 = VAR_5->tdmac[VAR_6];

  VAR_7 = FUNC_0(VAR_3, VAR_9);
  if (VAR_7 == VAR_0)
   VAR_8++;
 }

 if (VAR_8)
  return VAR_0;
 else
  return VAR_1;
}
