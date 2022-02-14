
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct repository {int dummy; } ;
struct object_id {int hash; } ;
struct index_state {struct cache_entry** cache; } ;
struct cache_tree_sub {TYPE_2__* cache_tree; } ;
struct cache_tree {int subtree_nr; int entry_count; struct object_id oid; TYPE_1__** down; } ;
struct cache_entry {int ce_flags; char* name; unsigned int ce_mode; struct object_id oid; } ;
struct TYPE_6__ {int rawsz; } ;
struct TYPE_5__ {scalar_t__ entry_count; struct object_id oid; } ;
struct TYPE_4__ {struct cache_tree* cache_tree; int name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct cache_entry*) ;
 struct cache_tree_sub* FUNC_2 (struct cache_tree*,char*,int,int ) ;
 int FUNC_3 (int ,int,int ,struct object_id*) ;
 int FUNC_4 (struct index_state*,int ,int) ;
 struct object_id* FUNC_5 (struct repository*,struct object_id*) ;
 int FUNC_6 (struct object_id*) ;
 int FUNC_7 (struct object_id*,struct object_id*) ;
 int FUNC_8 (struct strbuf*,int ,int ) ;
 int FUNC_9 (struct strbuf*,char*,unsigned int,...) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct strbuf*,int) ;
 char* FUNC_12 (char const*,char) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_13(struct repository *VAR_7,
         struct index_state *VAR_8,
         struct cache_tree *VAR_9,
         struct strbuf *VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = VAR_10->len;
 struct strbuf VAR_14 = VAR_3;
 struct object_id VAR_15;

 for (VAR_11 = 0; VAR_11 < VAR_9->subtree_nr; VAR_11++) {
  FUNC_9(VAR_10, "%s/", VAR_9->down[VAR_11]->name);
  FUNC_13(VAR_7, VAR_8, VAR_9->down[VAR_11]->cache_tree, VAR_10);
  FUNC_11(VAR_10, VAR_13);
 }

 if (VAR_9->entry_count < 0 ||

     FUNC_5(VAR_7, &VAR_9->oid) != &VAR_9->oid)
  return;

 if (VAR_10->len) {
  VAR_12 = FUNC_4(VAR_8, VAR_10->buf, VAR_10->len);
  VAR_12 = -VAR_12 - 1;
 } else {
  VAR_12 = 0;
 }

 VAR_11 = 0;
 while (VAR_11 < VAR_9->entry_count) {
  struct cache_entry *VAR_16 = VAR_8->cache[VAR_12 + VAR_11];
  const char *VAR_17;
  struct cache_tree_sub *VAR_18 = ((void*)0);
  const struct object_id *VAR_19;
  const char *VAR_20;
  unsigned VAR_21;
  int VAR_22;

  if (VAR_16->ce_flags & (VAR_2 | VAR_0 | VAR_1))
   FUNC_0("%s with flags 0x%x should not be in cache-tree",
       VAR_16->name, VAR_16->ce_flags);
  VAR_20 = VAR_16->name + VAR_10->len;
  VAR_17 = FUNC_12(VAR_20, '/');
  if (VAR_17) {
   VAR_22 = VAR_17 - VAR_20;
   VAR_18 = FUNC_2(VAR_9, VAR_16->name + VAR_10->len, VAR_22, 0);
   if (!VAR_18 || VAR_18->cache_tree->entry_count < 0)
    FUNC_0("bad subtree '%.*s'", VAR_22, VAR_20);
   VAR_19 = &VAR_18->cache_tree->oid;
   VAR_21 = VAR_4;
   VAR_11 += VAR_18->cache_tree->entry_count;
  } else {
   VAR_19 = &VAR_16->oid;
   VAR_21 = VAR_16->ce_mode;
   VAR_22 = FUNC_1(VAR_16) - VAR_10->len;
   VAR_11++;
  }
  FUNC_9(&VAR_14, "%o %.*s%c", VAR_21, VAR_22, VAR_20, '\0');
  FUNC_8(&VAR_14, VAR_19->hash, VAR_5->rawsz);
 }
 FUNC_3(VAR_14.buf, VAR_14.len, VAR_6, &VAR_15);
 if (!FUNC_7(&VAR_15, &VAR_9->oid))
  FUNC_0("cache-tree for path %.*s does not match. "
      "Expected %s got %s", VAR_13, VAR_10->buf,
      FUNC_6(&VAR_15), FUNC_6(&VAR_9->oid));
 FUNC_11(VAR_10, VAR_13);
 FUNC_10(&VAR_14);
}
