
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int dummy; } ;
struct radeon_ib {size_t ring; int length_dw; int gpu_addr; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct radeon_ring*,int ) ;

void FUNC_2(struct radeon_device *VAR_2, struct radeon_ib *VAR_3)
{
 struct radeon_ring *VAR_4 = &VAR_2->ring[VAR_3->ring];

 FUNC_1(VAR_4, FUNC_0(VAR_0, 0));
 FUNC_1(VAR_4, VAR_3->gpu_addr);
 FUNC_1(VAR_4, FUNC_0(VAR_1, 0));
 FUNC_1(VAR_4, VAR_3->length_dw);
}
