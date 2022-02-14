
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct strbuf {int len; } ;
struct pathspec {int dummy; } ;
struct object {scalar_t__ type; int oid; } ;
struct grep_opt {int repo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct grep_opt*,int *,char const*,int ,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct grep_opt*,struct pathspec const*,struct tree_desc*,struct strbuf*,int ,int) ;
 int FUNC_7 (struct tree_desc*,void*,unsigned long) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int ,int *,int ,unsigned long*,int *) ;
 int FUNC_10 (struct strbuf*,char const*,int) ;
 int FUNC_11 (struct strbuf*,char) ;
 int FUNC_12 (struct strbuf*,scalar_t__) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (char const*) ;
 int VAR_4 ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct grep_opt *VAR_5, const struct pathspec *VAR_6,
         struct object *VAR_7, const char *VAR_8, const char *VAR_9)
{
 if (VAR_7->type == VAR_0)
  return FUNC_3(VAR_5, &VAR_7->oid, VAR_8, 0, VAR_9);
 if (VAR_7->type == VAR_1 || VAR_7->type == VAR_2) {
  struct tree_desc VAR_10;
  void *VAR_11;
  unsigned long VAR_12;
  struct strbuf VAR_13;
  int VAR_14, VAR_15;

  FUNC_4();
  VAR_11 = FUNC_9(VAR_5->repo,
        &VAR_7->oid, VAR_4,
        &VAR_12, ((void*)0));
  FUNC_5();

  if (!VAR_11)
   FUNC_1(FUNC_0("unable to read tree (%s)"), FUNC_8(&VAR_7->oid));

  VAR_15 = VAR_8 ? FUNC_14(VAR_8) : 0;
  FUNC_12(&VAR_13, VAR_3 + VAR_15 + 1);
  if (VAR_15) {
   FUNC_10(&VAR_13, VAR_8, VAR_15);
   FUNC_11(&VAR_13, ':');
  }
  FUNC_7(&VAR_10, VAR_11, VAR_12);
  VAR_14 = FUNC_6(VAR_5, VAR_6, &VAR_10, &VAR_13, VAR_13.len,
    VAR_7->type == VAR_1);
  FUNC_13(&VAR_13);
  FUNC_2(VAR_11);
  return VAR_14;
 }
 FUNC_1(FUNC_0("unable to grep from object of type %s"), FUNC_15(VAR_7->type));
}
