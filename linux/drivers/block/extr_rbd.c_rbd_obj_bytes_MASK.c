
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct rbd_image_header {unsigned int obj_order; } ;



__attribute__((used)) static u32 FUNC_0(struct rbd_image_header *VAR_0)
{
 return 1U << VAR_0->obj_order;
}
