
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rmap_iterator {int pos; TYPE_1__* desc; } ;
struct TYPE_2__ {int ** sptes; struct TYPE_2__* more; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u64 *FUNC_2(struct rmap_iterator *VAR_1)
{
 u64 *VAR_2;

 if (VAR_1->desc) {
  if (VAR_1->pos < VAR_0 - 1) {
   ++VAR_1->pos;
   VAR_2 = VAR_1->desc->sptes[VAR_1->pos];
   if (VAR_2)
    goto out;
  }

  VAR_1->desc = VAR_1->desc->more;

  if (VAR_1->desc) {
   VAR_1->pos = 0;

   VAR_2 = VAR_1->desc->sptes[VAR_1->pos];
   goto out;
  }
 }

 return ((void*)0);
out:
 FUNC_0(!FUNC_1(*VAR_2));
 return VAR_2;
}
