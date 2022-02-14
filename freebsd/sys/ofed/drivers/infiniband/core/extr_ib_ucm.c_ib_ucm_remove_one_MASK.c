
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucm_device {int dev; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ib_device *VAR_0, void *VAR_1)
{
 struct ib_ucm_device *VAR_2 = VAR_1;

 if (!VAR_2)
  return;

 FUNC_0(&VAR_2->dev);
}
