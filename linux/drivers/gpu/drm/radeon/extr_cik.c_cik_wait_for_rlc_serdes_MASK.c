
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ max_shader_engines; scalar_t__ max_sh_per_se; } ;
struct TYPE_4__ {TYPE_1__ cik; } ;
struct radeon_device {scalar_t__ usec_timeout; TYPE_2__ config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct radeon_device*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_6->config.cik.max_shader_engines; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_6->config.cik.max_sh_per_se; VAR_8++) {
   FUNC_1(VAR_6, VAR_7, VAR_8);
   for (VAR_9 = 0; VAR_9 < VAR_6->usec_timeout; VAR_9++) {
    if (FUNC_0(VAR_1) == 0)
     break;
    FUNC_2(1);
   }
  }
 }
 FUNC_1(VAR_6, 0xffffffff, 0xffffffff);

 VAR_10 = VAR_3 | VAR_0 | VAR_4 | VAR_5;
 for (VAR_9 = 0; VAR_9 < VAR_6->usec_timeout; VAR_9++) {
  if ((FUNC_0(VAR_2) & VAR_10) == 0)
   break;
  FUNC_2(1);
 }
}
