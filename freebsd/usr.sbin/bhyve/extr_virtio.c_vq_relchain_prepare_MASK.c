
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uint16_t ;
struct vring_used {struct virtio_used* vu_ring; } ;
struct vqueue_info {size_t vq_qsize; int vq_next_used; struct vring_used* vq_used; } ;
struct virtio_used {size_t vu_idx; int vu_tlen; } ;



void
FUNC_0(struct vqueue_info *VAR_0, uint16_t VAR_1, uint32_t VAR_2)
{
 volatile struct vring_used *VAR_3;
 volatile struct virtio_used *VAR_4;
 uint16_t VAR_5;
 VAR_5 = VAR_0->vq_qsize - 1;
 VAR_3 = VAR_0->vq_used;

 VAR_4 = &VAR_3->vu_ring[VAR_0->vq_next_used++ & VAR_5];
 VAR_4->vu_idx = VAR_1;
 VAR_4->vu_tlen = VAR_2;
}
