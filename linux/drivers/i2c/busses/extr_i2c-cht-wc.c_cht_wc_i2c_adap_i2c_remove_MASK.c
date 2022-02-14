
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cht_wc_i2c_adap {int irq_domain; int adapter; int client; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct cht_wc_i2c_adap* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct cht_wc_i2c_adap *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->client);
 FUNC_0(&VAR_1->adapter);
 FUNC_2(VAR_1->irq_domain);

 return 0;
}
