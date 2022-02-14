
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int data; int type; } ;
typedef TYPE_2__ WSPacket ;
struct TYPE_7__ {TYPE_1__* headers; } ;
typedef TYPE_3__ WSClient ;
struct TYPE_5__ {int * ws_accept; } ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (void *VAR_0, void *VAR_1)
{
  WSClient *VAR_2 = VAR_0;
  WSPacket *VAR_3 = VAR_1;

  if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
    return 1;

  if (VAR_2->headers == ((void*)0) || VAR_2->headers->ws_accept == ((void*)0))
    return 1;

  FUNC_0 (VAR_2, VAR_3->type, VAR_3->data, VAR_3->size);

  return 0;
}
