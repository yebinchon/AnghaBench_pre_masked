
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_crtc {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef enum vsp1_du_crc_source { ____Placeholder_vsp1_du_crc_source } vsp1_du_crc_source ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct rcar_du_crtc*,char const*,int*) ;
 struct rcar_du_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_3(struct drm_crtc *VAR_1,
       const char *VAR_2,
       size_t *VAR_3)
{
 struct rcar_du_crtc *VAR_4 = FUNC_2(VAR_1);
 enum vsp1_du_crc_source VAR_5;

 if (FUNC_1(VAR_4, VAR_2, &VAR_5) < 0) {
  FUNC_0("unknown source %s\n", VAR_2);
  return -VAR_0;
 }

 *VAR_3 = 1;
 return 0;
}
