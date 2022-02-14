
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int dummy; } ;
struct radeon_ib {size_t ring; int length_dw; int gpu_addr; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_ring*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct radeon_device *VAR_1, struct radeon_ib *VAR_2)
{
 struct radeon_ring *VAR_3 = &VAR_1->ring[VAR_2->ring];
 FUNC_1(VAR_3, FUNC_0(VAR_0));
 FUNC_1(VAR_3, FUNC_0(VAR_2->gpu_addr));
 FUNC_1(VAR_3, FUNC_0(FUNC_2(VAR_2->gpu_addr)));
 FUNC_1(VAR_3, FUNC_0(VAR_2->length_dw));
}
