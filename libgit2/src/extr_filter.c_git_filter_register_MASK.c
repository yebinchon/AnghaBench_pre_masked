
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_filter ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*,int *,int) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(
 const char *VAR_4, git_filter *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_4 && VAR_5);

 if (FUNC_4(&VAR_3.lock) < 0) {
  FUNC_3(VAR_2, "failed to lock filter registry");
  return -1;
 }

 if (!FUNC_1(((void*)0), VAR_4)) {
  FUNC_3(
   VAR_1, "attempt to reregister existing filter '%s'", VAR_4);
  VAR_7 = VAR_0;
  goto done;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);

done:
 FUNC_5(&VAR_3.lock);
 return VAR_7;
}
