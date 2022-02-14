
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct TYPE_3__ {int h; int w; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_connector*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  VAR_3 += FUNC_1(VAR_1,
        VAR_0[VAR_2].w,
        VAR_0[VAR_2].h,
        0);
 return VAR_3;
}
