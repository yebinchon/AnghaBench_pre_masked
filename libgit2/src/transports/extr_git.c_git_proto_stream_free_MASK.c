
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * current_stream; } ;
typedef TYPE_1__ git_subtransport ;
typedef int git_smart_subtransport_stream ;
struct TYPE_7__ {struct TYPE_7__* url; int io; } ;
typedef TYPE_2__ git_proto_stream ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(git_smart_subtransport_stream *VAR_0)
{
 git_proto_stream *VAR_1;
 git_subtransport *VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = (git_proto_stream *)VAR_0;
 VAR_2 = FUNC_0(VAR_1);

 VAR_2->current_stream = ((void*)0);

 FUNC_2(VAR_1->io);
 FUNC_3(VAR_1->io);
 FUNC_1(VAR_1->url);
 FUNC_1(VAR_1);
}
