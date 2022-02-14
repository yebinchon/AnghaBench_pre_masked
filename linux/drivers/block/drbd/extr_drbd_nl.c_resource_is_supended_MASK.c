
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_resource {scalar_t__ susp_nod; scalar_t__ susp_fen; scalar_t__ susp; } ;



__attribute__((used)) static bool FUNC_0(struct drbd_resource *VAR_0)
{
 return VAR_0->susp || VAR_0->susp_fen || VAR_0->susp_nod;
}
