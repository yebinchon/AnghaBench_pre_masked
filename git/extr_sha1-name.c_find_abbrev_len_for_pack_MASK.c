
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct packed_git {int num_objects; scalar_t__ multi_pack_index; } ;
struct object_id {int dummy; } ;
struct min_abbrev_data {scalar_t__ cur_len; scalar_t__ init_len; struct object_id* oid; } ;


 int FUNC_0 (struct object_id const*,struct packed_git*,int*) ;
 int FUNC_1 (struct object_id*,struct min_abbrev_data*) ;
 scalar_t__ FUNC_2 (struct object_id*,struct packed_git*,int) ;
 scalar_t__ FUNC_3 (struct packed_git*) ;

__attribute__((used)) static void FUNC_4(struct packed_git *VAR_0,
         struct min_abbrev_data *VAR_1)
{
 int VAR_2 = 0;
 uint32_t VAR_3, VAR_4 = 0;
 struct object_id VAR_5;
 const struct object_id *VAR_6;

 if (VAR_0->multi_pack_index)
  return;

 if (FUNC_3(VAR_0) || !VAR_0->num_objects)
  return;

 VAR_3 = VAR_0->num_objects;
 VAR_6 = VAR_1->oid;
 VAR_2 = FUNC_0(VAR_6, VAR_0, &VAR_4);







 VAR_1->init_len = 0;
 if (!VAR_2) {
  if (FUNC_2(&VAR_5, VAR_0, VAR_4))
   FUNC_1(&VAR_5, VAR_1);
 } else if (VAR_4 < VAR_3 - 1) {
  if (FUNC_2(&VAR_5, VAR_0, VAR_4 + 1))
   FUNC_1(&VAR_5, VAR_1);
 }
 if (VAR_4 > 0) {
  if (FUNC_2(&VAR_5, VAR_0, VAR_4 - 1))
   FUNC_1(&VAR_5, VAR_1);
 }
 VAR_1->init_len = VAR_1->cur_len;
}
