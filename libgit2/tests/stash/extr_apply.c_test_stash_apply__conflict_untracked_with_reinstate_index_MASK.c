
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_stash_apply_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_6(void)
{
 git_stash_apply_options VAR_8 = VAR_2;

 VAR_8.flags = VAR_3;

 FUNC_3("stash/when", "nothing\n");

 FUNC_2(FUNC_5(VAR_6, 0, &VAR_8), VAR_0);

 FUNC_1(FUNC_4(VAR_7), 0);
 FUNC_0(VAR_6, "what", VAR_4);
 FUNC_0(VAR_6, "how", VAR_4);
 FUNC_0(VAR_6, "who", VAR_4);
 FUNC_0(VAR_6, "when", VAR_5);
 FUNC_0(VAR_6, "why", VAR_1);
}
