
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpack_trees_options {int update; int merge; int clone; int verbose_update; int * dst_index; int * src_index; int fn; } ;
struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;
struct argv_array {int argv; } ;
struct TYPE_2__ {scalar_t__ nr; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lock_file VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char*) ;
 int FUNC_3 (struct argv_array*,char*,int) ;
 int FUNC_4 (struct argv_array*,char*,char*,char*,char*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct lock_file*,int ) ;
 int FUNC_9 (struct tree_desc*,int ,int ) ;
 int VAR_7 ;
 int FUNC_10 (struct unpack_trees_options*,int ,int) ;
 struct object_id VAR_8 ;
 int FUNC_11 (struct object_id*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (struct tree*) ;
 struct tree* FUNC_13 (struct object_id*) ;
 char* FUNC_14 (char*,int ,struct object_id*,int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,char*,int ,int ,char*,int *) ;
 int FUNC_17 () ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;
 int VAR_15 ;
 scalar_t__ FUNC_20 (int,struct tree_desc*,struct unpack_trees_options*) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int *,struct lock_file*,int ) ;

__attribute__((used)) static int FUNC_23(int VAR_16)
{
 struct object_id VAR_17;
 char *VAR_18;
 struct lock_file VAR_19 = VAR_3;
 struct unpack_trees_options VAR_20;
 struct tree *VAR_21;
 struct tree_desc VAR_22;
 int VAR_23 = 0;

 if (VAR_10)
  return 0;

 VAR_18 = FUNC_14("HEAD", VAR_4, &VAR_17, ((void*)0));
 if (!VAR_18) {
  FUNC_21(FUNC_0("remote HEAD refers to nonexistent ref, "
     "unable to checkout.\n"));
  return 0;
 }
 if (!FUNC_19(VAR_18, "HEAD")) {
  if (VAR_6)
   FUNC_5(FUNC_11(&VAR_17));
 } else {
  if (!FUNC_18(VAR_18, "refs/heads/"))
   FUNC_6(FUNC_0("HEAD not found below refs/heads!"));
 }
 FUNC_7(VAR_18);


 FUNC_17();

 FUNC_8(&VAR_19, VAR_2);

 FUNC_10(&VAR_20, 0, sizeof VAR_20);
 VAR_20.update = 1;
 VAR_20.merge = 1;
 VAR_20.clone = 1;
 VAR_20.fn = VAR_9;
 VAR_20.verbose_update = (VAR_14 >= 0);
 VAR_20.src_index = &VAR_15;
 VAR_20.dst_index = &VAR_15;

 VAR_21 = FUNC_13(&VAR_17);
 FUNC_12(VAR_21);
 FUNC_9(&VAR_22, VAR_21->buffer, VAR_21->size);
 if (FUNC_20(1, &VAR_22, &VAR_20) < 0)
  FUNC_6(FUNC_0("unable to checkout working tree"));

 if (FUNC_22(&VAR_15, &VAR_19, VAR_1))
  FUNC_6(FUNC_0("unable to write new index file"));

 VAR_23 |= FUNC_16(((void*)0), "post-checkout", FUNC_11(&VAR_8),
      FUNC_11(&VAR_17), "1", ((void*)0));

 if (!VAR_23 && (VAR_11.nr > 0)) {
  struct argv_array VAR_24 = VAR_0;
  FUNC_4(&VAR_24, "submodule", "update", "--init", "--recursive", ((void*)0));

  if (VAR_13 == 1)
   FUNC_2(&VAR_24, "--depth=1");

  if (VAR_7 != -1)
   FUNC_3(&VAR_24, "--jobs=%d", VAR_7);

  if (VAR_16)
   FUNC_2(&VAR_24, "--progress");

  if (VAR_14 < 0)
   FUNC_2(&VAR_24, "--quiet");

  if (VAR_12) {
   FUNC_2(&VAR_24, "--remote");
   FUNC_2(&VAR_24, "--no-fetch");
  }

  VAR_23 = FUNC_15(VAR_24.argv, VAR_5);
  FUNC_1(&VAR_24);
 }

 return VAR_23;
}
