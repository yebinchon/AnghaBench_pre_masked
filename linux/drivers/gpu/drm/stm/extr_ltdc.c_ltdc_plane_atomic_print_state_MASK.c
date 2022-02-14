
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {struct fps_info* plane_fpsi; } ;
struct fps_info {int counter; int last_timestamp; } ;
struct drm_printer {int dummy; } ;
struct drm_plane_state {struct drm_plane* plane; } ;
struct drm_plane {size_t index; } ;
typedef int ktime_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_printer*,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct ltdc_device* FUNC_5 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_6(struct drm_printer *VAR_0,
       const struct drm_plane_state *VAR_1)
{
 struct drm_plane *VAR_2 = VAR_1->plane;
 struct ltdc_device *VAR_3 = FUNC_5(VAR_2);
 struct fps_info *VAR_4 = &VAR_3->plane_fpsi[VAR_2->index];
 int VAR_5;
 ktime_t VAR_6;

 VAR_6 = FUNC_2();
 VAR_5 = FUNC_4(FUNC_3(VAR_6, VAR_4->last_timestamp));

 FUNC_1(VAR_0, "\tuser_updates=%dfps\n",
     FUNC_0(VAR_4->counter * 1000, VAR_5));

 VAR_4->last_timestamp = VAR_6;
 VAR_4->counter = 0;
}
