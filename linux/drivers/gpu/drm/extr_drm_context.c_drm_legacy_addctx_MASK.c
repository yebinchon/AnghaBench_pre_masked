
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int ctxlist_mutex; int ctxlist; } ;
struct drm_ctx_list {int handle; int head; struct drm_file* tag; } ;
struct drm_ctx {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 struct drm_ctx_list* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct drm_device *VAR_6, void *VAR_7,
        struct drm_file *VAR_8)
{
 struct drm_ctx_list *VAR_9;
 struct drm_ctx *VAR_10 = VAR_7;
 int VAR_11;

 if (!FUNC_2(VAR_6, VAR_0) &&
     !FUNC_2(VAR_6, VAR_1))
  return -VAR_4;

 VAR_11 = FUNC_3(VAR_6);
 if (VAR_11 == VAR_2) {

  VAR_11 = FUNC_3(VAR_6);
 }
 FUNC_0("%d\n", VAR_11);
 if (VAR_11 < 0) {
  FUNC_0("Not enough free contexts.\n");

  return VAR_11;
 }

 VAR_10->handle = VAR_11;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_5);
 if (!VAR_9) {
  FUNC_0("out of memory\n");
  return -VAR_3;
 }

 FUNC_1(&VAR_9->head);
 VAR_9->handle = VAR_10->handle;
 VAR_9->tag = VAR_8;

 FUNC_6(&VAR_6->ctxlist_mutex);
 FUNC_5(&VAR_9->head, &VAR_6->ctxlist);
 FUNC_7(&VAR_6->ctxlist_mutex);

 return 0;
}
