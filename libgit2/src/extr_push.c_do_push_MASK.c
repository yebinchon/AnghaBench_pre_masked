
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int (* push ) (TYPE_3__*,TYPE_5__*,TYPE_4__ const*) ;} ;
typedef TYPE_3__ git_transport ;
struct TYPE_16__ {int (* push_negotiation ) (int const**,int ,int ) ;int payload; scalar_t__ pack_progress; } ;
typedef TYPE_4__ git_remote_callbacks ;
typedef int git_push_update ;
struct TYPE_14__ {int length; scalar_t__ contents; } ;
struct TYPE_17__ {int pb; TYPE_2__ updates; int pb_parallelism; int repo; TYPE_1__* remote; } ;
typedef TYPE_5__ git_push ;
struct TYPE_13__ {TYPE_3__* transport; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int const**,int ,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*,TYPE_4__ const*) ;

__attribute__((used)) static int FUNC_9(git_push *VAR_1, const git_remote_callbacks *VAR_2)
{
 int VAR_3 = 0;
 git_transport *VAR_4 = VAR_1->remote->transport;

 if (!VAR_4->push) {
  FUNC_1(VAR_0, "remote transport doesn't support push");
  VAR_3 = -1;
  goto on_error;
 }







 if ((VAR_3 = FUNC_3(&VAR_1->pb, VAR_1->repo)) < 0)
  goto on_error;

 FUNC_5(VAR_1->pb, VAR_1->pb_parallelism);

 if (VAR_2 && VAR_2->pack_progress)
  if ((VAR_3 = FUNC_4(VAR_1->pb, VAR_2->pack_progress, VAR_2->payload)) < 0)
   goto on_error;

 if ((VAR_3 = FUNC_0(VAR_1)) < 0)
  goto on_error;

 if (VAR_2 && VAR_2->push_negotiation &&
     (VAR_3 = VAR_2->push_negotiation((const git_push_update **) VAR_1->updates.contents,
       VAR_1->updates.length, VAR_2->payload)) < 0)
     goto on_error;

 if ((VAR_3 = FUNC_6(VAR_1)) < 0 ||
     (VAR_3 = VAR_4->push(VAR_4, VAR_1, VAR_2)) < 0)
  goto on_error;

on_error:
 FUNC_2(VAR_1->pb);
 return VAR_3;
}
