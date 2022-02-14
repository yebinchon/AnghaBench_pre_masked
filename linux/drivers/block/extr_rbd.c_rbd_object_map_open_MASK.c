
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int dummy; } ;


 int FUNC_0 (struct rbd_device*) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*) ;

__attribute__((used)) static int FUNC_3(struct rbd_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_2(VAR_0);
  return VAR_1;
 }

 return 0;
}
