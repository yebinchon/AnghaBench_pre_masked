
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_hda_connector {struct sti_hda* hda; } ;
struct sti_hda {TYPE_1__* drm_dev; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int primary; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sti_hda*,int ) ;
 struct sti_hda_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_1)
{
 struct sti_hda_connector *VAR_2
  = FUNC_2(VAR_1);
 struct sti_hda *VAR_3 = VAR_2->hda;

 if (FUNC_1(VAR_3, VAR_3->drm_dev->primary)) {
  FUNC_0("HDA debugfs setup failed\n");
  return -VAR_0;
 }

 return 0;
}
