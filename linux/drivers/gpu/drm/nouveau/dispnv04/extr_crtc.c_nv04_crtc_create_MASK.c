
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nvbo; } ;
struct TYPE_4__ {scalar_t__ depth; } ;
struct nouveau_crtc {int index; TYPE_2__ cursor; int base; int restore; int save; int last_dpms; TYPE_1__ lut; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct drm_device*,int *,int ,int *,int *,int *) ;
 int FUNC_3 (int *,int) ;
 struct nouveau_crtc* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int,int ,int ,int,int *,int *,int *) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (struct drm_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct nouveau_crtc*) ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_12(struct drm_device *VAR_8, int VAR_9)
{
 struct nouveau_crtc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->lut.depth = 0;

 VAR_10->index = VAR_9;
 VAR_10->last_dpms = VAR_2;

 VAR_10->save = VAR_7;
 VAR_10->restore = VAR_6;

 FUNC_2(VAR_8, &VAR_10->base,
                                  FUNC_0(VAR_8), ((void*)0),
                                  &VAR_4, ((void*)0));
 FUNC_1(&VAR_10->base, &VAR_5);
 FUNC_3(&VAR_10->base, 256);

 VAR_11 = FUNC_6(&FUNC_10(VAR_8)->client, 64*64*4, 0x100,
        VAR_3, 0, 0x0000, ((void*)0), ((void*)0),
        &VAR_10->cursor.nvbo);
 if (!VAR_11) {
  VAR_11 = FUNC_7(VAR_10->cursor.nvbo, VAR_3, 0);
  if (!VAR_11) {
   VAR_11 = FUNC_5(VAR_10->cursor.nvbo);
   if (VAR_11)
    FUNC_9(VAR_10->cursor.nvbo);
  }
  if (VAR_11)
   FUNC_8(((void*)0), &VAR_10->cursor.nvbo);
 }

 FUNC_11(VAR_10);

 return 0;
}
