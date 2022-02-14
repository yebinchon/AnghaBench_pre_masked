
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ,int*) ;
 int VAR_1 ;
 int FUNC_2 (struct wt_status*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct wt_status *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1("refs/stash", VAR_1, &VAR_3);
 if (VAR_3 > 0)
  FUNC_2(VAR_2, VAR_0,
     FUNC_0("Your stash currently has %d entry",
        "Your stash currently has %d entries", VAR_3),
     VAR_3);
}
