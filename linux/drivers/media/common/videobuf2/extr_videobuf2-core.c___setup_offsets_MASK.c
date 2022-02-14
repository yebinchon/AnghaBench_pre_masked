
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {struct vb2_buffer** bufs; } ;
struct TYPE_2__ {unsigned long offset; } ;
struct vb2_plane {unsigned long length; TYPE_1__ m; } ;
struct vb2_buffer {int index; int num_planes; struct vb2_plane* planes; struct vb2_queue* vb2_queue; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (int,char*,int,unsigned int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct vb2_buffer *VAR_0)
{
 struct vb2_queue *VAR_1 = VAR_0->vb2_queue;
 unsigned int VAR_2;
 unsigned long VAR_3 = 0;

 if (VAR_0->index) {
  struct vb2_buffer *VAR_4 = VAR_1->bufs[VAR_0->index - 1];
  struct vb2_plane *VAR_5 = &VAR_4->planes[VAR_4->num_planes - 1];

  VAR_3 = FUNC_0(VAR_5->m.offset + VAR_5->length);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->num_planes; ++VAR_2) {
  VAR_0->planes[VAR_2].m.offset = VAR_3;

  FUNC_1(3, "buffer %d, plane %d offset 0x%08lx\n",
    VAR_0->index, VAR_2, VAR_3);

  VAR_3 += VAR_0->planes[VAR_2].length;
  VAR_3 = FUNC_0(VAR_3);
 }
}
