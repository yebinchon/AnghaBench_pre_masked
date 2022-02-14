
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int flags; int oid; } ;
struct tree {struct object object; } ;
struct traversal_context {int show_data; int (* show_object ) (struct object*,int *,int ) ;int filter; struct rev_info* revs; } ;
struct strbuf {int len; int * buf; } ;
struct rev_info {int repo; int do_not_die_on_missing_tree; scalar_t__ exclude_promisor_objects; scalar_t__ ignore_missing_links; int tree_objects; } ;
typedef enum list_objects_filter_result { ____Placeholder_list_objects_filter_result } list_objects_filter_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct tree*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct object*,int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tree*,int) ;
 int FUNC_6 (struct traversal_context*,struct tree*,struct strbuf*) ;
 int FUNC_7 (struct strbuf*,char) ;
 int FUNC_8 (struct strbuf*,char const*) ;
 int FUNC_9 (struct strbuf*,int) ;
 int FUNC_10 (struct object*,int *,int ) ;
 int FUNC_11 (struct object*,int *,int ) ;
 int FUNC_12 (char*,int *) ;

__attribute__((used)) static void FUNC_13(struct traversal_context *VAR_7,
    struct tree *VAR_8,
    struct strbuf *VAR_9,
    const char *VAR_10)
{
 struct object *VAR_11 = &VAR_8->object;
 struct rev_info *VAR_12 = VAR_7->revs;
 int VAR_13 = VAR_9->len;
 enum list_objects_filter_result VAR_14;
 int VAR_15;

 if (!VAR_12->tree_objects)
  return;
 if (!VAR_11)
  FUNC_0("bad tree object");
 if (VAR_11->flags & (VAR_6 | VAR_5))
  return;

 VAR_15 = FUNC_5(VAR_8, 1);
 if (VAR_15) {
  if (VAR_12->ignore_missing_links)
   return;






  if (VAR_12->exclude_promisor_objects &&
      FUNC_2(&VAR_11->oid))
   return;

  if (!VAR_12->do_not_die_on_missing_tree)
   FUNC_0("bad tree object %s", FUNC_4(&VAR_11->oid));
 }

 FUNC_8(VAR_9, VAR_10);
 VAR_14 = FUNC_3(VAR_7->revs->repo,
            VAR_3, VAR_11,
            VAR_9->buf, &VAR_9->buf[VAR_13],
            VAR_7->filter);
 if (VAR_14 & VAR_1)
  VAR_11->flags |= VAR_5;
 if (VAR_14 & VAR_0)
  VAR_7->show_object(VAR_11, VAR_9->buf, VAR_7->show_data);
 if (VAR_9->len)
  FUNC_7(VAR_9, '/');

 if (VAR_14 & VAR_2)
  FUNC_12("Skipping contents of tree %s...\n", VAR_9->buf);
 else if (!VAR_15)
  FUNC_6(VAR_7, VAR_8, VAR_9);

 VAR_14 = FUNC_3(VAR_7->revs->repo,
            VAR_4, VAR_11,
            VAR_9->buf, &VAR_9->buf[VAR_13],
            VAR_7->filter);
 if (VAR_14 & VAR_1)
  VAR_11->flags |= VAR_5;
 if (VAR_14 & VAR_0)
  VAR_7->show_object(VAR_11, VAR_9->buf, VAR_7->show_data);

 FUNC_9(VAR_9, VAR_13);
 FUNC_1(VAR_8);
}
