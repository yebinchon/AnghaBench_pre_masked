
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int closing; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_8__ {int status; } ;
typedef TYPE_2__ WSClient ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (int VAR_1, WSClient * VAR_2, WSServer * VAR_3)
{
  if (VAR_2->status & VAR_0) {
    VAR_3->closing = 1;
    return;
  }
  FUNC_0 (VAR_1, VAR_2, VAR_3);
}
