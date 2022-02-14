
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct string_list_item {struct rerere_id* util; } ;
struct string_list {int dummy; } ;
struct rerere_id {scalar_t__ variant; TYPE_1__* collection; } ;
struct index_state {int dummy; } ;
struct TYPE_8__ {struct rerere_id* ptr; int member_1; int * member_0; } ;
typedef TYPE_2__ mmfile_t ;
struct TYPE_9__ {struct rerere_id* ptr; int member_1; int * member_0; } ;
typedef TYPE_3__ mmbuffer_t ;
struct TYPE_7__ {scalar_t__ status_nr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (struct rerere_id*) ;
 int FUNC_6 (struct string_list_item*) ;
 int FUNC_7 (struct index_state*,char const*,unsigned char*,char*) ;
 int FUNC_8 (struct rerere_id*) ;
 struct rerere_id* FUNC_9 (unsigned char*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,char*) ;
 char* FUNC_11 (struct rerere_id*,char*) ;
 int VAR_3 ;
 struct string_list_item* FUNC_12 (struct string_list*,char const*) ;
 int FUNC_13 (struct index_state*,struct rerere_id*,char const*,TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_14 (char const*) ;

__attribute__((used)) static int FUNC_15(struct index_state *VAR_4,
      const char *VAR_5,
      struct string_list *VAR_6)
{
 const char *VAR_7;
 struct rerere_id *VAR_8;
 unsigned char VAR_9[VAR_1];
 int VAR_10;
 struct string_list_item *VAR_11;





 VAR_10 = FUNC_7(VAR_4, VAR_5, VAR_9, ((void*)0));
 if (VAR_10 < 1)
  return FUNC_1(FUNC_0("could not parse conflict hunks in '%s'"), VAR_5);


 VAR_8 = FUNC_9(VAR_9);

 for (VAR_8->variant = 0;
      VAR_8->variant < VAR_8->collection->status_nr;
      VAR_8->variant++) {
  mmfile_t VAR_12 = { ((void*)0), 0 };
  mmbuffer_t VAR_13 = {((void*)0), 0};
  int VAR_14;

  if (!FUNC_8(VAR_8))
   continue;

  FUNC_7(VAR_4, VAR_5, VAR_9, FUNC_11(VAR_8, "thisimage"));
  if (FUNC_10(&VAR_12, FUNC_11(VAR_8, "thisimage"))) {
   FUNC_5(VAR_12.ptr);
   FUNC_1(FUNC_0("failed to update conflicted state in '%s'"), VAR_5);
   goto fail_exit;
  }
  VAR_14 = !FUNC_13(VAR_4, VAR_8, VAR_5, &VAR_12, &VAR_13);
  FUNC_5(VAR_13.ptr);
  FUNC_5(VAR_12.ptr);
  if (VAR_14)
   break;
 }

 if (VAR_8->collection->status_nr <= VAR_8->variant) {
  FUNC_1(FUNC_0("no remembered resolution for '%s'"), VAR_5);
  goto fail_exit;
 }

 VAR_7 = FUNC_11(VAR_8, "postimage");
 if (FUNC_14(VAR_7)) {
  if (VAR_2 == VAR_0)
   FUNC_1(FUNC_0("no remembered resolution for '%s'"), VAR_5);
  else
   FUNC_2(FUNC_0("cannot unlink '%s'"), VAR_7);
  goto fail_exit;
 }






 FUNC_7(VAR_4, VAR_5, VAR_9, FUNC_11(VAR_8, "preimage"));
 FUNC_4(VAR_3, FUNC_0("Updated preimage for '%s'"), VAR_5);





 VAR_11 = FUNC_12(VAR_6, VAR_5);
 FUNC_6(VAR_11);
 VAR_11->util = VAR_8;
 FUNC_3(VAR_3, FUNC_0("Forgot resolution for '%s'\n"), VAR_5);
 return 0;

fail_exit:
 FUNC_5(VAR_8);
 return -1;
}
