
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int colist; } ;
typedef TYPE_2__ WSServer ;
struct TYPE_11__ {int len; int data; int type; } ;
typedef TYPE_3__ WSPacket ;
struct TYPE_12__ {TYPE_1__* headers; } ;
typedef TYPE_4__ WSClient ;
struct TYPE_9__ {int * ws_accept; } ;


 TYPE_4__* FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (WSServer * VAR_0, int VAR_1, WSPacket * VAR_2)
{
  WSClient *VAR_3 = ((void*)0);

  if (!(VAR_3 = FUNC_0 (VAR_1, &VAR_0->colist)))
    return;

  if (VAR_3->headers == ((void*)0) || VAR_3->headers->ws_accept == ((void*)0))
    return;
  FUNC_1 (VAR_3, VAR_2->type, VAR_2->data, VAR_2->len);
}
