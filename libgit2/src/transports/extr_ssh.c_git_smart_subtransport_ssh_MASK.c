
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int transport_smart ;
struct TYPE_5__ {int free; int close; int action; } ;
struct TYPE_6__ {TYPE_1__ parent; int * owner; } ;
typedef TYPE_2__ ssh_subtransport ;
typedef void git_transport ;
typedef int git_smart_subtransport ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int **) ;
 TYPE_2__* FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(
 git_smart_subtransport **VAR_4, git_transport *VAR_5, void *VAR_6)
{
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);

 FUNC_2(VAR_4);
 *VAR_4 = ((void*)0);

 FUNC_4(VAR_0, "cannot create SSH transport. Library was built without SSH support");
 return -1;

}
