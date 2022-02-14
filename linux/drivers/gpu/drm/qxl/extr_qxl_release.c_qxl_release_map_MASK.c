
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qxl_release_info {int dummy; } qxl_release_info ;
struct qxl_release {int release_offset; struct qxl_bo* release_bo; } ;
struct qxl_device {int dummy; } ;
struct qxl_bo {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct qxl_device*,struct qxl_bo*,int) ;

union qxl_release_info *FUNC_1(struct qxl_device *VAR_1,
     struct qxl_release *VAR_2)
{
 void *VAR_3;
 union qxl_release_info *VAR_4;
 struct qxl_bo *VAR_5 = VAR_2->release_bo;

 VAR_3 = FUNC_0(VAR_1, VAR_5, VAR_2->release_offset & VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_4 = VAR_3 + (VAR_2->release_offset & ~VAR_0);
 return VAR_4;
}
