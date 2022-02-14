
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int md; int cipher; } ;
struct TYPE_6__ {TYPE_1__ generating; } ;
struct TYPE_7__ {TYPE_2__ vars; int update_thread; } ;
struct TYPE_8__ {TYPE_3__ ticket; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
    VAR_0.ticket.update_thread = VAR_1;

    VAR_0.ticket.vars.generating.cipher = FUNC_0();

    VAR_0.ticket.vars.generating.md = FUNC_1();
}
