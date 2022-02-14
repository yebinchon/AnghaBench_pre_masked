
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int pixel_format; } ;
struct mdp_format {int is_yuv; TYPE_1__ base; } ;
struct drm_format_info {int hsub; int vsub; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_format_info* FUNC_7 (int ) ;

__attribute__((used)) static uint32_t FUNC_8(const struct mdp_format *VAR_4,
  uint32_t VAR_5, uint32_t VAR_6, bool VAR_7)
{
 const struct drm_format_info *VAR_8 = FUNC_7(VAR_4->base.pixel_format);
 bool VAR_9 = VAR_4->is_yuv ? 1 : (VAR_5 != VAR_6);
 uint32_t VAR_10;
 uint32_t VAR_11, VAR_12;
 bool VAR_13 = VAR_4->is_yuv;

 if (!VAR_9)
  return 0;

 if (VAR_13) {
  VAR_10 = VAR_7 ? VAR_8->hsub : VAR_8->vsub;
  VAR_12 = ((VAR_5 / VAR_10) <= VAR_6) ?
       VAR_2 : VAR_3;
 }
 VAR_11 = (VAR_5 <= VAR_6) ? VAR_2 : VAR_3;

 if (VAR_7)
  return VAR_0 |
   FUNC_1(VAR_11) |
   FUNC_3(VAR_11) |
   FUNC_0(VAR_13, FUNC_2(VAR_12));
 else
  return VAR_1 |
   FUNC_4(VAR_11) |
   FUNC_6(VAR_11) |
   FUNC_0(VAR_13, FUNC_5(VAR_12));
}
