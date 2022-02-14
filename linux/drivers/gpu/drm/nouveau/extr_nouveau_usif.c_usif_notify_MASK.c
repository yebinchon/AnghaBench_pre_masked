
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct usif_notify {int reply; scalar_t__ route; int enabled; TYPE_5__* p; scalar_t__ token; } ;
struct nvif_notify_rep_v0 {int version; scalar_t__ route; scalar_t__ token; } ;
struct drm_file {scalar_t__ event_space; int event_wait; int event_list; TYPE_1__* minor; } ;
struct drm_device {int event_lock; } ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_9__ {TYPE_3__ base; int * data; } ;
struct TYPE_7__ {int link; struct drm_file* file_priv; } ;
struct TYPE_10__ {TYPE_4__ e; TYPE_2__ base; } ;
struct TYPE_6__ {struct drm_device* dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,void const*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

int
FUNC_9(const void *VAR_2, u32 VAR_3, const void *VAR_4, u32 VAR_5)
{
 struct usif_notify *VAR_6 = ((void*)0);
 const union {
  struct nvif_notify_rep_v0 v0;
 } *VAR_7 = VAR_2;
 struct drm_device *VAR_8;
 struct drm_file *VAR_9;
 unsigned long VAR_10;

 if (VAR_3 == sizeof(VAR_7->v0) && VAR_7->v0.version == 0) {
  if (FUNC_2(!(VAR_6 = (void *)(unsigned long)VAR_7->v0.token)))
   return VAR_1;
  FUNC_1(VAR_7->v0.route != VAR_0);
 } else
 if (FUNC_2(1))
  return VAR_1;

 if (FUNC_2(!VAR_6->p || VAR_6->reply != (VAR_3 + VAR_5)))
  return VAR_1;
 VAR_9 = VAR_6->p->base.file_priv;
 VAR_8 = VAR_9->minor->dev;

 FUNC_5(&VAR_6->p->e.data[0], VAR_2, VAR_3);
 FUNC_5(&VAR_6->p->e.data[VAR_3], VAR_4, VAR_5);
 switch (VAR_7->v0.version) {
 case 0: {
  struct nvif_notify_rep_v0 *VAR_11 = (void *)VAR_6->p->e.data;
  VAR_11->route = VAR_6->route;
  VAR_11->token = VAR_6->token;
 }
  break;
 default:
  FUNC_0();
  break;
 }

 FUNC_6(&VAR_8->event_lock, VAR_10);
 if (!FUNC_2(VAR_9->event_space < VAR_6->p->e.base.length)) {
  FUNC_4(&VAR_6->p->base.link, &VAR_9->event_list);
  VAR_9->event_space -= VAR_6->p->e.base.length;
 }
 FUNC_8(&VAR_9->event_wait);
 FUNC_7(&VAR_8->event_lock, VAR_10);
 FUNC_3(&VAR_6->enabled, 0);
 return VAR_1;
}
