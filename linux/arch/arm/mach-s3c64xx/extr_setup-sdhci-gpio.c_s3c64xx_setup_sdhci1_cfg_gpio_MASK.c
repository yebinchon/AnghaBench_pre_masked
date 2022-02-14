
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_sdhci_platdata {scalar_t__ cd_type; } ;
struct TYPE_2__ {struct s3c_sdhci_platdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct platform_device *VAR_2, int VAR_3)
{
 struct s3c_sdhci_platdata *VAR_4 = VAR_2->dev.platform_data;


 FUNC_4(FUNC_1(0), 2 + VAR_3, FUNC_2(2));

 if (VAR_4->cd_type == VAR_1) {
  FUNC_5(FUNC_0(6), VAR_0);
  FUNC_3(FUNC_0(6), FUNC_2(3));
 }
}
