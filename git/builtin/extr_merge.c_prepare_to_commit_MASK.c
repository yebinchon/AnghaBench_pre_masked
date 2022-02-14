
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct commit_list {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (struct commit_list*,int *) ;
 int FUNC_3 (struct strbuf*,int ,int ) ;
 int FUNC_4 (struct strbuf*,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int *,int *) ;
 char* VAR_4 ;
 struct strbuf VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (struct strbuf*) ;
 scalar_t__ FUNC_13 (int,char const*,char*,int ,...) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_14 (struct strbuf*,struct strbuf*) ;
 int FUNC_15 (struct strbuf*,char) ;
 int FUNC_16 (struct strbuf*,char*,...) ;
 int FUNC_17 (struct strbuf*) ;
 int VAR_12 ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (struct commit_list*) ;
 int FUNC_20 (struct strbuf*) ;

__attribute__((used)) static void FUNC_21(struct commit_list *VAR_13)
{
 struct strbuf VAR_14 = VAR_1;
 const char *VAR_15 = FUNC_7();

 if (!VAR_7 && FUNC_13(0 < VAR_8, VAR_15, "pre-merge-commit", ((void*)0)))
  FUNC_2(VAR_13, ((void*)0));





 if (FUNC_6("pre-merge-commit"))
  FUNC_5();
 FUNC_11(VAR_15);
 FUNC_14(&VAR_14, &VAR_5);
 if (VAR_11)
  FUNC_0("the control must not reach here under --squash");
 if (0 < VAR_8) {
  FUNC_15(&VAR_14, '\n');
  if (VAR_2 == VAR_0) {
   FUNC_20(&VAR_14);
   FUNC_16(&VAR_14, "\n");
  }
  FUNC_16(&VAR_14, FUNC_1(VAR_4));
  FUNC_16(&VAR_14, FUNC_1(VAR_2 == VAR_0 ?
   VAR_9 :
   VAR_6), VAR_3);
 }
 if (VAR_10)
  FUNC_3(&VAR_14, FUNC_9(VAR_14.buf, VAR_14.len), 0);
 FUNC_19(VAR_13);
 FUNC_18(FUNC_8(VAR_12), VAR_14.buf, VAR_14.len);
 if (FUNC_13(0 < VAR_8, FUNC_7(), "prepare-commit-msg",
       FUNC_8(VAR_12), "merge", ((void*)0)))
  FUNC_2(VAR_13, ((void*)0));
 if (0 < VAR_8) {
  if (FUNC_10(FUNC_8(VAR_12), ((void*)0), ((void*)0)))
   FUNC_2(VAR_13, ((void*)0));
 }

 if (!VAR_7 && FUNC_13(0 < VAR_8, FUNC_7(),
       "commit-msg",
       FUNC_8(VAR_12), ((void*)0)))
  FUNC_2(VAR_13, ((void*)0));

 FUNC_12(&VAR_14);
 FUNC_4(&VAR_14, VAR_2, 0);
 if (!VAR_14.len)
  FUNC_2(VAR_13, FUNC_1("Empty commit message."));
 FUNC_17(&VAR_5);
 FUNC_14(&VAR_5, &VAR_14);
 FUNC_17(&VAR_14);
}
