
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rename_cb {scalar_t__ true_errno; int tmp_renamed_log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3, void *VAR_4)
{
 struct rename_cb *VAR_5 = VAR_4;

 if (FUNC_0(VAR_5->tmp_renamed_log, VAR_3)) {







  VAR_5->true_errno = VAR_2;
  if (VAR_2 == VAR_1)
   VAR_2 = VAR_0;
  return -1;
 } else {
  return 0;
 }
}
