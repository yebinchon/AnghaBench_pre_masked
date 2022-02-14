
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int object_map_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbd_device*) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*) ;
 int FUNC_3 (struct rbd_device*,char*) ;

__attribute__((used)) static int FUNC_4(struct rbd_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_1);
  return VAR_2;
 }

 if (VAR_1->object_map_flags & VAR_0)
  FUNC_3(VAR_1, "object map is invalid");

 return 0;
}
