
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct drm_connector {int eld; } ;
struct zx_hdmi {struct drm_connector connector; } ;
struct device {int dummy; } ;


 struct zx_hdmi* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int,size_t) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1,
     uint8_t *VAR_2, size_t VAR_3)
{
 struct zx_hdmi *VAR_4 = FUNC_0(VAR_0);
 struct drm_connector *VAR_5 = &VAR_4->connector;

 FUNC_1(VAR_2, VAR_5->eld, FUNC_2(sizeof(VAR_5->eld), VAR_3));

 return 0;
}
