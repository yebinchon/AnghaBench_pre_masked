
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unpack_tree_opts ;
struct unpack_trees_options {int head_idx; int merge; int update; int fn; int dst_index; int src_index; } ;
struct tree_desc {scalar_t__ buffer; } ;
struct tree {int dummy; } ;
struct strbuf {scalar_t__ buf; } ;
struct repository {int index; } ;
struct object_id {int dummy; } ;
struct replay_opts {int have_squash_onto; struct object_id squash_onto; } ;
struct lock_file {int dummy; } ;
struct TYPE_2__ {int empty_tree; } ;


 int VAR_0 ;
 struct lock_file VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct replay_opts*) ;
 scalar_t__ FUNC_2 (char*,int ,int ,int *,struct object_id*,int *,int *) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct repository*,struct tree_desc*,struct object_id*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (scalar_t__,struct object_id*) ;
 scalar_t__ FUNC_8 (char const) ;
 int FUNC_9 (struct unpack_trees_options*,int ,int) ;
 char* FUNC_10 (struct object_id*) ;
 int FUNC_11 (struct object_id*,struct object_id*) ;
 int VAR_5 ;
 struct tree* FUNC_12 (struct object_id*) ;
 int FUNC_13 (struct repository*,int ,struct tree*) ;
 int FUNC_14 () ;
 int FUNC_15 (struct replay_opts*,char*,char*,int,char const*) ;
 scalar_t__ FUNC_16 (struct repository*,struct lock_file*,int ) ;
 scalar_t__ FUNC_17 (struct repository*) ;
 int FUNC_18 (struct lock_file*) ;
 int FUNC_19 (struct unpack_trees_options*,char*) ;
 int FUNC_20 (struct strbuf*,char*,int,char const*) ;
 int FUNC_21 (struct strbuf*) ;
 scalar_t__ FUNC_22 (char const*) ;
 int FUNC_23 (char*,char const*,int) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_24 (int,struct tree_desc*,struct unpack_trees_options*) ;
 int FUNC_25 (int ,char*,struct object_id*,int *,int ,int ) ;
 scalar_t__ FUNC_26 (int ,struct lock_file*,int ) ;
 scalar_t__ FUNC_27 (char const*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_28(struct repository *VAR_7,
      const char *VAR_8, int VAR_9,
      struct replay_opts *VAR_10)
{
 struct strbuf VAR_11 = VAR_3;
 struct object_id VAR_12;
 struct lock_file VAR_13 = VAR_1;
 struct tree_desc VAR_14;
 struct tree *VAR_15;
 struct unpack_trees_options VAR_16;
 int VAR_17 = 0;

 if (FUNC_16(VAR_7, &VAR_13, VAR_2) < 0)
  return -1;

 if (VAR_9 == 10 && !FUNC_23("[new root]", VAR_8, VAR_9)) {
  if (!VAR_10->have_squash_onto) {
   const char *VAR_18;
   if (FUNC_2("", 0, VAR_6->empty_tree,
     ((void*)0), &VAR_10->squash_onto,
     ((void*)0), ((void*)0)))
    return FUNC_3(FUNC_0("writing fake root commit"));
   VAR_10->have_squash_onto = 1;
   VAR_18 = FUNC_10(&VAR_10->squash_onto);
   if (FUNC_27(VAR_18, FUNC_22(VAR_18),
       FUNC_14(), 0))
    return FUNC_3(FUNC_0("writing squash-onto"));
  }
  FUNC_11(&VAR_12, &VAR_10->squash_onto);
 } else {
  int VAR_19;


  for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++)
   if (FUNC_8(VAR_8[VAR_19]))
    break;
  VAR_9 = VAR_19;

  FUNC_20(&VAR_11, "refs/rewritten/%.*s", VAR_9, VAR_8);
  if (FUNC_7(VAR_11.buf, &VAR_12) &&
      FUNC_7(VAR_11.buf + FUNC_22("refs/rewritten/"), &VAR_12)) {
   FUNC_3(FUNC_0("could not read '%s'"), VAR_11.buf);
   FUNC_18(&VAR_13);
   FUNC_21(&VAR_11);
   return -1;
  }
 }

 FUNC_9(&VAR_16, 0, sizeof(VAR_16));
 FUNC_19(&VAR_16, "reset");
 VAR_16.head_idx = 1;
 VAR_16.src_index = VAR_7->index;
 VAR_16.dst_index = VAR_7->index;
 VAR_16.fn = VAR_5;
 VAR_16.merge = 1;
 VAR_16.update = 1;

 if (FUNC_17(VAR_7)) {
  FUNC_18(&VAR_13);
  FUNC_21(&VAR_11);
  return FUNC_4(FUNC_0(FUNC_1(VAR_10)));
 }

 if (!FUNC_5(VAR_7, &VAR_14, &VAR_12)) {
  FUNC_3(FUNC_0("failed to find tree of %s"), FUNC_10(&VAR_12));
  FUNC_18(&VAR_13);
  FUNC_6((void *)VAR_14.buffer);
  FUNC_21(&VAR_11);
  return -1;
 }

 if (FUNC_24(1, &VAR_14, &VAR_16)) {
  FUNC_18(&VAR_13);
  FUNC_6((void *)VAR_14.buffer);
  FUNC_21(&VAR_11);
  return -1;
 }

 VAR_15 = FUNC_12(&VAR_12);
 FUNC_13(VAR_7, VAR_7->index, VAR_15);

 if (FUNC_26(VAR_7->index, &VAR_13, VAR_0) < 0)
  VAR_17 = FUNC_3(FUNC_0("could not write index"));
 FUNC_6((void *)VAR_14.buffer);

 if (!VAR_17)
  VAR_17 = FUNC_25(FUNC_15(VAR_10, "reset", "'%.*s'",
      VAR_9, VAR_8), "HEAD", &VAR_12,
     ((void*)0), 0, VAR_4);

 FUNC_21(&VAR_11);
 return VAR_17;
}
