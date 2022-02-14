
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t expect_idx; int ** expect; int cancel_after; } ;
typedef TYPE_1__ check_walkup_info ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const char *VAR_2)
{
 check_walkup_info *VAR_3 = (check_walkup_info *)VAR_1;

 if (!VAR_3->cancel_after) {
  FUNC_1(VAR_3->expect[VAR_3->expect_idx], "[CANCEL]");
  return VAR_0;
 }
 VAR_3->cancel_after--;

 FUNC_0(VAR_3->expect[VAR_3->expect_idx] != ((void*)0));
 FUNC_1(VAR_3->expect[VAR_3->expect_idx], VAR_2);
 VAR_3->expect_idx++;

 return 0;
}
