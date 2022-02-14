
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_resource {scalar_t__ susp_nod; scalar_t__ susp_fen; scalar_t__ susp; } ;
struct drbd_device {struct drbd_resource* resource; } ;



__attribute__((used)) static inline int FUNC_0(struct drbd_device *VAR_0)
{
 struct drbd_resource *VAR_1 = VAR_0->resource;

 return VAR_1->susp || VAR_1->susp_fen || VAR_1->susp_nod;
}
