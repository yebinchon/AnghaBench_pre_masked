
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_gemini {int sata0_pclk; int sata1_pclk; scalar_t__ sata_bridge; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sata_gemini* FUNC_1 (struct platform_device*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct sata_gemini *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->sata_bridge) {
  FUNC_0(VAR_2->sata1_pclk);
  FUNC_0(VAR_2->sata0_pclk);
 }
 VAR_0 = ((void*)0);

 return 0;
}
