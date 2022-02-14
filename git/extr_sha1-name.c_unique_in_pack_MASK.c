
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct packed_git {scalar_t__ num_objects; scalar_t__ multi_pack_index; } ;
struct object_id {int hash; } ;
struct TYPE_2__ {int hash; } ;
struct disambiguate_state {TYPE_1__ bin_pfx; int len; int ambiguous; } ;


 int FUNC_0 (TYPE_1__*,struct packed_git*,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct object_id* FUNC_2 (struct object_id*,struct packed_git*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct packed_git*) ;
 int FUNC_4 (struct disambiguate_state*,struct object_id const*) ;

__attribute__((used)) static void FUNC_5(struct packed_git *VAR_0,
      struct disambiguate_state *VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4 = 0;
 const struct object_id *VAR_5 = ((void*)0);

 if (VAR_0->multi_pack_index)
  return;

 if (FUNC_3(VAR_0) || !VAR_0->num_objects)
  return;

 VAR_2 = VAR_0->num_objects;
 FUNC_0(&VAR_1->bin_pfx, VAR_0, &VAR_4);






 for (VAR_3 = VAR_4; VAR_3 < VAR_2 && !VAR_1->ambiguous; VAR_3++) {
  struct object_id VAR_6;
  VAR_5 = FUNC_2(&VAR_6, VAR_0, VAR_3);
  if (!FUNC_1(VAR_1->len, VAR_1->bin_pfx.hash, VAR_5->hash))
   break;
  FUNC_4(VAR_1, VAR_5);
 }
}
