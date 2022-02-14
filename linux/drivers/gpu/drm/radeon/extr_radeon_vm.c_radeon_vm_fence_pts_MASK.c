
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_vm {TYPE_1__* page_tables; } ;
struct radeon_fence {int dummy; } ;
struct TYPE_2__ {int bo; } ;


 int FUNC_0 (int ,struct radeon_fence*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct radeon_vm *VAR_1,
    uint64_t VAR_2, uint64_t VAR_3,
    struct radeon_fence *VAR_4)
{
 unsigned VAR_5;

 VAR_2 >>= VAR_0;
 VAR_3 = (VAR_3 - 1) >> VAR_0;

 for (VAR_5 = VAR_2; VAR_5 <= VAR_3; ++VAR_5)
  FUNC_0(VAR_1->page_tables[VAR_5].bo, VAR_4, 1);
}
