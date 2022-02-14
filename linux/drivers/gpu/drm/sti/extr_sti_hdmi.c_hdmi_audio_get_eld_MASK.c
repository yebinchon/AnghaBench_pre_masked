
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sti_hdmi {struct drm_connector* drm_connector; } ;
struct drm_connector {int eld; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct sti_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int,size_t) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 struct sti_hdmi *VAR_4 = FUNC_1(VAR_0);
 struct drm_connector *VAR_5 = VAR_4->drm_connector;

 FUNC_0("\n");
 FUNC_2(VAR_2, VAR_5->eld, FUNC_3(sizeof(VAR_5->eld), VAR_3));

 return 0;
}
