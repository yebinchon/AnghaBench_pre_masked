
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_object_extent {int dummy; } ;
struct rbd_obj_request {struct ceph_object_extent ex; } ;
struct rbd_img_request {int dummy; } ;


 int FUNC_0 (struct rbd_img_request*,struct rbd_obj_request*) ;
 struct rbd_obj_request* FUNC_1 () ;

__attribute__((used)) static struct ceph_object_extent *FUNC_2(void *VAR_0)
{
 struct rbd_img_request *VAR_1 = VAR_0;
 struct rbd_obj_request *VAR_2;

 VAR_2 = FUNC_1();
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_1, VAR_2);
 return &VAR_2->ex;
}
