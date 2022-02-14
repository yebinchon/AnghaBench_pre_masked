
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct todo_list {int current; } ;
struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 struct todo_list VAR_1 ;
 scalar_t__ FUNC_0 (struct repository*,struct replay_opts*,struct todo_list*) ;
 int FUNC_1 (struct repository*) ;
 int FUNC_2 (struct repository*,struct replay_opts*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct object_id*) ;
 int FUNC_5 (struct replay_opts*) ;
 int FUNC_6 (struct repository*) ;
 int FUNC_7 (struct repository*) ;
 scalar_t__ FUNC_8 (struct repository*,char*,int *,int ) ;
 scalar_t__ FUNC_9 (struct replay_opts*) ;
 int FUNC_10 (struct todo_list*,int ) ;
 int FUNC_11 (struct repository*,struct todo_list*,struct replay_opts*) ;
 scalar_t__ FUNC_12 (struct repository*,struct replay_opts*) ;
 scalar_t__ FUNC_13 (struct strbuf*,int ,int) ;
 scalar_t__ FUNC_14 (struct replay_opts*) ;
 int FUNC_15 (struct repository*,struct todo_list*,struct replay_opts*) ;
 int FUNC_16 () ;
 int FUNC_17 (struct object_id*,int ) ;
 int FUNC_18 (struct strbuf*) ;
 int FUNC_19 (struct todo_list*) ;

int FUNC_20(struct repository *VAR_2, struct replay_opts *VAR_3)
{
 struct todo_list VAR_4 = VAR_1;
 int VAR_5;

 if (FUNC_12(VAR_2, VAR_3))
  return -1;

 if (FUNC_14(VAR_3))
  return -1;
 if (FUNC_9(VAR_3)) {
  if ((VAR_5 = FUNC_15(VAR_2, &VAR_4, VAR_3)))
   goto release_todo_list;
  if (FUNC_0(VAR_2, VAR_3, &VAR_4))
   return -1;
 } else if (!FUNC_3(FUNC_5(VAR_3)))
  return FUNC_1(VAR_2);
 else if ((VAR_5 = FUNC_15(VAR_2, &VAR_4, VAR_3)))
  goto release_todo_list;

 if (!FUNC_9(VAR_3)) {

  if (FUNC_3(FUNC_6(VAR_2)) ||
      FUNC_3(FUNC_7(VAR_2))) {
   VAR_5 = FUNC_1(VAR_2);
   if (VAR_5)
    goto release_todo_list;
  }
  if (FUNC_8(VAR_2, "HEAD", ((void*)0), 0)) {
   VAR_5 = FUNC_2(VAR_2, VAR_3);
   goto release_todo_list;
  }
  VAR_4.current++;
 } else if (FUNC_3(FUNC_16())) {
  struct strbuf VAR_6 = VAR_0;
  struct object_id VAR_7;

  if (FUNC_13(&VAR_6, FUNC_16(), 1) &&
      !FUNC_4(VAR_6.buf, &VAR_7))
   FUNC_17(&VAR_7, FUNC_10(&VAR_4, 0));
  FUNC_18(&VAR_6);
 }

 VAR_5 = FUNC_11(VAR_2, &VAR_4, VAR_3);
release_todo_list:
 FUNC_19(&VAR_4);
 return VAR_5;
}
