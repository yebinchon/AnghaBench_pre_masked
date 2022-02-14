
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct kempld_device_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kempld_device_data*) ;
 int FUNC_2 (struct kempld_device_data*,int ) ;
 int FUNC_3 (struct kempld_device_data*) ;
 int FUNC_4 (struct kempld_device_data*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct kempld_device_data *VAR_1)
{
 u16 VAR_2, VAR_3;

 FUNC_1(VAR_1);


 VAR_3 = FUNC_2(VAR_1, VAR_0);

 FUNC_4(VAR_1, VAR_0, 0x0000);

 VAR_2 = FUNC_2(VAR_1, VAR_0);

 FUNC_4(VAR_1, VAR_0, VAR_3);

 FUNC_3(VAR_1);

 return VAR_2 ? FUNC_0(VAR_2) : 16;
}
