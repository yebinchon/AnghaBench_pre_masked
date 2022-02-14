
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* push_transfer_progress ) (int ,int ,int ,int ) ;int payload; } ;
typedef TYPE_1__ git_remote_callbacks ;
struct TYPE_5__ {int received_bytes; int total_objects; int received_objects; } ;
typedef TYPE_2__ git_indexer_progress ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const git_indexer_progress *VAR_0, void *VAR_1)
{
 const git_remote_callbacks *VAR_2 = VAR_1;

 if (!VAR_2 || !VAR_2->push_transfer_progress)
  return 0;

 return VAR_2->push_transfer_progress(VAR_0->received_objects, VAR_0->total_objects, VAR_0->received_bytes,
        VAR_2->payload);
}
