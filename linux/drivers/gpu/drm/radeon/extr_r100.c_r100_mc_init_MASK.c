
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int aper_base; scalar_t__ gtt_base_align; } ;
struct radeon_device {int flags; TYPE_1__ mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_3)
{
 u64 VAR_4;

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 VAR_4 = VAR_3->mc.aper_base;
 if (VAR_3->flags & VAR_1)
  VAR_4 = (FUNC_0(VAR_2) & 0xffff) << 16;
 FUNC_5(VAR_3, &VAR_3->mc, VAR_4);
 VAR_3->mc.gtt_base_align = 0;
 if (!(VAR_3->flags & VAR_0))
  FUNC_3(VAR_3, &VAR_3->mc);
 FUNC_4(VAR_3);
}
