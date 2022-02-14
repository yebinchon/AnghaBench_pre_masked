
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_image_header {int object_prefix; int snap_names; int snap_sizes; int snapc; } ;
struct rbd_device {struct rbd_image_header header; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rbd_image_header*,int ,int) ;
 int FUNC_3 (struct rbd_device*) ;
 int FUNC_4 (struct rbd_device*) ;
 int FUNC_5 (struct rbd_device*) ;

__attribute__((used)) static void FUNC_6(struct rbd_device *VAR_0)
{
 struct rbd_image_header *VAR_1;

 FUNC_4(VAR_0);
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);



 VAR_1 = &VAR_0->header;
 FUNC_0(VAR_1->snapc);
 FUNC_1(VAR_1->snap_sizes);
 FUNC_1(VAR_1->snap_names);
 FUNC_1(VAR_1->object_prefix);
 FUNC_2(VAR_1, 0, sizeof (*VAR_1));
}
