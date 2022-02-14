
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int index; } ;
struct lock_file {int dummy; } ;


 struct lock_file VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,...) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct repository*,int) ;
 scalar_t__ FUNC_4 (struct repository*,int) ;
 int FUNC_5 (int ,int ,int *,int *,int *) ;
 int FUNC_6 (struct repository*,struct lock_file*,int ) ;
 int FUNC_7 (struct repository*,struct lock_file*) ;
 int FUNC_8 (struct lock_file*) ;

int FUNC_9(struct repository *VAR_2,
       const char *VAR_3,
       const char *VAR_4,
       int VAR_5,
       int VAR_6)
{
 struct lock_file VAR_7 = VAR_0;
 int VAR_8 = 0, VAR_9;

 VAR_9 = FUNC_6(VAR_2, &VAR_7, 0);
 FUNC_5(VAR_2->index, VAR_1, ((void*)0), ((void*)0), ((void*)0));
 if (0 <= VAR_9)
  FUNC_7(VAR_2, &VAR_7);
 FUNC_8(&VAR_7);

 if (FUNC_4(VAR_2, VAR_5)) {

  FUNC_1(FUNC_0("cannot %s: You have unstaged changes."), FUNC_0(VAR_3));
  VAR_8 = 1;
 }

 if (FUNC_3(VAR_2, VAR_5)) {
  if (VAR_8)
   FUNC_1(FUNC_0("additionally, your index contains uncommitted changes."));
  else
   FUNC_1(FUNC_0("cannot %s: Your index contains uncommitted changes."),
         FUNC_0(VAR_3));
  VAR_8 = 1;
 }

 if (VAR_8) {
  if (VAR_4)
   FUNC_1("%s", VAR_4);
  if (!VAR_6)
   FUNC_2(128);
 }

 return VAR_8;
}
