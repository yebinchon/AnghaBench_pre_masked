
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int flags; } ;
struct tree {TYPE_1__ object; } ;
struct strbuf {size_t len; int buf; } ;
struct rev_info {int repo; } ;
struct cache_tree_sub {struct cache_tree* cache_tree; int name; } ;
struct cache_tree {scalar_t__ entry_count; int subtree_nr; struct cache_tree_sub** down; int oid; } ;


 int FUNC_0 (struct rev_info*,TYPE_1__*,char*,int,int ) ;
 struct tree* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct strbuf*,char*,char*,int ) ;
 int FUNC_3 (struct strbuf*,size_t) ;

__attribute__((used)) static void FUNC_4(struct cache_tree *VAR_0, struct rev_info *VAR_1,
      struct strbuf *VAR_2, unsigned int VAR_3)
{
 size_t VAR_4 = VAR_2->len;
 int VAR_5;

 if (VAR_0->entry_count >= 0) {
  struct tree *VAR_6 = FUNC_1(VAR_1->repo, &VAR_0->oid);
  VAR_6->object.flags |= VAR_3;
  FUNC_0(VAR_1, &VAR_6->object, "",
          040000, VAR_2->buf);
 }

 for (VAR_5 = 0; VAR_5 < VAR_0->subtree_nr; VAR_5++) {
  struct cache_tree_sub *VAR_7 = VAR_0->down[VAR_5];
  FUNC_2(VAR_2, "%s%s", VAR_4 ? "/" : "", VAR_7->name);
  FUNC_4(VAR_7->cache_tree, VAR_1, VAR_2, VAR_3);
  FUNC_3(VAR_2, VAR_4);
 }

}
