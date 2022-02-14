
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_devinfo {int ddi_rl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct dma_devinfo *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 VAR_3 += FUNC_0(&VAR_2->ddi_rl, "mem", VAR_1,
     "%#jx");
 VAR_3 += FUNC_0(&VAR_2->ddi_rl, "irq", VAR_0, "%jd");
 return (VAR_3);
}
