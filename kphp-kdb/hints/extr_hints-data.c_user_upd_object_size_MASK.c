
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int currId; } ;
struct TYPE_5__ {int object_size; void* object_ratings; void* object_names; TYPE_1__ object_table; } ;
typedef TYPE_2__ user ;
typedef int rating ;


 void* FUNC_0 (void*,int,int) ;
 int FUNC_1 (void*,int ,int) ;
 int VAR_0 ;

void FUNC_2 (user *VAR_1) {
  if (VAR_1->object_table.currId >= VAR_1->object_size) {
    int VAR_2 = VAR_1->object_size;

    VAR_1->object_size = VAR_1->object_table.currId * 2;





    VAR_1->object_ratings = FUNC_0 (VAR_1->object_ratings, sizeof (rating) * VAR_1->object_size * VAR_0, sizeof (rating) * VAR_2 * VAR_0);
    FUNC_1 (VAR_1->object_ratings + VAR_2 * VAR_0, 0, sizeof (rating) * (VAR_1->object_size - VAR_2) * VAR_0);
  }
}
