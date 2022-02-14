
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int subopt ;
struct tree_desc {int dummy; } ;
struct submodule {int dummy; } ;
struct strbuf {int len; } ;
struct repository {TYPE_2__* objects; } ;
struct pathspec {int dummy; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; struct object_id const oid; } ;
struct grep_opt {struct repository* repo; } ;
struct TYPE_4__ {TYPE_1__* odb; } ;
struct TYPE_3__ {int path; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct grep_opt*,struct pathspec const*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct grep_opt*,struct pathspec const*,struct tree_desc*,struct strbuf*,int ,int) ;
 int FUNC_8 (struct tree_desc*,void*,unsigned long) ;
 int FUNC_9 (struct repository*,char const*) ;
 int FUNC_10 (struct grep_opt*,struct grep_opt*,int) ;
 int VAR_2 ;
 int FUNC_11 (struct object_id const*) ;
 struct object* FUNC_12 (struct object_id const*,int ) ;
 void* FUNC_13 (struct repository*,struct object_id const*,int ,unsigned long*,int *) ;
 int FUNC_14 (struct repository*) ;
 int FUNC_15 (struct repository*) ;
 scalar_t__ FUNC_16 (struct repository*,struct repository*,struct submodule const*) ;
 int FUNC_17 (struct strbuf*,char) ;
 int FUNC_18 (struct strbuf*,char const*) ;
 int FUNC_19 (struct strbuf*) ;
 struct submodule* FUNC_20 (struct repository*,int *,char const*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_21(struct grep_opt *VAR_4,
     const struct pathspec *VAR_5,
     const struct object_id *VAR_6,
     const char *VAR_7, const char *VAR_8, int VAR_9)
{
 struct repository VAR_10;
 struct repository *VAR_11 = VAR_4->repo;
 const struct submodule *VAR_12 = FUNC_20(VAR_11,
         &VAR_2, VAR_8);
 struct grep_opt VAR_13;
 int VAR_14;







 FUNC_5();

 if (!FUNC_9(VAR_11, VAR_8)) {
  FUNC_6();
  return 0;
 }

 if (FUNC_16(&VAR_10, VAR_11, VAR_12)) {
  FUNC_6();
  return 0;
 }

 FUNC_15(&VAR_10);
 FUNC_1(VAR_10.objects->odb->path);
 FUNC_6();

 FUNC_10(&VAR_13, VAR_4, sizeof(VAR_13));
 VAR_13.repo = &VAR_10;

 if (VAR_6) {
  struct object *VAR_15;
  struct tree_desc VAR_16;
  void *VAR_17;
  unsigned long VAR_18;
  struct strbuf VAR_19 = VAR_1;

  VAR_15 = FUNC_12(VAR_6, FUNC_11(VAR_6));

  FUNC_5();
  VAR_17 = FUNC_13(&VAR_10,
        &VAR_15->oid, VAR_3,
        &VAR_18, ((void*)0));
  FUNC_6();

  if (!VAR_17)
   FUNC_2(FUNC_0("unable to read tree (%s)"), FUNC_11(&VAR_15->oid));

  FUNC_18(&VAR_19, VAR_7);
  FUNC_17(&VAR_19, '/');

  FUNC_8(&VAR_16, VAR_17, VAR_18);
  VAR_14 = FUNC_7(&VAR_13, VAR_5, &VAR_16, &VAR_19, VAR_19.len,
    VAR_15->type == VAR_0);
  FUNC_19(&VAR_19);
  FUNC_3(VAR_17);
 } else {
  VAR_14 = FUNC_4(&VAR_13, VAR_5, VAR_9);
 }

 FUNC_14(&VAR_10);
 return VAR_14;
}
