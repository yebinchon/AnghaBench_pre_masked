
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_cu_per_sh; } ;
struct TYPE_4__ {TYPE_1__ si; } ;
struct radeon_device {TYPE_2__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*,int,int) ;

__attribute__((used)) static u32 FUNC_2(struct radeon_device *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0, VAR_6, VAR_7;
 int VAR_8;

 FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_6 = FUNC_0(VAR_0);
 VAR_7 = FUNC_0(VAR_1);
 FUNC_1(VAR_2, 0xffffffff, 0xffffffff);

 VAR_6 &= 0xffff0000;

 VAR_6 |= VAR_7;
 VAR_6 >>= 16;

 for (VAR_8 = 0; VAR_8 < VAR_2->config.si.max_cu_per_sh; VAR_8 ++) {
  VAR_5 <<= 1;
  VAR_5 |= 1;
 }

 return (~VAR_6) & VAR_5;
}
