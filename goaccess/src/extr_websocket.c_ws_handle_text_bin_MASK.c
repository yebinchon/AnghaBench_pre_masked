
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int pipeout; int (* onmessage ) (int ,TYPE_4__*) ;} ;
typedef TYPE_1__ WSServer ;
struct TYPE_13__ {int mask_offset; int fragmented; scalar_t__ opcode; int payloadsz; int payload; scalar_t__ buflen; } ;
typedef TYPE_2__ WSMessage ;
struct TYPE_14__ {scalar_t__ opcode; int fin; int mask; } ;
typedef TYPE_3__ WSFrame ;
struct TYPE_15__ {int status; TYPE_2__* message; TYPE_3__* frame; } ;
typedef TYPE_4__ WSClient ;
struct TYPE_16__ {int strict; scalar_t__ echomode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int,int *) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_5__ VAR_5 ;

__attribute__((used)) static void
FUNC_7 (WSClient * VAR_6, WSServer * VAR_7)
{
  WSFrame **VAR_8 = &VAR_6->frame;
  WSMessage **VAR_9 = &VAR_6->message;
  int VAR_10 = (*VAR_9)->mask_offset;


  if ((*VAR_9)->fragmented && (*VAR_8)->opcode != VAR_3) {
    VAR_6->status = VAR_2 | VAR_0;
    return;
  }



  FUNC_4 ((*VAR_9)->payload, (*VAR_9)->payloadsz, VAR_10, (*VAR_8)->mask);

  (*VAR_9)->buflen = 0;

  (*VAR_9)->fragmented = 1;

  if (!(*VAR_8)->fin)
    return;


  if ((*VAR_9)->opcode == VAR_4) {
    if (FUNC_5 ((*VAR_9)->payload, (*VAR_9)->payloadsz) != 0) {
      FUNC_2 (VAR_6, VAR_1, VAR_2 | VAR_0, ((void*)0));
      return;
    }
  }

  if ((*VAR_9)->opcode != VAR_3 && VAR_7->onmessage) {

    if (VAR_5.echomode)
      FUNC_3 (VAR_6, (*VAR_9)->opcode, (*VAR_9)->payload, (*VAR_9)->payloadsz);

    else if (!VAR_5.strict)
      FUNC_6 (VAR_7->pipeout, (*VAR_9)->payload, (*VAR_9)->payloadsz);
    else
      VAR_7->onmessage (VAR_7->pipeout, VAR_6);
  }
  FUNC_1 (VAR_6);
}
