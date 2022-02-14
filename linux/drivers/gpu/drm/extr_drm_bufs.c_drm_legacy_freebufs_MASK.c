
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct drm_buf_free {int count; int * list; } ;
struct drm_buf {struct drm_file* file_priv; } ;
typedef int idx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int*,int *,int) ;
 int VAR_5 ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*,struct drm_buf*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct drm_device *VAR_6, void *VAR_7,
   struct drm_file *VAR_8)
{
 struct drm_device_dma *VAR_9 = VAR_6->dma;
 struct drm_buf_free *VAR_10 = VAR_7;
 int VAR_11;
 int VAR_12;
 struct drm_buf *VAR_13;

 if (!FUNC_4(VAR_6, VAR_1))
  return -VAR_4;

 if (!FUNC_4(VAR_6, VAR_0))
  return -VAR_4;

 if (!VAR_9)
  return -VAR_3;

 FUNC_0("%d\n", VAR_10->count);
 for (VAR_11 = 0; VAR_11 < VAR_10->count; VAR_11++) {
  if (FUNC_3(&VAR_12, &VAR_10->list[VAR_11], sizeof(VAR_12)))
   return -VAR_2;
  if (VAR_12 < 0 || VAR_12 >= VAR_9->buf_count) {
   FUNC_1("Index %d (of %d max)\n",
      VAR_12, VAR_9->buf_count - 1);
   return -VAR_3;
  }
  VAR_12 = FUNC_2(VAR_12, VAR_9->buf_count);
  VAR_13 = VAR_9->buflist[VAR_12];
  if (VAR_13->file_priv != VAR_8) {
   FUNC_1("Process %d freeing buffer not owned\n",
      FUNC_6(VAR_5));
   return -VAR_3;
  }
  FUNC_5(VAR_6, VAR_13);
 }

 return 0;
}
