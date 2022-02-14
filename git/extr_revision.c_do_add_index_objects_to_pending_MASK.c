
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct rev_info {int repo; } ;
struct index_state {int cache_nr; scalar_t__ cache_tree; struct cache_entry** cache; } ;
struct cache_entry {int name; int ce_mode; int oid; } ;
struct TYPE_2__ {unsigned int flags; } ;
struct blob {TYPE_1__ object; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,struct rev_info*,struct strbuf*,unsigned int) ;
 int FUNC_2 (struct rev_info*,TYPE_1__*,char*,int ,int ) ;
 int FUNC_3 (char*) ;
 struct blob* FUNC_4 (int ,int *) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct rev_info *VAR_1,
         struct index_state *VAR_2,
         unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->cache_nr; VAR_4++) {
  struct cache_entry *VAR_5 = VAR_2->cache[VAR_4];
  struct blob *VAR_6;

  if (FUNC_0(VAR_5->ce_mode))
   continue;

  VAR_6 = FUNC_4(VAR_1->repo, &VAR_5->oid);
  if (!VAR_6)
   FUNC_3("unable to add index blob to traversal");
  VAR_6->object.flags |= VAR_3;
  FUNC_2(VAR_1, &VAR_6->object, "",
          VAR_5->ce_mode, VAR_5->name);
 }

 if (VAR_2->cache_tree) {
  struct strbuf VAR_7 = VAR_0;
  FUNC_1(VAR_2->cache_tree, VAR_1, &VAR_7, VAR_3);
  FUNC_5(&VAR_7);
 }
}
