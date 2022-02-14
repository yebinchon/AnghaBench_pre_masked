
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_merge_driver ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (char const*,int *) ;

int FUNC_6(const char *VAR_4, git_merge_driver *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4 && VAR_5);

 if (FUNC_2(&VAR_3.lock) < 0) {
  FUNC_1(VAR_2, "failed to lock merge driver registry");
  return -1;
 }

 if (!FUNC_4(((void*)0), VAR_4)) {
  FUNC_1(VAR_1, "attempt to reregister existing driver '%s'",
   VAR_4);
  VAR_6 = VAR_0;
  goto done;
 }

 VAR_6 = FUNC_5(VAR_4, VAR_5);

done:
 FUNC_3(&VAR_3.lock);
 return VAR_6;
}
