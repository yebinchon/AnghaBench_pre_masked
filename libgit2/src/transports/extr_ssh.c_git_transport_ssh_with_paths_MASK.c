
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ wrapped; } ;
typedef TYPE_1__ transport_smart ;
struct TYPE_7__ {void* cmd_receivepack; void* cmd_uploadpack; } ;
typedef TYPE_2__ ssh_subtransport ;
typedef int git_transport ;
struct TYPE_8__ {int count; int * strings; } ;
typedef TYPE_3__ git_strarray ;
struct TYPE_9__ {int * member_2; int member_1; int member_0; } ;
typedef TYPE_4__ git_smart_subtransport_definition ;
typedef void git_remote ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int **) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 int FUNC_5 (int **,void*,TYPE_4__*) ;

int FUNC_6(git_transport **VAR_4, git_remote *VAR_5, void *VAR_6)
{
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);

 FUNC_2(VAR_4);
 *VAR_4 = ((void*)0);

 FUNC_4(VAR_1, "cannot create SSH transport. Library was built without SSH support");
 return -1;

}
