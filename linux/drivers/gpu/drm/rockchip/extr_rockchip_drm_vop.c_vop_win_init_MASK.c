
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_win_data {int dummy; } ;
struct vop_win {int * yuv2yuv_data; struct vop* vop; struct vop_win_data const* data; } ;
struct vop_data {unsigned int win_size; int * win_yuv2yuv; struct vop_win_data* win; } ;
struct vop {struct vop_win* win; struct vop_data* data; } ;



__attribute__((used)) static void FUNC_0(struct vop *VAR_0)
{
 const struct vop_data *VAR_1 = VAR_0->data;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->win_size; VAR_2++) {
  struct vop_win *VAR_3 = &VAR_0->win[VAR_2];
  const struct vop_win_data *VAR_4 = &VAR_1->win[VAR_2];

  VAR_3->data = VAR_4;
  VAR_3->vop = VAR_0;

  if (VAR_1->win_yuv2yuv)
   VAR_3->yuv2yuv_data = &VAR_1->win_yuv2yuv[VAR_2];
 }
}
