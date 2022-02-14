
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct pretty_print_context {int dummy; } ;
struct object_id {int dummy; } ;
struct notes_tree {int dummy; } ;
struct notes_merge_options {void* local_ref; } ;
struct commit {TYPE_3__* parents; } ;
typedef int pretty_ctx ;
struct TYPE_6__ {TYPE_2__* item; } ;
struct TYPE_4__ {int oid; } ;
struct TYPE_5__ {TYPE_1__ object; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct notes_tree*) ;
 scalar_t__ FUNC_5 (char*,struct object_id*) ;
 int FUNC_6 (struct notes_tree*,char*,int ,int ) ;
 scalar_t__ FUNC_7 (struct object_id*) ;
 struct commit* FUNC_8 (int ,struct object_id*) ;
 int FUNC_9 (struct pretty_print_context*,int ,int) ;
 int FUNC_10 (struct notes_merge_options*) ;
 scalar_t__ FUNC_11 (struct notes_merge_options*,struct notes_tree*,struct commit*,struct object_id*) ;
 int FUNC_12 (struct object_id*) ;
 int FUNC_13 (struct object_id*,int *) ;
 scalar_t__ FUNC_14 (struct commit*) ;
 void* FUNC_15 (char*,int ,struct object_id*,int *) ;
 int FUNC_16 (struct strbuf*,int ,char*,int) ;
 int FUNC_17 (struct strbuf*) ;
 int FUNC_18 (struct strbuf*) ;
 int VAR_3 ;
 int FUNC_19 (int ,void*,struct object_id*,struct object_id*,int ,int ) ;
 struct notes_tree* FUNC_20 (int,int) ;

__attribute__((used)) static int FUNC_21(struct notes_merge_options *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 struct object_id VAR_6, VAR_7;
 struct notes_tree *VAR_8;
 struct commit *VAR_9;
 struct pretty_print_context VAR_10;
 void *VAR_11;
 int VAR_12;






 if (FUNC_5("NOTES_MERGE_PARTIAL", &VAR_6))
  FUNC_1(FUNC_0("failed to read ref NOTES_MERGE_PARTIAL"));
 else if (!(VAR_9 = FUNC_8(VAR_3, &VAR_6)))
  FUNC_1(FUNC_0("could not find commit from NOTES_MERGE_PARTIAL."));
 else if (FUNC_14(VAR_9))
  FUNC_1(FUNC_0("could not parse commit from NOTES_MERGE_PARTIAL."));

 if (VAR_9->parents)
  FUNC_13(&VAR_7, &VAR_9->parents->item->object.oid);
 else
  FUNC_12(&VAR_7);

 VAR_8 = FUNC_20(1, sizeof(struct notes_tree));
 FUNC_6(VAR_8, "NOTES_MERGE_PARTIAL", VAR_2, 0);

 VAR_4->local_ref = VAR_11 =
  FUNC_15("NOTES_MERGE_REF", 0, &VAR_6, ((void*)0));
 if (!VAR_4->local_ref)
  FUNC_1(FUNC_0("failed to resolve NOTES_MERGE_REF"));

 if (FUNC_11(VAR_4, VAR_8, VAR_9, &VAR_6))
  FUNC_1(FUNC_0("failed to finalize notes merge"));


 FUNC_9(&VAR_10, 0, sizeof(VAR_10));
 FUNC_2(VAR_9, "%s", &VAR_5, &VAR_10);
 FUNC_18(&VAR_5);
 FUNC_16(&VAR_5, 0, "notes: ", 7);
 FUNC_19(VAR_5.buf, VAR_4->local_ref, &VAR_6,
     FUNC_7(&VAR_7) ? ((void*)0) : &VAR_7,
     0, VAR_1);

 FUNC_4(VAR_8);
 FUNC_17(&VAR_5);
 VAR_12 = FUNC_10(VAR_4);
 FUNC_3(VAR_11);
 return VAR_12;
}
