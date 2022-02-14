
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qxl_release_info {int dummy; } qxl_release_info ;
struct qxl_release {int release_offset; struct qxl_bo* release_bo; } ;
struct qxl_device {int dummy; } ;
struct qxl_bo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qxl_device*,struct qxl_bo*,void*) ;

void FUNC_1(struct qxl_device *VAR_1,
         struct qxl_release *VAR_2,
         union qxl_release_info *VAR_3)
{
 struct qxl_bo *VAR_4 = VAR_2->release_bo;
 void *VAR_5;

 VAR_5 = ((void *)VAR_3) - (VAR_2->release_offset & ~VAR_0);
 FUNC_0(VAR_1, VAR_4, VAR_5);
}
