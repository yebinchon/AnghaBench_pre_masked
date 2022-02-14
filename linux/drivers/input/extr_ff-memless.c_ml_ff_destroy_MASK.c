
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ml_device {int private; } ;
struct ff_device {struct ml_device* private; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ff_device *VAR_0)
{
 struct ml_device *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1->private);
}
