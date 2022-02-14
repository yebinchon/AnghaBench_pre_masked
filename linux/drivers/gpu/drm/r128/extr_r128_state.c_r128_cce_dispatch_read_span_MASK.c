
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int y ;
typedef int x ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int depth_fmt; int depth_pitch_offset_c; int span_pitch_offset_c; } ;
typedef TYPE_1__ drm_r128_private_t ;
struct TYPE_5__ {int n; int y; int x; } ;
typedef TYPE_2__ drm_r128_depth_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_12,
           drm_r128_depth_t *VAR_13)
{
 drm_r128_private_t *VAR_14 = VAR_12->dev_private;
 int VAR_15, VAR_16, VAR_17;
 VAR_11;
 FUNC_3("\n");

 VAR_15 = VAR_13->n;
 if (VAR_15 > 4096 || VAR_15 <= 0)
  return -VAR_1;

 if (FUNC_5(&VAR_16, VAR_13->x, sizeof(VAR_16)))
  return -VAR_0;
 if (FUNC_5(&VAR_17, VAR_13->y, sizeof(VAR_17)))
  return -VAR_0;

 FUNC_1(7);

 FUNC_4(FUNC_2(VAR_2, 5));
 FUNC_4(VAR_8 |
   VAR_6 |
   VAR_4 |
   (VAR_14->depth_fmt << 8) |
   VAR_7 |
   VAR_10 |
   VAR_3 |
   VAR_5 | VAR_9);

 FUNC_4(VAR_14->depth_pitch_offset_c);
 FUNC_4(VAR_14->span_pitch_offset_c);

 FUNC_4((VAR_16 << 16) | VAR_17);
 FUNC_4((0 << 16) | 0);
 FUNC_4((VAR_15 << 16) | 1);

 FUNC_0();

 return 0;
}
