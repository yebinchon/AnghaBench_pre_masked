
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dma_dir; int dev; scalar_t__* alloc_devs; } ;
struct TYPE_4__ {scalar_t__ userptr; } ;
struct vb2_plane {scalar_t__ data_offset; TYPE_1__ m; int length; scalar_t__ bytesused; } ;
struct vb2_buffer {int num_planes; TYPE_3__* planes; scalar_t__ copied_timestamp; struct vb2_queue* vb2_queue; } ;
typedef int planes ;
struct TYPE_5__ {scalar_t__ userptr; } ;
struct TYPE_6__ {int length; TYPE_2__ m; int * mem_priv; scalar_t__ data_offset; scalar_t__ bytesused; int min_length; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct vb2_queue*,int ,struct vb2_buffer*,struct vb2_plane*) ;
 void* FUNC_3 (struct vb2_buffer*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_4 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 int FUNC_5 (struct vb2_buffer*,int ,int *) ;
 int FUNC_6 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 int FUNC_7 (int,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct vb2_plane*,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(struct vb2_buffer *VAR_8)
{
 struct vb2_plane VAR_9[VAR_1];
 struct vb2_queue *VAR_10 = VAR_8->vb2_queue;
 void *VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;
 bool VAR_14 = VAR_8->planes[0].mem_priv == ((void*)0);

 FUNC_8(VAR_9, 0, sizeof(VAR_9[0]) * VAR_8->num_planes);

 VAR_13 = FUNC_2(VAR_8->vb2_queue, VAR_5,
    VAR_8, VAR_9);
 if (VAR_13)
  return VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_8->num_planes; ++VAR_12) {

  if (VAR_8->planes[VAR_12].m.userptr &&
   VAR_8->planes[VAR_12].m.userptr == VAR_9[VAR_12].m.userptr
   && VAR_8->planes[VAR_12].length == VAR_9[VAR_12].length)
   continue;

  FUNC_7(3, "userspace address for plane %d changed, reacquiring memory\n",
   VAR_12);


  if (VAR_9[VAR_12].length < VAR_8->planes[VAR_12].min_length) {
   FUNC_7(1, "provided buffer size %u is less than setup size %u for plane %d\n",
      VAR_9[VAR_12].length,
      VAR_8->planes[VAR_12].min_length,
      VAR_12);
   VAR_13 = -VAR_0;
   goto err;
  }


  if (VAR_8->planes[VAR_12].mem_priv) {
   if (!VAR_14) {
    VAR_14 = 1;
    VAR_8->copied_timestamp = 0;
    FUNC_6(VAR_8, VAR_2, VAR_8);
   }
   FUNC_5(VAR_8, VAR_7, VAR_8->planes[VAR_12].mem_priv);
  }

  VAR_8->planes[VAR_12].mem_priv = ((void*)0);
  VAR_8->planes[VAR_12].bytesused = 0;
  VAR_8->planes[VAR_12].length = 0;
  VAR_8->planes[VAR_12].m.userptr = 0;
  VAR_8->planes[VAR_12].data_offset = 0;


  VAR_11 = FUNC_3(VAR_8, VAR_6,
    VAR_10->alloc_devs[VAR_12] ? : VAR_10->dev,
    VAR_9[VAR_12].m.userptr,
    VAR_9[VAR_12].length, VAR_10->dma_dir);
  if (FUNC_0(VAR_11)) {
   FUNC_7(1, "failed acquiring userspace memory for plane %d\n",
    VAR_12);
   VAR_13 = FUNC_1(VAR_11);
   goto err;
  }
  VAR_8->planes[VAR_12].mem_priv = VAR_11;
 }





 for (VAR_12 = 0; VAR_12 < VAR_8->num_planes; ++VAR_12) {
  VAR_8->planes[VAR_12].bytesused = VAR_9[VAR_12].bytesused;
  VAR_8->planes[VAR_12].length = VAR_9[VAR_12].length;
  VAR_8->planes[VAR_12].m.userptr = VAR_9[VAR_12].m.userptr;
  VAR_8->planes[VAR_12].data_offset = VAR_9[VAR_12].data_offset;
 }

 if (VAR_14) {





  VAR_13 = FUNC_4(VAR_8, VAR_3, VAR_8);
  if (VAR_13) {
   FUNC_7(1, "buffer initialization failed\n");
   goto err;
  }
 }

 VAR_13 = FUNC_4(VAR_8, VAR_4, VAR_8);
 if (VAR_13) {
  FUNC_7(1, "buffer preparation failed\n");
  FUNC_6(VAR_8, VAR_2, VAR_8);
  goto err;
 }

 return 0;
err:

 for (VAR_12 = 0; VAR_12 < VAR_8->num_planes; ++VAR_12) {
  if (VAR_8->planes[VAR_12].mem_priv)
   FUNC_5(VAR_8, VAR_7,
    VAR_8->planes[VAR_12].mem_priv);
  VAR_8->planes[VAR_12].mem_priv = ((void*)0);
  VAR_8->planes[VAR_12].m.userptr = 0;
  VAR_8->planes[VAR_12].length = 0;
 }

 return VAR_13;
}
