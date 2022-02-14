
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* download_pack ) (TYPE_1__*,int ,int *,int *,void*) ;} ;
typedef TYPE_1__ git_transport ;
struct TYPE_8__ {void* payload; int * transfer_progress; } ;
typedef TYPE_2__ git_remote_callbacks ;
struct TYPE_9__ {int stats; int repo; int need_pack; TYPE_1__* transport; } ;
typedef TYPE_3__ git_remote ;
typedef int * git_indexer_progress_cb ;


 int FUNC_0 (TYPE_1__*,int ,int *,int *,void*) ;

int FUNC_1(git_remote *VAR_0, const git_remote_callbacks *VAR_1)
{
 git_transport *VAR_2 = VAR_0->transport;
 git_indexer_progress_cb VAR_3 = ((void*)0);
 void *VAR_4 = ((void*)0);

 if (!VAR_0->need_pack)
  return 0;

 if (VAR_1) {
  VAR_3 = VAR_1->transfer_progress;
  VAR_4 = VAR_1->payload;
 }

 return VAR_2->download_pack(VAR_2, VAR_0->repo, &VAR_0->stats, VAR_3, VAR_4);
}
