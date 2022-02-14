
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_device {int registered; int dev; } ;
struct host1x {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct host1x *VAR_0,
         struct host1x_device *VAR_1)
{
 if (VAR_1->registered) {
  VAR_1->registered = 0;
  FUNC_0(&VAR_1->dev);
 }

 FUNC_1(&VAR_1->dev);
}
