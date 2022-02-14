
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int dummy; } ;
struct TYPE_3__ {int mode; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,struct drm_display_mode*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct drm_display_mode VAR_1, int *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (FUNC_1(&VAR_0[VAR_3].mode, &VAR_1)) {
   *VAR_2 = VAR_3;
   return 1;
  }
 return 0;
}
