
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct strbuf {int len; int buf; } ;
struct repository {int index; } ;
struct pathspec {int dummy; } ;
struct object_id {int dummy; } ;
struct name_entry {int path; int oid; int mode; } ;
struct commit {int dummy; } ;
typedef int (* read_tree_fn_t ) (int *,struct strbuf*,int ,int ,int,void*) ;
typedef enum interesting { ____Placeholder_interesting } interesting ;



 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int VAR_2 ;
 int * FUNC_3 (struct commit*) ;
 int FUNC_4 (struct tree_desc*,int ,int ) ;
 struct commit* FUNC_5 (struct repository*,int *) ;
 struct tree* FUNC_6 (struct repository*,struct object_id*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct object_id*,int *) ;
 scalar_t__ FUNC_9 (struct commit*) ;
 scalar_t__ FUNC_10 (struct tree*) ;
 int FUNC_11 (struct strbuf*,int ,int) ;
 int FUNC_12 (struct strbuf*,char) ;
 int FUNC_13 (struct strbuf*,int) ;
 scalar_t__ FUNC_14 (struct tree_desc*,struct name_entry*) ;
 int FUNC_15 (int ,struct name_entry*,struct strbuf*,int ,struct pathspec const*) ;
 int FUNC_16 (struct name_entry*) ;

__attribute__((used)) static int FUNC_17(struct repository *VAR_3,
         struct tree *VAR_4, struct strbuf *VAR_5,
         int VAR_6, const struct pathspec *VAR_7,
         read_tree_fn_t VAR_8, void *VAR_9)
{
 struct tree_desc VAR_10;
 struct name_entry VAR_11;
 struct object_id VAR_12;
 int VAR_13, VAR_14 = VAR_5->len;
 enum interesting VAR_15 = VAR_2;

 if (FUNC_10(VAR_4))
  return -1;

 FUNC_4(&VAR_10, VAR_4->buffer, VAR_4->size);

 while (FUNC_14(&VAR_10, &VAR_11)) {
  if (VAR_15 != VAR_0) {
   VAR_15 = FUNC_15(VAR_3->index, &VAR_11,
       VAR_5, 0, VAR_7);
   if (VAR_15 == VAR_1)
    break;
   if (VAR_15 == VAR_2)
    continue;
  }

  switch (VAR_8(&VAR_11.oid, VAR_5,
      VAR_11.path, VAR_11.mode, VAR_6, VAR_9)) {
  case 0:
   continue;
  case 128:
   break;
  default:
   return -1;
  }

  if (FUNC_0(VAR_11.mode))
   FUNC_8(&VAR_12, &VAR_11.oid);
  else if (FUNC_1(VAR_11.mode)) {
   struct commit *VAR_16;

   VAR_16 = FUNC_5(VAR_3, &VAR_11.oid);
   if (!VAR_16)
    FUNC_2("Commit %s in submodule path %s%s not found",
        FUNC_7(&VAR_11.oid),
        VAR_5->buf, VAR_11.path);

   if (FUNC_9(VAR_16))
    FUNC_2("Invalid commit %s in submodule path %s%s",
        FUNC_7(&VAR_11.oid),
        VAR_5->buf, VAR_11.path);

   FUNC_8(&VAR_12, FUNC_3(VAR_16));
  }
  else
   continue;

  VAR_13 = FUNC_16(&VAR_11);
  FUNC_11(VAR_5, VAR_11.path, VAR_13);
  FUNC_12(VAR_5, '/');
  VAR_15 = FUNC_17(VAR_3, FUNC_6(VAR_3, &VAR_12),
         VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9);
  FUNC_13(VAR_5, VAR_14);
  if (VAR_15)
   return -1;
 }
 return 0;
}
