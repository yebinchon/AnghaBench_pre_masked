
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_self_refresh_data {int exit_avg_ms; int entry_avg_ms; int avg_mutex; struct drm_crtc* crtc; int entry_work; } ;
struct drm_crtc {struct drm_self_refresh_data* self_refresh_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_self_refresh_data*) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct drm_self_refresh_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_crtc *VAR_5)
{
 struct drm_self_refresh_data *VAR_6 = VAR_5->self_refresh_data;


 if (FUNC_1(VAR_6))
  return -VAR_0;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_0(&VAR_6->entry_work,
     VAR_4);
 VAR_6->crtc = VAR_5;
 FUNC_5(&VAR_6->avg_mutex);
 FUNC_3(&VAR_6->entry_avg_ms);
 FUNC_3(&VAR_6->exit_avg_ms);






 FUNC_2(&VAR_6->entry_avg_ms, VAR_3);
 FUNC_2(&VAR_6->exit_avg_ms, VAR_3);

 VAR_5->self_refresh_data = VAR_6;
 return 0;
}
