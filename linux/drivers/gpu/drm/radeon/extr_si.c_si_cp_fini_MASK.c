
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int rptr_save_reg; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3)
{
 struct radeon_ring *VAR_4;
 FUNC_2(VAR_3, 0);

 VAR_4 = &VAR_3->ring[VAR_2];
 FUNC_0(VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_4->rptr_save_reg);

 VAR_4 = &VAR_3->ring[VAR_0];
 FUNC_0(VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_4->rptr_save_reg);

 VAR_4 = &VAR_3->ring[VAR_1];
 FUNC_0(VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_4->rptr_save_reg);
}
