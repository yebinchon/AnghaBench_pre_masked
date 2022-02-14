
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int dummy; } ;
struct qxl_bo {scalar_t__ type; scalar_t__ surface_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qxl_device*,struct qxl_bo*) ;
 int FUNC_1 (struct qxl_device*,struct qxl_bo*) ;

int FUNC_2(struct qxl_device *VAR_1, struct qxl_bo *VAR_2)
{
 int VAR_3;

 if (VAR_2->type == VAR_0 && VAR_2->surface_id == 0) {

  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3)
   return VAR_3;
 }
 return 0;
}
