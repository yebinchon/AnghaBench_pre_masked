
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* loop; } ;
typedef TYPE_2__ codegen_scope ;
struct TYPE_6__ {struct TYPE_6__* prev; int pc3; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(codegen_scope *VAR_1, int VAR_2)
{
  if (VAR_2) {
    FUNC_2(VAR_1, VAR_0, FUNC_0());
  }
  FUNC_1(VAR_1, VAR_1->loop->pc3);
  VAR_1->loop = VAR_1->loop->prev;
  if (VAR_2) FUNC_3();
}
