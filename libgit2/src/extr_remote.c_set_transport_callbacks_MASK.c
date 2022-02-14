
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* set_callbacks ) (TYPE_1__*,int ,int *,int ,int ) ;} ;
typedef TYPE_1__ git_transport ;
struct TYPE_7__ {int payload; int certificate_check; int sideband_progress; } ;
typedef TYPE_2__ git_remote_callbacks ;


 int FUNC_0 (TYPE_1__*,int ,int *,int ,int ) ;

int FUNC_1(git_transport *VAR_0, const git_remote_callbacks *VAR_1)
{
 if (!VAR_0->set_callbacks || !VAR_1)
  return 0;

 return VAR_0->set_callbacks(VAR_0, VAR_1->sideband_progress, ((void*)0),
    VAR_1->certificate_check, VAR_1->payload);
}
