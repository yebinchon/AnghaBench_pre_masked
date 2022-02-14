
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int topts ;
struct unpack_trees_options {int head_idx; int update; int merge; int quiet; TYPE_1__* dir; int fn; int verbose_update; int initial_checkout; int * dst_index; int * src_index; } ;
struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct strbuf {int * buf; } ;
struct merge_options {char* branch2; struct strbuf obuf; int * branch1; int * ancestor; scalar_t__ verbosity; } ;
struct lock_file {int dummy; } ;
struct checkout_opts {int diff_options; int quiet; scalar_t__ discard_changes; scalar_t__ merge; scalar_t__ overwrite_ignore; int show_progress; scalar_t__ orphan_from_empty_tree; scalar_t__ new_orphan_branch; } ;
struct branch_info {TYPE_5__* commit; int * name; } ;
struct TYPE_8__ {int oid; } ;
struct TYPE_9__ {TYPE_3__ object; } ;
struct TYPE_7__ {int * empty_tree; } ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lock_file VAR_4 ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct unpack_trees_options*) ;
 int FUNC_7 (int ,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 struct tree* FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (struct lock_file*,int ) ;
 int FUNC_12 (struct merge_options*,int ) ;
 int FUNC_13 (struct tree_desc*,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (struct unpack_trees_options*,int ,int) ;
 int FUNC_16 (struct merge_options*,struct tree*,struct tree*,struct tree*) ;
 int FUNC_17 (struct tree*) ;
 struct tree* FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ,struct tree*,struct strbuf*) ;
 int FUNC_22 (struct tree*,struct checkout_opts const*,int,int*) ;
 int FUNC_23 () ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (struct unpack_trees_options*,char*) ;
 int FUNC_26 (TYPE_3__*,int *) ;
 int FUNC_27 (struct strbuf*,int *,int ) ;
 int FUNC_28 (struct strbuf*) ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_29 () ;
 int FUNC_30 (int,struct tree_desc*,struct unpack_trees_options*) ;
 struct tree* FUNC_31 (int ) ;
 scalar_t__ FUNC_32 (int *,struct lock_file*,int ) ;
 TYPE_1__* FUNC_33 (int,int) ;

__attribute__((used)) static int FUNC_34(const struct checkout_opts *VAR_14,
         struct branch_info *VAR_15,
         struct branch_info *VAR_16,
         int *VAR_17)
{
 int VAR_18;
 struct lock_file VAR_19 = VAR_4;
 struct tree *VAR_20;

 FUNC_11(&VAR_19, VAR_3);
 if (FUNC_19(((void*)0)) < 0)
  return FUNC_8(FUNC_1("index file corrupt"));

 FUNC_23();
 if (VAR_14->new_orphan_branch && VAR_14->orphan_from_empty_tree) {
  if (VAR_16->commit)
   FUNC_0("'switch --orphan' should never accept a commit as starting point");
  VAR_20 = FUNC_18(VAR_10->empty_tree);
 } else
  VAR_20 = FUNC_10(VAR_16->commit);
 if (VAR_14->discard_changes) {
  VAR_18 = FUNC_22(VAR_20, VAR_14, 1, VAR_17);
  if (VAR_18)
   return VAR_18;
 } else {
  struct tree_desc VAR_21[2];
  struct tree *VAR_22;
  struct unpack_trees_options VAR_23;

  FUNC_15(&VAR_23, 0, sizeof(VAR_23));
  VAR_23.head_idx = -1;
  VAR_23.src_index = &VAR_11;
  VAR_23.dst_index = &VAR_11;

  FUNC_25(&VAR_23, "checkout");

  FUNC_20(VAR_5);

  if (FUNC_29()) {
   FUNC_8(FUNC_1("you need to resolve your current index first"));
   return 1;
  }


  VAR_23.initial_checkout = FUNC_14();
  VAR_23.update = 1;
  VAR_23.merge = 1;
  VAR_23.quiet = VAR_14->merge && VAR_15->commit;
  VAR_23.verbose_update = VAR_14->show_progress;
  VAR_23.fn = VAR_13;
  if (VAR_14->overwrite_ignore) {
   VAR_23.dir = FUNC_33(1, sizeof(*VAR_23.dir));
   VAR_23.dir->flags |= VAR_2;
   FUNC_24(VAR_23.dir);
  }
  VAR_22 = FUNC_18(VAR_15->commit ?
        &VAR_15->commit->object.oid :
        VAR_10->empty_tree);
  FUNC_13(&VAR_21[0], VAR_22->buffer, VAR_22->size);
  FUNC_17(VAR_20);
  VAR_22 = VAR_20;
  FUNC_13(&VAR_21[1], VAR_22->buffer, VAR_22->size);

  VAR_18 = FUNC_30(2, VAR_21, &VAR_23);
  FUNC_6(&VAR_23);
  if (VAR_18 == -1) {





   struct tree *VAR_24;
   struct tree *VAR_25;
   struct merge_options VAR_26;
   struct strbuf VAR_27 = VAR_6;
   struct strbuf VAR_28 = VAR_6;

   if (!VAR_14->merge)
    return 1;





   if (!VAR_15->commit)
    return 1;
   VAR_25 = FUNC_10(VAR_15->commit);

   if (FUNC_21(VAR_12, VAR_25, &VAR_27))
    FUNC_7(FUNC_1("cannot continue with staged changes in "
          "the following files:\n%s"), VAR_27.buf);
   FUNC_28(&VAR_27);
   FUNC_2(((void*)0), ((void*)0), 0);







   FUNC_12(&VAR_26, VAR_12);
   VAR_26.verbosity = 0;
   VAR_24 = FUNC_31(VAR_12);

   VAR_18 = FUNC_22(VAR_20,
      VAR_14, 1,
      VAR_17);
   if (VAR_18)
    return VAR_18;
   VAR_26.ancestor = VAR_15->name;
   if (VAR_15->name == ((void*)0)) {
    FUNC_27(&VAR_28,
        &VAR_15->commit->object.oid,
        VAR_1);
    VAR_26.ancestor = VAR_28.buf;
   }
   VAR_26.branch1 = VAR_16->name;
   VAR_26.branch2 = "local";
   VAR_18 = FUNC_16(&VAR_26,
       VAR_20,
       VAR_24,
       VAR_25);
   if (VAR_18 < 0)
    FUNC_9(128);
   VAR_18 = FUNC_22(VAR_20,
      VAR_14, 0,
      VAR_17);
   FUNC_28(&VAR_26.obuf);
   FUNC_28(&VAR_28);
   if (VAR_18)
    return VAR_18;
  }
 }

 if (!VAR_9)
  VAR_9 = FUNC_3();

 if (!FUNC_4(VAR_9))
  FUNC_5(&VAR_11, VAR_8 | VAR_7);

 if (FUNC_32(&VAR_11, &VAR_19, VAR_0))
  FUNC_7(FUNC_1("unable to write new index file"));

 if (!VAR_14->discard_changes && !VAR_14->quiet && VAR_16->commit)
  FUNC_26(&VAR_16->commit->object, &VAR_14->diff_options);

 return 0;
}
