
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ git_stash_apply_options ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_8(void)
{
 git_buf VAR_10 = VAR_0;
 git_stash_apply_options VAR_11 = VAR_1;

 VAR_11.flags = VAR_2;

 FUNC_3(FUNC_7(VAR_8, 0, &VAR_11));

 FUNC_1(FUNC_6(VAR_9), 0);
 FUNC_0(VAR_8, "what", VAR_6);
 FUNC_0(VAR_8, "how", VAR_3);
 FUNC_0(VAR_8, "who", VAR_4);
 FUNC_0(VAR_8, "when", VAR_7);
 FUNC_0(VAR_8, "why", VAR_5);
 FUNC_0(VAR_8, "where", VAR_5 | VAR_6);

 FUNC_3(FUNC_5(&VAR_10, "stash/where"));
 FUNC_2("....\n", VAR_10.ptr);

 FUNC_4(&VAR_10);
}
