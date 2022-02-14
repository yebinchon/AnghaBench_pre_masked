
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct zd1301_demod_platform_data {int (* reg_write ) (int ,int ,int ) ;int reg_priv; } ;
struct zd1301_demod_dev {struct platform_device* pdev; } ;
struct TYPE_2__ {struct zd1301_demod_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct zd1301_demod_dev *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct platform_device *VAR_3 = VAR_0->pdev;
 struct zd1301_demod_platform_data *VAR_4 = VAR_3->dev.platform_data;

 return VAR_4->reg_write(VAR_4->reg_priv, VAR_1, VAR_2);
}
