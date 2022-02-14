
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pipeout; int pipein; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_5__ {scalar_t__ pipeout; scalar_t__ pipein; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_2 (WSServer * VAR_3)
{
  VAR_2.pipein = VAR_2.pipein ? VAR_2.pipein : VAR_0;
  VAR_2.pipeout = VAR_2.pipeout ? VAR_2.pipeout : VAR_1;

  FUNC_0 (VAR_3->pipein);
  FUNC_1 (VAR_3->pipeout);
}
