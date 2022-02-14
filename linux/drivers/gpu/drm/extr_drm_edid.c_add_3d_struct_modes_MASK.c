
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct drm_display_mode {int flags; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_display_mode* FUNC_0 (struct drm_connector*,int const*,int ,int ) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_3, u16 VAR_4,
          const u8 *VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct drm_display_mode *VAR_8;
 int VAR_9 = 0;

 if (VAR_4 & (1 << 0)) {
  VAR_8 = FUNC_0(VAR_3, VAR_5,
         VAR_6,
         VAR_7);
  if (VAR_8) {
   VAR_8->flags |= VAR_0;
   FUNC_1(VAR_3, VAR_8);
   VAR_9++;
  }
 }
 if (VAR_4 & (1 << 6)) {
  VAR_8 = FUNC_0(VAR_3, VAR_5,
         VAR_6,
         VAR_7);
  if (VAR_8) {
   VAR_8->flags |= VAR_2;
   FUNC_1(VAR_3, VAR_8);
   VAR_9++;
  }
 }
 if (VAR_4 & (1 << 8)) {
  VAR_8 = FUNC_0(VAR_3, VAR_5,
         VAR_6,
         VAR_7);
  if (VAR_8) {
   VAR_8->flags |= VAR_1;
   FUNC_1(VAR_3, VAR_8);
   VAR_9++;
  }
 }

 return VAR_9;
}
