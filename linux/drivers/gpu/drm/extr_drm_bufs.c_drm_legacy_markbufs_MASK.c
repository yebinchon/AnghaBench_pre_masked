
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device_dma {struct drm_buf_entry* bufs; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct drm_buf_entry {scalar_t__ buf_count; scalar_t__ low_mark; scalar_t__ high_mark; } ;
struct drm_buf_desc {scalar_t__ low_mark; scalar_t__ high_mark; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct drm_device *VAR_6, void *VAR_7,
   struct drm_file *VAR_8)
{
 struct drm_device_dma *VAR_9 = VAR_6->dma;
 struct drm_buf_desc *VAR_10 = VAR_7;
 int VAR_11;
 struct drm_buf_entry *VAR_12;

 if (!FUNC_1(VAR_6, VAR_1))
  return -VAR_5;

 if (!FUNC_1(VAR_6, VAR_0))
  return -VAR_5;

 if (!VAR_9)
  return -VAR_4;

 FUNC_0("%d, %d, %d\n",
    VAR_10->size, VAR_10->low_mark, VAR_10->high_mark);
 VAR_11 = FUNC_2(VAR_10->size);
 if (VAR_11 < VAR_3 || VAR_11 > VAR_2)
  return -VAR_4;
 VAR_12 = &VAR_9->bufs[VAR_11];

 if (VAR_10->low_mark < 0 || VAR_10->low_mark > VAR_12->buf_count)
  return -VAR_4;
 if (VAR_10->high_mark < 0 || VAR_10->high_mark > VAR_12->buf_count)
  return -VAR_4;

 VAR_12->low_mark = VAR_10->low_mark;
 VAR_12->high_mark = VAR_10->high_mark;

 return 0;
}
