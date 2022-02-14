
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct TYPE_2__ {int * ptr; } ;
struct radeon_device {TYPE_1__ gart; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct radeon_device *VAR_0, unsigned VAR_1,
       uint64_t VAR_2)
{
 u32 *VAR_3 = VAR_0->gart.ptr;
 VAR_3[VAR_1] = FUNC_0(FUNC_1(VAR_2));
}
