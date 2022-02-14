
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_pending_event {struct drm_file* file_priv; int pending_link; struct drm_event* event; } ;
struct drm_file {scalar_t__ event_space; int pending_event_list; } ;
struct drm_event {scalar_t__ length; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1(struct drm_device *VAR_1,
      struct drm_file *VAR_2,
      struct drm_pending_event *VAR_3,
      struct drm_event *VAR_4)
{
 if (VAR_2->event_space < VAR_4->length)
  return -VAR_0;

 VAR_2->event_space -= VAR_4->length;

 VAR_3->event = VAR_4;
 FUNC_0(&VAR_3->pending_link, &VAR_2->pending_event_list);
 VAR_3->file_priv = VAR_2;

 return 0;
}
