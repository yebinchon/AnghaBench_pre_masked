
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_host_device {int dev; int svc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gb_host_device*) ;

int FUNC_4(struct gb_host_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->dev);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0->svc);
 if (VAR_1) {
  FUNC_1(&VAR_0->dev);
  return VAR_1;
 }

 FUNC_3(VAR_0);

 return 0;
}
