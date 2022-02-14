
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* ring; } ;
struct TYPE_2__ {int rptr_save_reg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 int FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_5 (struct radeon_device*,int ) ;

void FUNC_6(struct radeon_device *VAR_1)
{
 if (FUNC_3(VAR_1)) {
  FUNC_0("Wait for CP idle timeout, shutting down CP.\n");
 }

 FUNC_2(VAR_1);
 FUNC_5(VAR_1, VAR_1->ring[VAR_0].rptr_save_reg);
 FUNC_4(VAR_1, &VAR_1->ring[VAR_0]);
 FUNC_1("radeon: cp finalized\n");
}
