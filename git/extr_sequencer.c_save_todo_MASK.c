
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; scalar_t__ buf; } ;
struct todo_list {int current; TYPE_1__ buf; } ;
struct replay_opts {int dummy; } ;
struct lock_file {int dummy; } ;


 struct lock_file VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct lock_file*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (struct todo_list*,int) ;
 scalar_t__ FUNC_6 (struct todo_list*,int) ;
 int FUNC_7 (struct todo_list*,int) ;
 char* FUNC_8 (struct replay_opts*) ;
 int FUNC_9 (struct lock_file*,char const*,int ) ;
 scalar_t__ FUNC_10 (struct replay_opts*) ;
 int FUNC_11 (char const*,int,int) ;
 char* FUNC_12 () ;
 scalar_t__ FUNC_13 (int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct todo_list *VAR_4, struct replay_opts *VAR_5)
{
 struct lock_file VAR_6 = VAR_0;
 const char *VAR_7 = FUNC_8(VAR_5);
 int VAR_8 = VAR_4->current, VAR_9, VAR_10;





 if (FUNC_10(VAR_5))
  VAR_8++;

 VAR_10 = FUNC_9(&VAR_6, VAR_7, 0);
 if (VAR_10 < 0)
  return FUNC_4(FUNC_0("could not lock '%s'"), VAR_7);
 VAR_9 = FUNC_7(VAR_4, VAR_8);
 if (FUNC_13(VAR_10, VAR_4->buf.buf + VAR_9,
   VAR_4->buf.len - VAR_9) < 0)
  return FUNC_4(FUNC_0("could not write to '%s'"), VAR_7);
 if (FUNC_2(&VAR_6) < 0)
  return FUNC_3(FUNC_0("failed to finalize '%s'"), VAR_7);

 if (FUNC_10(VAR_5) && VAR_8 > 0) {
  const char *VAR_11 = FUNC_12();
  int VAR_12 = FUNC_11(VAR_11, VAR_2 | VAR_3 | VAR_1, 0666);
  int VAR_13 = 0;

  if (VAR_12 < 0)
   return 0;
  if (FUNC_13(VAR_12, FUNC_5(VAR_4, VAR_8 - 1),
      FUNC_6(VAR_4, VAR_8 - 1))
      < 0)
   VAR_13 = FUNC_4(FUNC_0("could not write to '%s'"), VAR_11);
  if (FUNC_1(VAR_12) < 0)
   VAR_13 = FUNC_4(FUNC_0("failed to finalize '%s'"), VAR_11);
  return VAR_13;
 }
 return 0;
}
