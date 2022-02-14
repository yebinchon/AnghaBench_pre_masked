
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_drm {int map; } ;
struct drm_format_info {int format; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct ingenic_drm *VAR_7,
      const struct drm_format_info *VAR_8)
{
 unsigned int VAR_9 = VAR_4 | VAR_3;

 switch (VAR_8->format) {
 case 129:
  VAR_9 |= VAR_5;

 case 130:
  VAR_9 |= VAR_0;
  break;
 case 128:
  VAR_9 |= VAR_1;
  break;
 }

 FUNC_0(VAR_7->map, VAR_6,
      VAR_4 | VAR_3 |
      VAR_2, VAR_9);
}
