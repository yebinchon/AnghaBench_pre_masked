
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int manufacturer; scalar_t__ product; } ;
struct expansion_card {TYPE_1__ cid; } ;
struct ecard_id {int manufacturer; scalar_t__ product; } ;



__attribute__((used)) static const struct ecard_id *
FUNC_0(const struct ecard_id *VAR_0, struct expansion_card *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].manufacturer != 65535; VAR_2++)
  if (VAR_1->cid.manufacturer == VAR_0[VAR_2].manufacturer &&
      VAR_1->cid.product == VAR_0[VAR_2].product)
   return VAR_0 + VAR_2;

 return ((void*)0);
}
