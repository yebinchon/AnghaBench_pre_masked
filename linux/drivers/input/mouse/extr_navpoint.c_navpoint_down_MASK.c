
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_device {int clk; } ;
struct navpoint {int gpio; struct ssp_device* ssp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ssp_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct navpoint *VAR_1)
{
 struct ssp_device *VAR_2 = VAR_1->ssp;

 if (FUNC_1(VAR_1->gpio))
  FUNC_2(VAR_1->gpio, 0);

 FUNC_3(VAR_2, VAR_0, 0);

 FUNC_0(VAR_2->clk);
}
