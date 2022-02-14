
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dummy; } ;
struct kempld_i2c_data {int adap; int was_active; struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kempld_device_data*) ;
 int FUNC_2 (struct kempld_device_data*,int ) ;
 int FUNC_3 (struct kempld_device_data*) ;
 int FUNC_4 (struct kempld_device_data*,int ,int ) ;
 struct kempld_i2c_data* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct kempld_i2c_data *VAR_3 = FUNC_5(VAR_2);
 struct kempld_device_data *VAR_4 = VAR_3->pld;
 u8 VAR_5;

 FUNC_1(VAR_4);




 if (!VAR_3->was_active) {
  VAR_5 = FUNC_2(VAR_4, VAR_1);
  VAR_5 &= ~VAR_0;
  FUNC_4(VAR_4, VAR_1, VAR_5);
 }
 FUNC_3(VAR_4);

 FUNC_0(&VAR_3->adap);

 return 0;
}
