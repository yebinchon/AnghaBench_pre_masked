
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dma_dir; int dev; scalar_t__* alloc_devs; } ;
struct TYPE_5__ {scalar_t__ fd; } ;
struct vb2_plane {scalar_t__ length; scalar_t__ data_offset; TYPE_2__ m; scalar_t__ bytesused; } ;
struct vb2_buffer {int num_planes; TYPE_3__* planes; scalar_t__ copied_timestamp; struct vb2_queue* vb2_queue; } ;
struct dma_buf {scalar_t__ size; } ;
typedef int planes ;
struct TYPE_4__ {scalar_t__ fd; } ;
struct TYPE_6__ {scalar_t__ min_length; scalar_t__ length; int dbuf_mapped; scalar_t__ data_offset; TYPE_1__ m; scalar_t__ bytesused; int * mem_priv; struct dma_buf* dbuf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (struct dma_buf*) ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 int FUNC_3 (struct vb2_buffer*) ;
 int FUNC_4 (struct vb2_buffer*,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct vb2_queue*,int ,struct vb2_buffer*,struct vb2_plane*) ;
 int FUNC_6 (struct vb2_buffer*,int ,int *) ;
 void* FUNC_7 (struct vb2_buffer*,int ,int ,struct dma_buf*,scalar_t__,int ) ;
 int FUNC_8 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 int FUNC_9 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 struct dma_buf* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct dma_buf*) ;
 int FUNC_12 (int,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (struct vb2_plane*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct vb2_buffer *VAR_8)
{
 struct vb2_plane VAR_9[VAR_1];
 struct vb2_queue *VAR_10 = VAR_8->vb2_queue;
 void *VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;
 bool VAR_14 = VAR_8->planes[0].mem_priv == ((void*)0);

 FUNC_13(VAR_9, 0, sizeof(VAR_9[0]) * VAR_8->num_planes);

 VAR_13 = FUNC_5(VAR_8->vb2_queue, VAR_6,
    VAR_8, VAR_9);
 if (VAR_13)
  return VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_8->num_planes; ++VAR_12) {
  struct dma_buf *VAR_15 = FUNC_10(VAR_9[VAR_12].m.fd);

  if (FUNC_1(VAR_15)) {
   FUNC_12(1, "invalid dmabuf fd for plane %d\n",
    VAR_12);
   VAR_13 = -VAR_0;
   goto err;
  }


  if (VAR_9[VAR_12].length == 0)
   VAR_9[VAR_12].length = VAR_15->size;

  if (VAR_9[VAR_12].length < VAR_8->planes[VAR_12].min_length) {
   FUNC_12(1, "invalid dmabuf length %u for plane %d, minimum length %u\n",
    VAR_9[VAR_12].length, VAR_12,
    VAR_8->planes[VAR_12].min_length);
   FUNC_11(VAR_15);
   VAR_13 = -VAR_0;
   goto err;
  }


  if (VAR_15 == VAR_8->planes[VAR_12].dbuf &&
   VAR_8->planes[VAR_12].length == VAR_9[VAR_12].length) {
   FUNC_11(VAR_15);
   continue;
  }

  FUNC_12(3, "buffer for plane %d changed\n", VAR_12);

  if (!VAR_14) {
   VAR_14 = 1;
   VAR_8->copied_timestamp = 0;
   FUNC_9(VAR_8, VAR_3, VAR_8);
  }


  FUNC_4(VAR_8, &VAR_8->planes[VAR_12]);
  VAR_8->planes[VAR_12].bytesused = 0;
  VAR_8->planes[VAR_12].length = 0;
  VAR_8->planes[VAR_12].m.fd = 0;
  VAR_8->planes[VAR_12].data_offset = 0;


  VAR_11 = FUNC_7(VAR_8, VAR_2,
    VAR_10->alloc_devs[VAR_12] ? : VAR_10->dev,
    VAR_15, VAR_9[VAR_12].length, VAR_10->dma_dir);
  if (FUNC_0(VAR_11)) {
   FUNC_12(1, "failed to attach dmabuf\n");
   VAR_13 = FUNC_2(VAR_11);
   FUNC_11(VAR_15);
   goto err;
  }

  VAR_8->planes[VAR_12].dbuf = VAR_15;
  VAR_8->planes[VAR_12].mem_priv = VAR_11;
 }






 for (VAR_12 = 0; VAR_12 < VAR_8->num_planes; ++VAR_12) {
  if (VAR_8->planes[VAR_12].dbuf_mapped)
   continue;

  VAR_13 = FUNC_6(VAR_8, VAR_7, VAR_8->planes[VAR_12].mem_priv);
  if (VAR_13) {
   FUNC_12(1, "failed to map dmabuf for plane %d\n",
    VAR_12);
   goto err;
  }
  VAR_8->planes[VAR_12].dbuf_mapped = 1;
 }





 for (VAR_12 = 0; VAR_12 < VAR_8->num_planes; ++VAR_12) {
  VAR_8->planes[VAR_12].bytesused = VAR_9[VAR_12].bytesused;
  VAR_8->planes[VAR_12].length = VAR_9[VAR_12].length;
  VAR_8->planes[VAR_12].m.fd = VAR_9[VAR_12].m.fd;
  VAR_8->planes[VAR_12].data_offset = VAR_9[VAR_12].data_offset;
 }

 if (VAR_14) {




  VAR_13 = FUNC_8(VAR_8, VAR_4, VAR_8);
  if (VAR_13) {
   FUNC_12(1, "buffer initialization failed\n");
   goto err;
  }
 }

 VAR_13 = FUNC_8(VAR_8, VAR_5, VAR_8);
 if (VAR_13) {
  FUNC_12(1, "buffer preparation failed\n");
  FUNC_9(VAR_8, VAR_3, VAR_8);
  goto err;
 }

 return 0;
err:

 FUNC_3(VAR_8);

 return VAR_13;
}
