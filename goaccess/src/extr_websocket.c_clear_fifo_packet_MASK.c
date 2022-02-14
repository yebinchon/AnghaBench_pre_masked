
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* packet; scalar_t__ hlen; int hdr; } ;
typedef TYPE_1__ WSPipeIn ;
struct TYPE_5__ {struct TYPE_5__* data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2 (WSPipeIn * VAR_0)
{
  FUNC_1 (VAR_0->hdr, 0, sizeof (VAR_0->hdr));
  VAR_0->hlen = 0;

  if (VAR_0->packet == ((void*)0))
    return;

  if (VAR_0->packet->data)
    FUNC_0 (VAR_0->packet->data);
  FUNC_0 (VAR_0->packet);
  VAR_0->packet = ((void*)0);
}
