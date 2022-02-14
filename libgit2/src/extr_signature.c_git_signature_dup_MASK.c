
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sign; int offset; int time; } ;
struct TYPE_9__ {TYPE_1__ when; struct TYPE_9__* email; struct TYPE_9__* name; } ;
typedef TYPE_2__ git_signature ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 void* FUNC_2 (TYPE_2__*) ;

int FUNC_3(git_signature **VAR_0, const git_signature *VAR_1)
{
 git_signature *VAR_2;

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_2 = FUNC_1(1, sizeof(git_signature));
 FUNC_0(VAR_2);

 VAR_2->name = FUNC_2(VAR_1->name);
 FUNC_0(VAR_2->name);

 VAR_2->email = FUNC_2(VAR_1->email);
 FUNC_0(VAR_2->email);

 VAR_2->when.time = VAR_1->when.time;
 VAR_2->when.offset = VAR_1->when.offset;
 VAR_2->when.sign = VAR_1->when.sign;

 *VAR_0 = VAR_2;

 return 0;
}
