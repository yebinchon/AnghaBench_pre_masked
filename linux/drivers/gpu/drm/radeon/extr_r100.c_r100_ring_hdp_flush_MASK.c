
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {int dummy; } ;
struct TYPE_3__ {int hdp_cntl; } ;
struct TYPE_4__ {TYPE_1__ r100; } ;
struct radeon_device {TYPE_2__ config; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct radeon_ring*,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_2, struct radeon_ring *VAR_3)
{
 FUNC_1(VAR_3, FUNC_0(VAR_1, 0));
 FUNC_1(VAR_3, VAR_2->config.r100.hdp_cntl |
    VAR_0);
 FUNC_1(VAR_3, FUNC_0(VAR_1, 0));
 FUNC_1(VAR_3, VAR_2->config.r100.hdp_cntl);
}
