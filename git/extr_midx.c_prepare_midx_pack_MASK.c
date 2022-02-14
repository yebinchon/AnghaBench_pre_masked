
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct strbuf {int len; int buf; } ;
struct repository {TYPE_1__* objects; } ;
struct packed_git {int multi_pack_index; int mru; } ;
struct multi_pack_index {size_t num_packs; struct packed_git** packs; int local; int * pack_names; int object_dir; } ;
struct TYPE_2__ {int packed_git_mru; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 struct packed_git* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,size_t,size_t) ;
 int FUNC_3 (struct repository*,struct packed_git*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct strbuf*,char*,int ,int ) ;
 int FUNC_6 (struct strbuf*) ;

int FUNC_7(struct repository *VAR_1, struct multi_pack_index *VAR_2, uint32_t VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 struct packed_git *VAR_5;

 if (VAR_3 >= VAR_2->num_packs)
  FUNC_2(FUNC_0("bad pack-int-id: %u (%u total packs)"),
      VAR_3, VAR_2->num_packs);

 if (VAR_2->packs[VAR_3])
  return 0;

 FUNC_5(&VAR_4, "%s/pack/%s", VAR_2->object_dir,
      VAR_2->pack_names[VAR_3]);

 VAR_5 = FUNC_1(VAR_4.buf, VAR_4.len, VAR_2->local);
 FUNC_6(&VAR_4);

 if (!VAR_5)
  return 1;

 VAR_5->multi_pack_index = 1;
 VAR_2->packs[VAR_3] = VAR_5;
 FUNC_3(VAR_1, VAR_5);
 FUNC_4(&VAR_5->mru, &VAR_1->objects->packed_git_mru);

 return 0;
}
