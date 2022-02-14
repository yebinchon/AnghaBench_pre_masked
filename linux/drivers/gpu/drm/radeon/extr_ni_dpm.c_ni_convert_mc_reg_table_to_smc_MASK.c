
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {int performance_level_count; int * performance_levels; } ;
struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ SMC_NIslands_MCRegisters ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int *,int *) ;
 struct ni_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1,
        struct radeon_ps *VAR_2,
        SMC_NIslands_MCRegisters *VAR_3)
{
 struct ni_ps *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->performance_level_count; VAR_5++) {
  FUNC_0(VAR_1,
           &VAR_4->performance_levels[VAR_5],
           &VAR_3->data[VAR_0 + VAR_5]);
 }
}
