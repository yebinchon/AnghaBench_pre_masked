
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_i2c {int dwork; int client; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 struct synaptics_i2c* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_3)
{
 struct synaptics_i2c *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4->client);
 if (VAR_5)
  return VAR_5;

 if (VAR_1)
  FUNC_1(VAR_2, &VAR_4->dwork,
    FUNC_2(VAR_0));

 return 0;
}
