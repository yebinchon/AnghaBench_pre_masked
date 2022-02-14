
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;
struct dcb_output {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nouveau_drm*,char*,int ) ;
 int FUNC_2 (struct drm_device*,int ,struct dcb_output*,int) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,struct dcb_output*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct drm_device *VAR_3, uint16_t VAR_4,
        struct dcb_output *VAR_5, int VAR_6, bool VAR_7)
{
 struct nouveau_drm *VAR_8 = FUNC_3(VAR_3);

 FUNC_1(VAR_8, "0x%04X: Parsing digital output script table\n",
   VAR_4);
 FUNC_0(VAR_3, 0, VAR_0, VAR_6 ? VAR_2 :
              VAR_1);
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_4(VAR_3, VAR_5, VAR_6, VAR_7);
}
