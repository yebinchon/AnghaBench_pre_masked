
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_gemini {int sata1_pclk; int sata0_pclk; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct sata_gemini *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 == 0)
  FUNC_0(VAR_0->sata0_pclk);
 else if (VAR_1 == 1)
  FUNC_0(VAR_0->sata1_pclk);
}
