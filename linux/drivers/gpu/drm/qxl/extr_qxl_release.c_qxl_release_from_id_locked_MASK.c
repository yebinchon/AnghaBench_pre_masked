
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct qxl_release {int dummy; } ;
struct qxl_device {int release_idr_lock; int release_idr; } ;


 int FUNC_0 (char*) ;
 struct qxl_release* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct qxl_release *FUNC_4(struct qxl_device *VAR_0,
         uint64_t VAR_1)
{
 struct qxl_release *VAR_2;

 FUNC_2(&VAR_0->release_idr_lock);
 VAR_2 = FUNC_1(&VAR_0->release_idr, VAR_1);
 FUNC_3(&VAR_0->release_idr_lock);
 if (!VAR_2) {
  FUNC_0("failed to find id in release_idr\n");
  return ((void*)0);
 }

 return VAR_2;
}
