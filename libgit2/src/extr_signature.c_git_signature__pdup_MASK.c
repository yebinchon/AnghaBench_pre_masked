
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sign; int offset; int time; } ;
struct TYPE_9__ {TYPE_1__ when; struct TYPE_9__* email; struct TYPE_9__* name; } ;
typedef TYPE_2__ git_signature ;
typedef int git_pool ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,TYPE_2__*) ;

int FUNC_3(git_signature **VAR_0, const git_signature *VAR_1, git_pool *VAR_2)
{
 git_signature *VAR_3;

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_3 = FUNC_1(VAR_2, sizeof(git_signature));
 FUNC_0(VAR_3);

 VAR_3->name = FUNC_2(VAR_2, VAR_1->name);
 FUNC_0(VAR_3->name);

 VAR_3->email = FUNC_2(VAR_2, VAR_1->email);
 FUNC_0(VAR_3->email);

 VAR_3->when.time = VAR_1->when.time;
 VAR_3->when.offset = VAR_1->when.offset;
 VAR_3->when.sign = VAR_1->when.sign;

 *VAR_0 = VAR_3;

 return 0;
}
