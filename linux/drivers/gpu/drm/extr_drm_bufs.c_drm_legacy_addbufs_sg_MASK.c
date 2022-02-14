
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device_dma {int buf_count; int page_count; int flags; scalar_t__ byte_count; int seg_count; struct drm_buf** buflist; struct drm_buf_entry* bufs; } ;
struct drm_device {int buf_alloc; int struct_mutex; TYPE_2__* driver; TYPE_1__* sg; int buf_lock; scalar_t__ buf_use; struct drm_device_dma* dma; } ;
struct drm_buf_entry {int buf_count; int buf_size; int page_order; scalar_t__ seg_count; struct drm_buf* buflist; } ;
struct drm_buf_desc {int count; int size; int flags; unsigned long agp_start; } ;
struct drm_buf {int idx; int total; int order; unsigned long bus_address; void* address; int dev_private; int dev_priv_size; int * file_priv; scalar_t__ pending; scalar_t__ waiting; int * next; scalar_t__ offset; scalar_t__ used; } ;
struct TYPE_4__ {int dev_priv_size; } ;
struct TYPE_3__ {scalar_t__ virtual; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_device*,struct drm_buf_entry*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 struct drm_buf* FUNC_7 (int,int,int ) ;
 struct drm_buf** FUNC_8 (struct drm_buf**,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct drm_device *VAR_14,
     struct drm_buf_desc *VAR_15)
{
 struct drm_device_dma *VAR_16 = VAR_14->dma;
 struct drm_buf_entry *VAR_17;
 struct drm_buf *VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 struct drm_buf **VAR_29;

 if (!FUNC_6(VAR_14, VAR_1))
  return -VAR_7;

 if (!VAR_16)
  return -VAR_5;

 if (!FUNC_4(VAR_0))
  return -VAR_8;

 VAR_21 = VAR_15->count;
 VAR_22 = FUNC_12(VAR_15->size);
 VAR_23 = 1 << VAR_22;

 VAR_24 = (VAR_15->flags & VAR_13)
     ? FUNC_1(VAR_23) : VAR_23;
 VAR_25 = VAR_22 - VAR_10 > 0 ? VAR_22 - VAR_10 : 0;
 VAR_26 = VAR_11 << VAR_25;

 VAR_27 = 0;
 VAR_20 = VAR_15->agp_start;

 FUNC_0("count:      %d\n", VAR_21);
 FUNC_0("order:      %d\n", VAR_22);
 FUNC_0("size:       %d\n", VAR_23);
 FUNC_0("agp_offset: %lu\n", VAR_20);
 FUNC_0("alignment:  %d\n", VAR_24);
 FUNC_0("page_order: %d\n", VAR_25);
 FUNC_0("total:      %d\n", VAR_26);

 if (VAR_22 < VAR_3 || VAR_22 > VAR_2)
  return -VAR_5;

 FUNC_13(&VAR_14->buf_lock);
 if (VAR_14->buf_use) {
  FUNC_14(&VAR_14->buf_lock);
  return -VAR_4;
 }
 FUNC_3(&VAR_14->buf_alloc);
 FUNC_14(&VAR_14->buf_lock);

 FUNC_10(&VAR_14->struct_mutex);
 VAR_17 = &VAR_16->bufs[VAR_22];
 if (VAR_17->buf_count) {
  FUNC_11(&VAR_14->struct_mutex);
  FUNC_2(&VAR_14->buf_alloc);
  return -VAR_6;
 }

 if (VAR_21 < 0 || VAR_21 > 4096) {
  FUNC_11(&VAR_14->struct_mutex);
  FUNC_2(&VAR_14->buf_alloc);
  return -VAR_5;
 }

 VAR_17->buflist = FUNC_7(VAR_21, sizeof(*VAR_17->buflist), VAR_9);
 if (!VAR_17->buflist) {
  FUNC_11(&VAR_14->struct_mutex);
  FUNC_2(&VAR_14->buf_alloc);
  return -VAR_6;
 }

 VAR_17->buf_size = VAR_23;
 VAR_17->page_order = VAR_25;

 VAR_19 = 0;

 while (VAR_17->buf_count < VAR_21) {
  VAR_18 = &VAR_17->buflist[VAR_17->buf_count];
  VAR_18->idx = VAR_16->buf_count + VAR_17->buf_count;
  VAR_18->total = VAR_24;
  VAR_18->order = VAR_22;
  VAR_18->used = 0;

  VAR_18->offset = (VAR_16->byte_count + VAR_19);
  VAR_18->bus_address = VAR_20 + VAR_19;
  VAR_18->address = (void *)(VAR_20 + VAR_19
     + (unsigned long)VAR_14->sg->virtual);
  VAR_18->next = ((void*)0);
  VAR_18->waiting = 0;
  VAR_18->pending = 0;
  VAR_18->file_priv = ((void*)0);

  VAR_18->dev_priv_size = VAR_14->driver->dev_priv_size;
  VAR_18->dev_private = FUNC_9(VAR_18->dev_priv_size, VAR_9);
  if (!VAR_18->dev_private) {

   VAR_17->buf_count = VAR_21;
   FUNC_5(VAR_14, VAR_17);
   FUNC_11(&VAR_14->struct_mutex);
   FUNC_2(&VAR_14->buf_alloc);
   return -VAR_6;
  }

  FUNC_0("buffer %d @ %p\n", VAR_17->buf_count, VAR_18->address);

  VAR_19 += VAR_24;
  VAR_17->buf_count++;
  VAR_27 += VAR_11 << VAR_25;
 }

 FUNC_0("byte_count: %d\n", VAR_27);

 VAR_29 = FUNC_8(VAR_16->buflist,
    (VAR_16->buf_count + VAR_17->buf_count) *
    sizeof(*VAR_16->buflist), VAR_9);
 if (!VAR_29) {

  FUNC_5(VAR_14, VAR_17);
  FUNC_11(&VAR_14->struct_mutex);
  FUNC_2(&VAR_14->buf_alloc);
  return -VAR_6;
 }
 VAR_16->buflist = VAR_29;

 for (VAR_28 = 0; VAR_28 < VAR_17->buf_count; VAR_28++) {
  VAR_16->buflist[VAR_28 + VAR_16->buf_count] = &VAR_17->buflist[VAR_28];
 }

 VAR_16->buf_count += VAR_17->buf_count;
 VAR_16->seg_count += VAR_17->seg_count;
 VAR_16->page_count += VAR_27 >> VAR_10;
 VAR_16->byte_count += VAR_27;

 FUNC_0("dma->buf_count : %d\n", VAR_16->buf_count);
 FUNC_0("entry->buf_count : %d\n", VAR_17->buf_count);

 FUNC_11(&VAR_14->struct_mutex);

 VAR_15->count = VAR_17->buf_count;
 VAR_15->size = VAR_23;

 VAR_16->flags = VAR_12;

 FUNC_2(&VAR_14->buf_alloc);
 return 0;
}
