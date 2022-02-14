
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_release {int dummy; } ;
struct qxl_device {int dummy; } ;
struct qxl_bo {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qxl_device*,unsigned long,int,int,int ,int *,struct qxl_bo**) ;
 int FUNC_2 (struct qxl_bo**) ;
 int FUNC_3 (struct qxl_release*,struct qxl_bo*) ;

int FUNC_4(struct qxl_device *VAR_1,
     struct qxl_release *VAR_2,
     unsigned long VAR_3,
     struct qxl_bo **VAR_4)
{
 struct qxl_bo *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_3, 0 ,
       0, VAR_0, ((void*)0), &VAR_5);
 if (VAR_6) {
  FUNC_0("failed to allocate VRAM BO\n");
  return VAR_6;
 }
 VAR_6 = FUNC_3(VAR_2, VAR_5);
 if (VAR_6)
  goto out_unref;

 *VAR_4 = VAR_5;
 return 0;
out_unref:
 FUNC_2(&VAR_5);
 return VAR_6;
}
