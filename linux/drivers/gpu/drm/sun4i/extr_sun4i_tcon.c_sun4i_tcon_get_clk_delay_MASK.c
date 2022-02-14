
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int vtotal; int vdisplay; int flags; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(const struct drm_display_mode *VAR_1,
        int VAR_2)
{
 int VAR_3 = VAR_1->vtotal - VAR_1->vdisplay;

 if (VAR_1->flags & VAR_0)
  VAR_3 /= 2;

 if (VAR_2 == 1)
  VAR_3 -= 2;

 VAR_3 = FUNC_1(VAR_3, 30);

 FUNC_0("TCON %d clock delay %u\n", VAR_2, VAR_3);

 return VAR_3;
}
