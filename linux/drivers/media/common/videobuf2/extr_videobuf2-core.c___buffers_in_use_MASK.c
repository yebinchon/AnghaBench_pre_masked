
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {unsigned int num_buffers; int * bufs; } ;


 scalar_t__ FUNC_0 (struct vb2_queue*,int ) ;

__attribute__((used)) static bool FUNC_1(struct vb2_queue *VAR_0)
{
 unsigned int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->num_buffers; ++VAR_1) {
  if (FUNC_0(VAR_0, VAR_0->bufs[VAR_1]))
   return 1;
 }
 return 0;
}
