
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {unsigned int num_planes; int * planes; } ;


 int FUNC_0 (struct vb2_buffer*,int *) ;

__attribute__((used)) static void FUNC_1(struct vb2_buffer *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_planes; ++VAR_1)
  FUNC_0(VAR_0, &VAR_0->planes[VAR_1]);
}
