
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* message; } ;
typedef TYPE_1__ WSClient ;
struct TYPE_5__ {struct TYPE_5__* payload; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1 (WSClient * VAR_0)
{
  if (VAR_0->message && VAR_0->message->payload)
    FUNC_0 (VAR_0->message->payload);
  if (VAR_0->message)
    FUNC_0 (VAR_0->message);
  VAR_0->message = ((void*)0);
}
