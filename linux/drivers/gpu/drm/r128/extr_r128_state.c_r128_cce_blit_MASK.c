
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device_dma {scalar_t__ buf_count; } ;
struct drm_device {int * dev_private; struct drm_device_dma* dma; } ;
typedef int drm_r128_private_t ;
struct TYPE_3__ {scalar_t__ idx; } ;
typedef TYPE_1__ drm_r128_blit_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (struct drm_device*,struct drm_file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (struct drm_device*,struct drm_file*,TYPE_1__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 struct drm_device_dma *VAR_5 = VAR_2->dma;
 drm_r128_private_t *VAR_6 = VAR_2->dev_private;
 drm_r128_blit_t *VAR_7 = VAR_3;
 int VAR_8;

 FUNC_4(VAR_2, VAR_4);

 FUNC_1(VAR_6);

 FUNC_2("pid=%d index=%d\n", FUNC_8(VAR_1), VAR_7->idx);

 if (VAR_7->idx < 0 || VAR_7->idx >= VAR_5->buf_count) {
  FUNC_3("buffer index %d (of %d max)\n",
     VAR_7->idx, VAR_5->buf_count - 1);
  return -VAR_0;
 }

 FUNC_5(VAR_6);
 FUNC_6(VAR_6);

 VAR_8 = FUNC_7(VAR_2, VAR_4, VAR_7);

 FUNC_0();
 return VAR_8;
}
