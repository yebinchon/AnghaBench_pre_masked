
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ ctrlMode; int R1; int R2; int R3; } ;
struct drxd_state {TYPE_1__ if_agc_cfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drxd_state*,int ,int*,int ) ;

__attribute__((used)) static int FUNC_1(struct drxd_state *VAR_3, u32 * VAR_4)
{
 int VAR_5 = 0;

 *VAR_4 = 0;
 if (VAR_3->if_agc_cfg.ctrlMode != VAR_0) {
  u16 VAR_6;
  VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_6, 0);
  VAR_6 &= VAR_2;
  if (VAR_5 >= 0) {
   u32 VAR_7 = VAR_3->if_agc_cfg.R1;
   u32 VAR_8 = VAR_3->if_agc_cfg.R2;
   u32 VAR_9 = VAR_3->if_agc_cfg.R3;

   u32 VAR_10, VAR_11, VAR_12, VAR_13;

   if (VAR_8 == 0 && (VAR_7 == 0 || VAR_9 == 0))
    return 0;

   VAR_10 = (3300 * VAR_8) / (VAR_7 + VAR_8);
   VAR_11 = (VAR_8 * VAR_9) / (VAR_9 + VAR_8);
   VAR_12 = (3300 * VAR_11) / (VAR_7 + VAR_11);
   VAR_13 = VAR_12 + ((VAR_10 - VAR_12) * VAR_6) / 1024;

   *VAR_4 = VAR_13;
  }
 }
 return VAR_5;
}
