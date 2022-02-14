
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {scalar_t__ vdisplay; int name; } ;
struct drm_display_mode {scalar_t__ vdisplay; int name; } ;


 int FUNC_0 (struct tv_mode*) ;
 int FUNC_1 (char*,int ,int ,...) ;
 int FUNC_2 (int ,int ) ;
 struct tv_mode* VAR_0 ;

__attribute__((used)) static const struct tv_mode *FUNC_3(const struct drm_display_mode *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  const struct tv_mode *VAR_3 = &VAR_0[VAR_2];

  FUNC_1("Comparing mode %s vs %s",
     VAR_1->name, VAR_3->name);

  if (!FUNC_2(VAR_1->name, VAR_3->name))
   return VAR_3;
 }


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  const struct tv_mode *VAR_4 = &VAR_0[VAR_2];

  FUNC_1("Comparing mode %s vs %s (X: %d vs %d)",
     VAR_1->name, VAR_4->name,
     VAR_1->vdisplay, VAR_4->vdisplay);

  if (VAR_1->vdisplay == VAR_4->vdisplay)
   return VAR_4;
 }

 return ((void*)0);
}
