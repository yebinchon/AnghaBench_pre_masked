
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_transport ;
struct TYPE_5__ {int free; int close; int action; } ;
struct TYPE_6__ {TYPE_1__ parent; int * owner; } ;
typedef TYPE_2__ git_subtransport ;
typedef int git_smart_subtransport ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int,int) ;

int FUNC_3(git_smart_subtransport **VAR_3, git_transport *VAR_4, void *VAR_5)
{
 git_subtransport *VAR_6;

 FUNC_1(VAR_5);

 if (!VAR_3)
  return -1;

 VAR_6 = FUNC_2(1, sizeof(git_subtransport));
 FUNC_0(VAR_6);

 VAR_6->owner = VAR_4;
 VAR_6->parent.action = VAR_0;
 VAR_6->parent.close = VAR_1;
 VAR_6->parent.free = VAR_2;

 *VAR_3 = (git_smart_subtransport *) VAR_6;
 return 0;
}
