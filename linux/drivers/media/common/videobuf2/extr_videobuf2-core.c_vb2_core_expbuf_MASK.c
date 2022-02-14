
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {scalar_t__ memory; unsigned int type; unsigned int num_buffers; struct vb2_buffer** bufs; TYPE_1__* mem_ops; } ;
struct vb2_plane {int mem_priv; } ;
struct vb2_buffer {unsigned int num_planes; struct vb2_plane* planes; } ;
struct dma_buf {int dummy; } ;
struct TYPE_2__ {int get_dmabuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_buf*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct dma_buf* FUNC_1 (struct vb2_buffer*,int ,int ,unsigned int) ;
 int FUNC_2 (struct dma_buf*,unsigned int) ;
 int FUNC_3 (struct dma_buf*) ;
 int FUNC_4 (int,char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct vb2_queue*) ;

int FUNC_6(struct vb2_queue *VAR_6, int *VAR_7, unsigned int VAR_8,
  unsigned int VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
 struct vb2_buffer *VAR_12 = ((void*)0);
 struct vb2_plane *VAR_13;
 int VAR_14;
 struct dma_buf *VAR_15;

 if (VAR_6->memory != VAR_4) {
  FUNC_4(1, "queue is not currently set up for mmap\n");
  return -VAR_1;
 }

 if (!VAR_6->mem_ops->get_dmabuf) {
  FUNC_4(1, "queue does not support DMA buffer exporting\n");
  return -VAR_1;
 }

 if (VAR_11 & ~(VAR_3 | VAR_2)) {
  FUNC_4(1, "queue does support only O_CLOEXEC and access mode flags\n");
  return -VAR_1;
 }

 if (VAR_8 != VAR_6->type) {
  FUNC_4(1, "invalid buffer type\n");
  return -VAR_1;
 }

 if (VAR_9 >= VAR_6->num_buffers) {
  FUNC_4(1, "buffer index out of range\n");
  return -VAR_1;
 }

 VAR_12 = VAR_6->bufs[VAR_9];

 if (VAR_10 >= VAR_12->num_planes) {
  FUNC_4(1, "buffer plane out of range\n");
  return -VAR_1;
 }

 if (FUNC_5(VAR_6)) {
  FUNC_4(1, "expbuf: file io in progress\n");
  return -VAR_0;
 }

 VAR_13 = &VAR_12->planes[VAR_10];

 VAR_15 = FUNC_1(VAR_12, VAR_5, VAR_13->mem_priv,
    VAR_11 & VAR_2);
 if (FUNC_0(VAR_15)) {
  FUNC_4(1, "failed to export buffer %d, plane %d\n",
   VAR_9, VAR_10);
  return -VAR_1;
 }

 VAR_14 = FUNC_2(VAR_15, VAR_11 & ~VAR_2);
 if (VAR_14 < 0) {
  FUNC_4(3, "buffer %d, plane %d failed to export (%d)\n",
   VAR_9, VAR_10, VAR_14);
  FUNC_3(VAR_15);
  return VAR_14;
 }

 FUNC_4(3, "buffer %d, plane %d exported as %d descriptor\n",
  VAR_9, VAR_10, VAR_14);
 *VAR_7 = VAR_14;

 return 0;
}
