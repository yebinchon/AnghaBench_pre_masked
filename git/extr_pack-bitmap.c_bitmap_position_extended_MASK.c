
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_3__ {int * positions; } ;
struct bitmap_index {TYPE_2__* pack; TYPE_1__ ext_index; } ;
typedef scalar_t__ khiter_t ;
typedef int kh_oid_pos_t ;
struct TYPE_4__ {int num_objects; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct object_id const) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct bitmap_index *VAR_0,
        const struct object_id *VAR_1)
{
 kh_oid_pos_t *VAR_2 = VAR_0->ext_index.positions;
 khiter_t VAR_3 = FUNC_1(VAR_2, *VAR_1);

 if (VAR_3 < FUNC_0(VAR_2)) {
  int VAR_4 = FUNC_2(VAR_2, VAR_3);
  return VAR_4 + VAR_0->pack->num_objects;
 }

 return -1;
}
