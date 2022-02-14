
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kempld_device_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kempld_device_data*) ;
 int FUNC_2 (struct kempld_device_data*,int) ;
 int FUNC_3 (struct kempld_device_data*) ;

__attribute__((used)) static int FUNC_4(struct kempld_device_data *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3;

 FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_0);

 return !!(VAR_3 & FUNC_0(VAR_2));
}
