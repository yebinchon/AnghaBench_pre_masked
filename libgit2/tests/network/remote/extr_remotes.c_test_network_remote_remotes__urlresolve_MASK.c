
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* payload; int resolve_url; } ;
typedef TYPE_1__ git_remote_callbacks ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;

void FUNC_8(void)
{
 git_buf VAR_6 = VAR_0;

 git_remote_callbacks VAR_7 = VAR_3;
 VAR_7.resolve_url = VAR_5;
 VAR_7.payload = "payload";

 FUNC_1(FUNC_5(VAR_4), "test");
 FUNC_1(FUNC_7(VAR_4), "git://github.com/libgit2/libgit2");
 FUNC_0(FUNC_6(VAR_4) == ((void*)0));

 FUNC_2(FUNC_4(&VAR_6, VAR_4, VAR_1, &VAR_7));
 FUNC_1(VAR_6.ptr, "fetchresolve");

 FUNC_2(FUNC_4(&VAR_6, VAR_4, VAR_2, &VAR_7));
 FUNC_1(VAR_6.ptr, "pushresolve");

 FUNC_3(&VAR_6);
}
