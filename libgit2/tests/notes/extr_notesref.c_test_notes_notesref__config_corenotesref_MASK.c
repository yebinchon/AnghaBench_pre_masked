
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int *,int ,int *,int ,int ,int *,char*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,char*,int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,char*,char*) ;

void FUNC_16(void)
{
 git_oid VAR_6, VAR_7;
 git_buf VAR_8 = VAR_0;

 FUNC_2(FUNC_15(&VAR_5, "alice", "alice@example.com"));
 FUNC_2(FUNC_13(&VAR_6, "8496071c1b46c854b31185ea97743be6a8774479"));

 FUNC_2(FUNC_14(&VAR_2, VAR_4));

 FUNC_2(FUNC_6(VAR_2, "core.notesRef", "refs/notes/mydefaultnotesref"));

 FUNC_2(FUNC_7(&VAR_7, VAR_4, ((void*)0), VAR_5, VAR_5, &VAR_6, "test123test\n", 0));

 FUNC_2(FUNC_12(&VAR_3, VAR_4, ((void*)0), &VAR_6));
 FUNC_1("test123test\n", FUNC_11(VAR_3));
 FUNC_0(FUNC_10(VAR_3), &VAR_7);

 FUNC_9(VAR_3);

 FUNC_2(FUNC_12(&VAR_3, VAR_4, "refs/notes/mydefaultnotesref", &VAR_6));
 FUNC_1("test123test\n", FUNC_11(VAR_3));
 FUNC_0(FUNC_10(VAR_3), &VAR_7);

 FUNC_2(FUNC_8(&VAR_8, VAR_4));
 FUNC_1("refs/notes/mydefaultnotesref", VAR_8.ptr);
 FUNC_3(&VAR_8);

 FUNC_2(FUNC_5(VAR_2, "core.notesRef"));

 FUNC_2(FUNC_8(&VAR_8, VAR_4));
 FUNC_1(VAR_1, VAR_8.ptr);

 FUNC_4(&VAR_8);
}
