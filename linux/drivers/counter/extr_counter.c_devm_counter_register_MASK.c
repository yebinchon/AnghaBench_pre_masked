
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct counter_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_device* const) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct counter_device**) ;
 struct counter_device** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct counter_device**) ;

int FUNC_4(struct device *VAR_3,
     struct counter_device *const VAR_4)
{
 struct counter_device **VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6) {
  *VAR_5 = VAR_4;
  FUNC_1(VAR_3, VAR_5);
 } else {
  FUNC_3(VAR_5);
 }

 return VAR_6;
}
