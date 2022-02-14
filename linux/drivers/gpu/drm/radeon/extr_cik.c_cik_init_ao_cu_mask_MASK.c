
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ max_shader_engines; scalar_t__ max_sh_per_se; scalar_t__ max_cu_per_sh; } ;
struct TYPE_4__ {TYPE_1__ cik; } ;
struct radeon_device {TYPE_2__ config; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct radeon_device*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7 = 0;
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->config.cik.max_shader_engines; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_3->config.cik.max_sh_per_se; VAR_5++) {
   VAR_8 = 1;
   VAR_10 = 0;
   VAR_9 = 0;
   for (VAR_6 = 0; VAR_6 < VAR_3->config.cik.max_cu_per_sh; VAR_6 ++) {
    if (FUNC_3(VAR_3, VAR_4, VAR_5) & VAR_8) {
     if (VAR_9 < 2)
      VAR_10 |= VAR_8;
     VAR_9 ++;
    }
    VAR_8 <<= 1;
   }

   VAR_7 += VAR_9;
   VAR_11 |= (VAR_10 << (VAR_4 * 16 + VAR_5 * 8));
  }
 }

 FUNC_2(VAR_2, VAR_11);

 VAR_11 = FUNC_1(VAR_1);
 VAR_11 &= ~VAR_0;
 VAR_11 |= FUNC_0(VAR_7);
 FUNC_2(VAR_1, VAR_11);
}
