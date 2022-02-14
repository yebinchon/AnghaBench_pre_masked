
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uma_slab_t ;
typedef size_t u_int ;
struct uma_hash {scalar_t__ uh_hashsize; int * uh_slab_hash; } ;
struct TYPE_4__ {int us_data; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,int ) ;
 size_t FUNC_4 (struct uma_hash*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(struct uma_hash *VAR_1, struct uma_hash *VAR_2)
{
 uma_slab_t VAR_3;
 u_int VAR_4;
 u_int VAR_5;

 if (!VAR_2->uh_slab_hash)
  return (0);

 if (VAR_1->uh_hashsize >= VAR_2->uh_hashsize)
  return (0);






 for (VAR_5 = 0; VAR_5 < VAR_1->uh_hashsize; VAR_5++)
  while (!FUNC_0(&VAR_1->uh_slab_hash[VAR_5])) {
   VAR_3 = FUNC_1(&VAR_1->uh_slab_hash[VAR_5]);
   FUNC_3(&VAR_1->uh_slab_hash[VAR_5], VAR_0);
   VAR_4 = FUNC_4(VAR_2, VAR_3->us_data);
   FUNC_2(&VAR_2->uh_slab_hash[VAR_4],
       VAR_3, VAR_0);
  }

 return (1);
}
