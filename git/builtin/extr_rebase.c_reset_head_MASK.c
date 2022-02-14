
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int unpack_tree_opts ;
struct unpack_trees_options {int head_idx; int update; int merge; int reset; int fn; int dst_index; int src_index; } ;
struct tree_desc {scalar_t__ buffer; int * member_0; } ;
struct tree {int dummy; } ;
struct strbuf {size_t len; char* buf; } ;
struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;
struct TYPE_5__ {int index; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct lock_file VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 struct strbuf VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (int *,char*,struct object_id*,int ) ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 (TYPE_1__*,struct tree_desc*,struct object_id*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (char*,struct object_id*) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct lock_file*,int ) ;
 int FUNC_10 (struct unpack_trees_options*,int ,int) ;
 struct object_id VAR_12 ;
 int FUNC_11 (struct object_id*) ;
 int VAR_13 ;
 struct tree* FUNC_12 (struct object_id*) ;
 int FUNC_13 (TYPE_1__*,int ,struct tree*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct lock_file*) ;
 int FUNC_16 (int *,char*,int ,int ,char*,int *) ;
 int FUNC_17 (struct unpack_trees_options*,char const*) ;
 int FUNC_18 (char const*,char*) ;
 int FUNC_19 (struct strbuf*,char*,char const*) ;
 int FUNC_20 (struct strbuf*,char*) ;
 int FUNC_21 (struct strbuf*) ;
 int FUNC_22 (struct strbuf*,size_t) ;
 TYPE_1__* VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_23 (int,struct tree_desc*,struct unpack_trees_options*) ;
 int FUNC_24 (char const*,char const*,struct object_id*,struct object_id*,int ,int ) ;
 scalar_t__ FUNC_25 (int ,struct lock_file*,int ) ;

__attribute__((used)) static int FUNC_26(struct object_id *VAR_16, const char *VAR_17,
        const char *VAR_18, unsigned VAR_19,
        const char *VAR_20, const char *VAR_21)
{
 unsigned VAR_22 = VAR_19 & VAR_5;
 unsigned VAR_23 = VAR_19 & VAR_6;
 unsigned VAR_24 = VAR_19 & VAR_8;
 unsigned VAR_25 = VAR_19 & VAR_7;
 unsigned VAR_26 = VAR_19 & VAR_9;
 struct object_id VAR_27;
 struct tree_desc VAR_28[2] = { { ((void*)0) }, { ((void*)0) } };
 struct lock_file VAR_29 = VAR_2;
 struct unpack_trees_options VAR_30;
 struct tree *VAR_31;
 const char *VAR_32;
 struct strbuf VAR_33 = VAR_10;
 size_t VAR_34;
 struct object_id *VAR_35 = ((void*)0), VAR_36,
  *VAR_37 = ((void*)0), VAR_38;
 int VAR_39 = 0, VAR_40 = 0;

 if (VAR_18 && !FUNC_18(VAR_18, "refs/"))
  FUNC_0("Not a fully qualified branch: '%s'", VAR_18);

 if (!VAR_25 && FUNC_9(&VAR_29, VAR_3) < 0) {
  VAR_39 = -1;
  goto leave_reset_head;
 }

 if ((!VAR_16 || !VAR_23) && FUNC_7("HEAD", &VAR_27)) {
  VAR_39 = FUNC_4(FUNC_1("could not determine HEAD revision"));
  goto leave_reset_head;
 }

 if (!VAR_16)
  VAR_16 = &VAR_27;

 if (VAR_25)
  goto reset_head_refs;

 FUNC_10(&VAR_30, 0, sizeof(VAR_30));
 FUNC_17(&VAR_30, VAR_17);
 VAR_30.head_idx = 1;
 VAR_30.src_index = VAR_14->index;
 VAR_30.dst_index = VAR_14->index;
 VAR_30.fn = VAR_23 ? VAR_13 : VAR_15;
 VAR_30.update = 1;
 VAR_30.merge = 1;
 if (!VAR_22)
  VAR_30.reset = 1;

 if (FUNC_14(VAR_14) < 0) {
  VAR_39 = FUNC_4(FUNC_1("could not read index"));
  goto leave_reset_head;
 }

 if (!VAR_23 && !FUNC_5(VAR_14, &VAR_28[VAR_40++], &VAR_27)) {
  VAR_39 = FUNC_4(FUNC_1("failed to find tree of %s"),
       FUNC_11(&VAR_27));
  goto leave_reset_head;
 }

 if (!FUNC_5(VAR_14, &VAR_28[VAR_40++], VAR_16)) {
  VAR_39 = FUNC_4(FUNC_1("failed to find tree of %s"), FUNC_11(VAR_16));
  goto leave_reset_head;
 }

 if (FUNC_23(VAR_40, VAR_28, &VAR_30)) {
  VAR_39 = -1;
  goto leave_reset_head;
 }

 VAR_31 = FUNC_12(VAR_16);
 FUNC_13(VAR_14, VAR_14->index, VAR_31);

 if (FUNC_25(VAR_14->index, &VAR_29, VAR_0) < 0) {
  VAR_39 = FUNC_4(FUNC_1("could not write index"));
  goto leave_reset_head;
 }

reset_head_refs:
 VAR_32 = FUNC_8(VAR_1);
 FUNC_19(&VAR_33, "%s: ", VAR_32 ? VAR_32 : "rebase");
 VAR_34 = VAR_33.len;

 if (VAR_26) {
  if (!FUNC_7("ORIG_HEAD", &VAR_38))
   VAR_37 = &VAR_38;
  if (!FUNC_7("HEAD", &VAR_36)) {
   VAR_35 = &VAR_36;
   if (!VAR_20) {
    FUNC_20(&VAR_33, "updating ORIG_HEAD");
    VAR_20 = VAR_33.buf;
   }
   FUNC_24(VAR_20, "ORIG_HEAD", VAR_35,
       VAR_37, 0, VAR_11);
  } else if (VAR_37)
   FUNC_3(((void*)0), "ORIG_HEAD", VAR_37, 0);
 }

 if (!VAR_21) {
  FUNC_22(&VAR_33, VAR_34);
  FUNC_20(&VAR_33, "updating HEAD");
  VAR_21 = VAR_33.buf;
 }
 if (!VAR_18)
  VAR_39 = FUNC_24(VAR_21, "HEAD", VAR_16, VAR_35,
     VAR_22 ? VAR_4 : 0,
     VAR_11);
 else {
  VAR_39 = FUNC_24(VAR_21, VAR_18, VAR_16,
     ((void*)0), 0, VAR_11);
  if (!VAR_39)
   VAR_39 = FUNC_2("HEAD", VAR_18,
         VAR_21);
 }
 if (VAR_24)
  FUNC_16(((void*)0), "post-checkout",
       FUNC_11(VAR_35 ? VAR_35 : &VAR_12),
       FUNC_11(VAR_16), "1", ((void*)0));

leave_reset_head:
 FUNC_21(&VAR_33);
 FUNC_15(&VAR_29);
 while (VAR_40)
  FUNC_6((void *)VAR_28[--VAR_40].buffer);
 return VAR_39;
}
