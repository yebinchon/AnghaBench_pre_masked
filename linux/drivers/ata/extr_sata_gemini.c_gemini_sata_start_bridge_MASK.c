
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_gemini {struct clk* sata1_pclk; struct clk* sata0_pclk; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct sata_gemini*,unsigned int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct sata_gemini *VAR_0, unsigned int VAR_1)
{
 struct clk *VAR_2;
 int VAR_3;

 if (VAR_1 == 0)
  VAR_2 = VAR_0->sata0_pclk;
 else
  VAR_2 = VAR_0->sata1_pclk;
 FUNC_1(VAR_2);
 FUNC_3(10);


 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3)
  FUNC_0(VAR_2);

 return VAR_3;
}
