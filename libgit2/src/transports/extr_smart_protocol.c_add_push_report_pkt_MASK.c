
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * msg; void* ref; } ;
typedef TYPE_1__ push_status ;
struct TYPE_14__ {int unpack_ok; int status; } ;
typedef TYPE_2__ git_push ;
struct TYPE_15__ {int unpack_ok; } ;
typedef TYPE_3__ git_pkt_unpack ;
struct TYPE_16__ {int ref; } ;
typedef TYPE_4__ git_pkt_ok ;
struct TYPE_17__ {int msg; int ref; } ;
typedef TYPE_5__ git_pkt_ng ;
struct TYPE_18__ {int type; } ;
typedef TYPE_6__ git_pkt ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;




 TYPE_1__* FUNC_1 (int,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(git_push *VAR_2, git_pkt *VAR_3)
{
 push_status *VAR_4;

 switch (VAR_3->type) {
  case 129:
   VAR_4 = FUNC_1(1, sizeof(push_status));
   FUNC_0(VAR_4);
   VAR_4->msg = ((void*)0);
   VAR_4->ref = FUNC_2(((git_pkt_ok *)VAR_3)->ref);
   if (!VAR_4->ref ||
    FUNC_5(&VAR_2->status, VAR_4) < 0) {
    FUNC_4(VAR_4);
    return -1;
   }
   break;
  case 130:
   VAR_4 = FUNC_1(1, sizeof(push_status));
   FUNC_0(VAR_4);
   VAR_4->ref = FUNC_2(((git_pkt_ng *)VAR_3)->ref);
   VAR_4->msg = FUNC_2(((git_pkt_ng *)VAR_3)->msg);
   if (!VAR_4->ref || !VAR_4->msg ||
    FUNC_5(&VAR_2->status, VAR_4) < 0) {
    FUNC_4(VAR_4);
    return -1;
   }
   break;
  case 128:
   VAR_2->unpack_ok = ((git_pkt_unpack *)VAR_3)->unpack_ok;
   break;
  case 131:
   return VAR_1;
  default:
   FUNC_3(VAR_0, "report-status: protocol error");
   return -1;
 }

 return 0;
}
