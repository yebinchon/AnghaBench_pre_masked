
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {char* branch; int workdir_dirty; int nowarn; int amend; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct wt_status *VAR_0)
{
 int VAR_1 = 0;
 char *VAR_2, *VAR_3, *VAR_4, *VAR_5;

 if ((!VAR_0->amend && !VAR_0->nowarn && !VAR_0->workdir_dirty) ||
     !VAR_0->branch || FUNC_2(VAR_0->branch, "HEAD"))
  return 0;

 VAR_2 = FUNC_1("HEAD");
 VAR_3 = FUNC_1("ORIG_HEAD");
 VAR_4 = FUNC_1("rebase-merge/amend");
 VAR_5 = FUNC_1("rebase-merge/orig-head");

 if (!VAR_2 || !VAR_3 || !VAR_4 || !VAR_5)
  ;
 else if (!FUNC_2(VAR_4, VAR_5))
  VAR_1 = !!FUNC_2(VAR_2, VAR_4);
 else if (FUNC_2(VAR_3, VAR_5))
  VAR_1 = 1;

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);

 return VAR_1;
}
