
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_chan {int irq_tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mv_xor_chan*) ;
 int FUNC_2 (struct mv_xor_chan*,int) ;
 int FUNC_3 (struct mv_xor_chan*) ;
 int FUNC_4 (struct mv_xor_chan*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct mv_xor_chan *VAR_4 = VAR_3;
 u32 VAR_5 = FUNC_3(VAR_4);

 FUNC_0(FUNC_4(VAR_4), "intr cause %x\n", VAR_5);

 if (VAR_5 & VAR_1)
  FUNC_2(VAR_4, VAR_5);

 FUNC_5(&VAR_4->irq_tasklet);

 FUNC_1(VAR_4);

 return VAR_0;
}
