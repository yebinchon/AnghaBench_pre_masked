
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; scalar_t__ time; } ;
struct TYPE_5__ {TYPE_1__ when; int name; int email; } ;
typedef TYPE_2__ git_signature ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;

void FUNC_11(void)
{
 git_reference *VAR_2;
 git_oid VAR_3;
 git_commit *VAR_4;
 const git_signature *VAR_5;





 FUNC_2(FUNC_7(&VAR_2, VAR_0, "refs/heads/haacked"));

 FUNC_10(VAR_1, FUNC_8(VAR_2));
 FUNC_2(FUNC_9(&VAR_3, VAR_1));

 FUNC_2(FUNC_5(&VAR_4, VAR_0, FUNC_8(VAR_2)));

 VAR_5 = FUNC_3(VAR_4);
 FUNC_1("foo@example.com", VAR_5->email);
 FUNC_1("Yu V. Bin Haacked", VAR_5->name);
 FUNC_0(1323847743, (int)VAR_5->when.time);
 FUNC_0(60, VAR_5->when.offset);

 FUNC_4(VAR_4);
 FUNC_6(VAR_2);
}
