
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct vqueue_info {int vq_last_avail; } ;



void
FUNC_0(struct vqueue_info *VAR_0, uint16_t VAR_1)
{

 VAR_0->vq_last_avail -= VAR_1;
}
