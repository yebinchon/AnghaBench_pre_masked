
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int mask; } ;
struct TYPE_8__ {int mask; } ;
struct TYPE_7__ {int mask; } ;
struct TYPE_6__ {int mask; } ;
struct TYPE_10__ {TYPE_4__ program_new_psw; TYPE_3__ io_new_psw; TYPE_2__ svc_new_psw; TYPE_1__ external_new_psw; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;

void FUNC_2(void)
{
 VAR_1.external_new_psw.mask |= VAR_0;
 VAR_1.svc_new_psw.mask |= VAR_0;
 VAR_1.io_new_psw.mask |= VAR_0;
 VAR_1.program_new_psw.mask |= VAR_0;

 FUNC_0(0,28);
 FUNC_1();
}
