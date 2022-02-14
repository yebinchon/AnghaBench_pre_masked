
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {int dummy; } ;
struct TYPE_3__ {int resync_scratch; } ;
struct TYPE_4__ {TYPE_1__ r300; } ;
struct radeon_device {TYPE_2__ config; struct radeon_ring* ring; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_4 (struct radeon_ring*,int ) ;
 int FUNC_5 (struct radeon_device*,int ) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_3)
{
 int VAR_4;
 struct radeon_ring *VAR_5 = &VAR_3->ring[VAR_2];




 VAR_4 = FUNC_2(VAR_3, VAR_5, 8);
 FUNC_1(VAR_4);
 FUNC_4(VAR_5, FUNC_0(VAR_1, 0));
 FUNC_4(VAR_5, VAR_0);
 FUNC_3(VAR_3, VAR_5, 0);
 FUNC_5(VAR_3, VAR_3->config.r300.resync_scratch);
}
