
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct strbuf {int len; int * buf; } ;
struct repository {int index; int * submodule_prefix; } ;
struct pathspec {int dummy; } ;
struct name_entry {int oid; int mode; int path; } ;
struct grep_opt {scalar_t__ status_only; struct repository* repo; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef enum interesting { ____Placeholder_interesting } interesting ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct grep_opt*,int *,int *,int,int *) ;
 int FUNC_7 (struct grep_opt*,struct pathspec const*,int *,int *,int *,int) ;
 int FUNC_8 (struct tree_desc*,void*,unsigned long) ;
 void* FUNC_9 (int *,int*,unsigned long*) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (struct strbuf*,int ,int) ;
 int FUNC_12 (struct strbuf*,char) ;
 int FUNC_13 (struct strbuf*,int *) ;
 int FUNC_14 (struct strbuf*) ;
 int FUNC_15 (struct strbuf*,int) ;
 scalar_t__ FUNC_16 (struct tree_desc*,struct name_entry*) ;
 int FUNC_17 (int ,struct name_entry*,struct strbuf*,int ,struct pathspec const*) ;
 int FUNC_18 (struct name_entry*) ;

__attribute__((used)) static int FUNC_19(struct grep_opt *VAR_5, const struct pathspec *VAR_6,
       struct tree_desc *VAR_7, struct strbuf *VAR_8, int VAR_9,
       int VAR_10)
{
 struct repository *VAR_11 = VAR_5->repo;
 int VAR_12 = 0;
 enum interesting VAR_13 = VAR_3;
 struct name_entry VAR_14;
 int VAR_15 = VAR_8->len;
 struct strbuf VAR_16 = VAR_0;
 int VAR_17 = 0;
 if (VAR_11->submodule_prefix) {
  FUNC_13(&VAR_16, VAR_11->submodule_prefix);
  VAR_17 = VAR_16.len;
 }

 while (FUNC_16(VAR_7, &VAR_14)) {
  int VAR_18 = FUNC_18(&VAR_14);

  if (VAR_13 != VAR_1) {
   FUNC_13(&VAR_16, VAR_8->buf + VAR_9);
   VAR_13 = FUNC_17(VAR_11->index,
             &VAR_14, &VAR_16,
             0, VAR_6);
   FUNC_15(&VAR_16, VAR_17);

   if (VAR_13 == VAR_2)
    break;
   if (VAR_13 == VAR_3)
    continue;
  }

  FUNC_11(VAR_8, VAR_14.path, VAR_18);

  if (FUNC_2(VAR_14.mode)) {
   VAR_12 |= FUNC_6(VAR_5, &VAR_14.oid, VAR_8->buf, VAR_9,
      VAR_10 ? VAR_8->buf + VAR_9 : ((void*)0));
  } else if (FUNC_0(VAR_14.mode)) {
   enum object_type VAR_19;
   struct tree_desc VAR_20;
   void *VAR_21;
   unsigned long VAR_22;

   VAR_21 = FUNC_9(&VAR_14.oid, &VAR_19, &VAR_22);
   if (!VAR_21)
    FUNC_4(FUNC_3("unable to read tree (%s)"),
        FUNC_10(&VAR_14.oid));

   FUNC_12(VAR_8, '/');
   FUNC_8(&VAR_20, VAR_21, VAR_22);
   VAR_12 |= FUNC_19(VAR_5, VAR_6, &VAR_20, VAR_8, VAR_9,
      VAR_10);
   FUNC_5(VAR_21);
  } else if (VAR_4 && FUNC_1(VAR_14.mode)) {
   VAR_12 |= FUNC_7(VAR_5, VAR_6, &VAR_14.oid,
           VAR_8->buf, VAR_8->buf + VAR_9,
           1);
  }

  FUNC_15(VAR_8, VAR_15);

  if (VAR_12 && VAR_5->status_only)
   break;
 }

 FUNC_14(&VAR_16);
 return VAR_12;
}
