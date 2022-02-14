
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slimpro_i2c_dev {int mbox_chan; int adapter; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct slimpro_i2c_dev* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct slimpro_i2c_dev *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->adapter);

 if (VAR_0)
  FUNC_1(VAR_2->mbox_chan);
 else
  FUNC_2(VAR_2->mbox_chan);

 return 0;
}
