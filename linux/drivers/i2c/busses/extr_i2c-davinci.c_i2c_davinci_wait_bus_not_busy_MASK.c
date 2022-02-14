
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long timeout; } ;
struct davinci_i2c_dev {TYPE_1__ adapter; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct davinci_i2c_dev*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned long VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct davinci_i2c_dev *VAR_4)
{
 unsigned long VAR_5 = VAR_3 + VAR_4->adapter.timeout;

 do {
  if (!(FUNC_0(VAR_4, VAR_1) & VAR_0))
   return 0;
  FUNC_3(1);
 } while (FUNC_4(VAR_3, VAR_5));

 FUNC_1(VAR_4->dev, "timeout waiting for bus ready\n");
 FUNC_2(&VAR_4->adapter);





 if (FUNC_0(VAR_4, VAR_1) & VAR_0)
  return -VAR_2;

 return 0;
}
