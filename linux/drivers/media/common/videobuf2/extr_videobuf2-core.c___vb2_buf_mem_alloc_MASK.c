
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int gfp_flags; int dma_dir; int dma_attrs; int dev; scalar_t__* alloc_devs; } ;
struct vb2_buffer {int num_planes; TYPE_1__* planes; struct vb2_queue* vb2_queue; } ;
struct TYPE_2__ {unsigned long length; int * mem_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 void* FUNC_3 (struct vb2_buffer*,int ,int ,int ,unsigned long,int ,int ) ;
 int FUNC_4 (struct vb2_buffer*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_3)
{
 struct vb2_queue *VAR_4 = VAR_3->vb2_queue;
 void *VAR_5;
 int VAR_6;
 int VAR_7 = -VAR_0;





 for (VAR_6 = 0; VAR_6 < VAR_3->num_planes; ++VAR_6) {

  unsigned long VAR_8 = FUNC_1(VAR_3->planes[VAR_6].length);


  if (VAR_8 < VAR_3->planes[VAR_6].length)
   goto free;

  VAR_5 = FUNC_3(VAR_3, VAR_1,
    VAR_4->alloc_devs[VAR_6] ? : VAR_4->dev,
    VAR_4->dma_attrs, VAR_8, VAR_4->dma_dir, VAR_4->gfp_flags);
  if (FUNC_0(VAR_5)) {
   if (VAR_5)
    VAR_7 = FUNC_2(VAR_5);
   goto free;
  }


  VAR_3->planes[VAR_6].mem_priv = VAR_5;
 }

 return 0;
free:

 for (; VAR_6 > 0; --VAR_6) {
  FUNC_4(VAR_3, VAR_2, VAR_3->planes[VAR_6 - 1].mem_priv);
  VAR_3->planes[VAR_6 - 1].mem_priv = ((void*)0);
 }

 return VAR_7;
}
