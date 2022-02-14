
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_control {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct gb_control *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->dev);
 if (VAR_1) {
  FUNC_0(&VAR_0->dev,
   "failed to register control device: %d\n",
   VAR_1);
  return VAR_1;
 }

 return 0;
}
