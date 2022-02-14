
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char** member_0; int member_1; } ;
typedef TYPE_2__ git_strarray ;
typedef int git_reference ;
struct TYPE_10__ {char* src_refname; char* dst_refname; int src; int dst; } ;
typedef TYPE_3__ git_push_update ;
struct TYPE_8__ {TYPE_3__* payload; int push_negotiation; } ;
struct TYPE_11__ {TYPE_1__ callbacks; } ;
typedef TYPE_4__ git_push_options ;
typedef int git_oid ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_2__ const*,TYPE_4__*) ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_4 ;

void FUNC_8(void)
{
 git_push_options VAR_5 = VAR_0;
 git_reference *VAR_6;
 git_push_update VAR_7;
 char *VAR_8 = "refs/heads/empty-tree";
 const git_strarray VAR_9 = {
  &VAR_8,
  1,
 };

 FUNC_1(&VAR_6, VAR_1);

 VAR_7.src_refname = "refs/heads/empty-tree";
 VAR_7.dst_refname = "refs/heads/empty-tree";
 FUNC_2(&VAR_7.dst, FUNC_5(VAR_6));
 FUNC_7(&VAR_7.src, 0, sizeof(git_oid));

 VAR_5.callbacks.push_negotiation = VAR_4;
 VAR_5.callbacks.payload = &VAR_7;
 FUNC_0(FUNC_6(VAR_2, &VAR_9, &VAR_5));

 FUNC_3(VAR_6);
 FUNC_0(FUNC_4(&VAR_6, VAR_3, "refs/heads/empty-tree"));
 FUNC_3(VAR_6);
}
