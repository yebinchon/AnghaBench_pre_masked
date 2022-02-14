
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_gemini {int sata1_reset; int sata0_reset; } ;


 int FUNC_0 (struct sata_gemini*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct sata_gemini *VAR_0,
        unsigned int VAR_1)
{
 if (VAR_1 == 0)
  FUNC_2(VAR_0->sata0_reset);
 else
  FUNC_2(VAR_0->sata1_reset);
 FUNC_1(10);
 return FUNC_0(VAR_0, VAR_1);
}
