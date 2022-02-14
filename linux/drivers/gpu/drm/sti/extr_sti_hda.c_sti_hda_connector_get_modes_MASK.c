
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sti_hda_connector {struct sti_hda* hda; } ;
struct sti_hda {int drm_dev; } ;
struct drm_display_mode {int type; int vrefresh; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {int mode; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct drm_display_mode* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_display_mode*) ;
 TYPE_1__* VAR_1 ;
 struct sti_hda_connector* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 0;
 struct sti_hda_connector *VAR_5
  = FUNC_5(VAR_2);
 struct sti_hda *VAR_6 = VAR_5->hda;

 FUNC_1("\n");

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  struct drm_display_mode *VAR_7 =
   FUNC_2(VAR_6->drm_dev,
     &VAR_1[VAR_3].mode);
  if (!VAR_7)
   continue;
  VAR_7->vrefresh = FUNC_4(VAR_7);


  if (VAR_3 == 0)
   VAR_7->type |= VAR_0;

  FUNC_3(VAR_2, VAR_7);
  VAR_4++;
 }

 return VAR_4;
}
