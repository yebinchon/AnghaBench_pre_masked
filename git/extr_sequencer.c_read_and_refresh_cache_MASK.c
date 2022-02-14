
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int index; } ;
struct replay_opts {int dummy; } ;
struct lock_file {int dummy; } ;


 int VAR_0 ;
 struct lock_file VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct replay_opts*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int *,int *,int *) ;
 int FUNC_4 (struct repository*,struct lock_file*,int ) ;
 scalar_t__ FUNC_5 (struct repository*) ;
 int FUNC_6 (struct lock_file*) ;
 scalar_t__ FUNC_7 (int ,struct lock_file*,int) ;

__attribute__((used)) static int FUNC_8(struct repository *VAR_5,
      struct replay_opts *VAR_6)
{
 struct lock_file VAR_7 = VAR_1;
 int VAR_8 = FUNC_4(VAR_5, &VAR_7, 0);
 if (FUNC_5(VAR_5) < 0) {
  FUNC_6(&VAR_7);
  return FUNC_2(FUNC_0("git %s: failed to read the index"),
   FUNC_0(FUNC_1(VAR_6)));
 }
 FUNC_3(VAR_5->index, VAR_2|VAR_3, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_8 >= 0) {
  if (FUNC_7(VAR_5->index, &VAR_7,
           VAR_0 | VAR_4)) {
   return FUNC_2(FUNC_0("git %s: failed to refresh the index"),
    FUNC_0(FUNC_1(VAR_6)));
  }
 }
 return 0;
}
