
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * wb_obj; int * wb; } ;
struct radeon_device {TYPE_1__ wb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*) ;

void FUNC_6(struct radeon_device *VAR_0)
{
 FUNC_5(VAR_0);
 if (VAR_0->wb.wb_obj) {
  if (!FUNC_1(VAR_0->wb.wb_obj, 0)) {
   FUNC_0(VAR_0->wb.wb_obj);
   FUNC_2(VAR_0->wb.wb_obj);
   FUNC_4(VAR_0->wb.wb_obj);
  }
  FUNC_3(&VAR_0->wb.wb_obj);
  VAR_0->wb.wb = ((void*)0);
  VAR_0->wb.wb_obj = ((void*)0);
 }
}
