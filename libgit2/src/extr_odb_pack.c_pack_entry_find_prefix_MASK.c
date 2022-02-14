
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {size_t length; } ;
struct pack_backend {struct git_pack_file* last_found; TYPE_4__ packs; } ;
struct git_pack_file {int dummy; } ;
struct git_pack_entry {int sha1; } ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_10__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_2__ const*,size_t) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (struct git_pack_entry*,struct git_pack_file*,TYPE_2__ const*,size_t) ;
 struct git_pack_file* FUNC_5 (TYPE_4__*,size_t) ;

__attribute__((used)) static int FUNC_6(
 struct git_pack_entry *VAR_1,
 struct pack_backend *VAR_2,
 const git_oid *VAR_3,
 size_t VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 git_oid VAR_7 = {{0}};
 bool VAR_8 = 0;
 struct git_pack_file *VAR_9 = VAR_2->last_found;

 if (VAR_9) {
  VAR_5 = FUNC_4(VAR_1, VAR_9, VAR_3, VAR_4);
  if (VAR_5 == VAR_0)
   return VAR_5;
  if (!VAR_5) {
   FUNC_3(&VAR_7, &VAR_1->sha1);
   VAR_8 = 1;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->packs.length; ++VAR_6) {
  struct git_pack_file *VAR_10;

  VAR_10 = FUNC_5(&VAR_2->packs, VAR_6);
  if (VAR_10 == VAR_9)
   continue;

  VAR_5 = FUNC_4(VAR_1, VAR_10, VAR_3, VAR_4);
  if (VAR_5 == VAR_0)
   return VAR_5;
  if (!VAR_5) {
   if (VAR_8 && FUNC_2(&VAR_1->sha1, &VAR_7))
    return FUNC_0("found multiple pack entries");
   FUNC_3(&VAR_7, &VAR_1->sha1);
   VAR_8 = 1;
   VAR_2->last_found = VAR_10;
  }
 }

 if (!VAR_8)
  return FUNC_1("no matching pack entry for prefix",
   VAR_3, VAR_4);
 else
  return 0;
}
