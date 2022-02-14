
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WSServer ;
struct TYPE_9__ {int opcode; int fragmented; } ;
typedef TYPE_1__ WSMessage ;
struct TYPE_10__ {int opcode; } ;
typedef TYPE_2__ WSFrame ;
struct TYPE_11__ {int status; TYPE_1__* message; TYPE_2__* frame; } ;
typedef TYPE_3__ WSClient ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;





 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_5 (WSClient * VAR_2, WSServer * VAR_3)
{
  WSFrame **VAR_4 = &VAR_2->frame;
  WSMessage **VAR_5 = &VAR_2->message;

  switch ((*VAR_4)->opcode) {
  case 131:
    FUNC_0 (("CONTINUATION\n"));

    if (!(*VAR_5)->fragmented) {
      VAR_2->status = VAR_1 | VAR_0;
      break;
    }
    FUNC_4 (VAR_2, VAR_3);
    break;
  case 128:
  case 132:
    FUNC_0 (("TEXT\n"));
    VAR_2->message->opcode = (*VAR_4)->opcode;
    FUNC_4 (VAR_2, VAR_3);
    break;
  case 129:
    FUNC_0 (("PONG\n"));
    FUNC_3 (VAR_2);
    break;
  case 130:
    FUNC_0 (("PING\n"));
    FUNC_2 (VAR_2);
    break;
  default:
    FUNC_0 (("CLOSE\n"));
    FUNC_1 (VAR_2);
  }
}
