
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sbi_ret {scalar_t__ error; scalar_t__ value; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_8__ {int value; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int value; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_5__ FUNC_1 () ;
 TYPE_4__ FUNC_2 () ;
 TYPE_3__ FUNC_3 () ;
 TYPE_2__ FUNC_4 () ;
 TYPE_1__ FUNC_5 () ;
 struct sbi_ret FUNC_6 () ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_14 ;

void
FUNC_8(void)
{
 struct sbi_ret VAR_15;





 VAR_15 = FUNC_6();
 if (VAR_15.error != 0) {

  VAR_14 = 0;
  return;
 }


 VAR_14 = VAR_15.value;
 VAR_12 = FUNC_1().value;
 VAR_13 = FUNC_2().value;


 VAR_11 = FUNC_5().value;
 VAR_9 = FUNC_3().value;
 VAR_10 = FUNC_4().value;





 FUNC_0(FUNC_7(VAR_7) != 0,
     ("SBI doesn't implement sbi_set_timer()"));
 FUNC_0(FUNC_7(VAR_2) != 0,
     ("SBI doesn't implement sbi_console_putchar()"));
 FUNC_0(FUNC_7(VAR_1) != 0,
     ("SBI doesn't implement sbi_console_getchar()"));
 FUNC_0(FUNC_7(VAR_0) != 0,
     ("SBI doesn't implement sbi_clear_ipi()"));
 FUNC_0(FUNC_7(VAR_6) != 0,
     ("SBI doesn't implement sbi_send_ipi()"));
 FUNC_0(FUNC_7(VAR_3) != 0,
     ("SBI doesn't implement sbi_remote_fence_i()"));
 FUNC_0(FUNC_7(VAR_4) != 0,
     ("SBI doesn't implement sbi_remote_sfence_vma()"));
 FUNC_0(FUNC_7(VAR_5) != 0,
     ("SBI doesn't implement sbi_remote_sfence_vma_asid()"));
 FUNC_0(FUNC_7(VAR_8) != 0,
     ("SBI doesn't implement sbi_shutdown()"));
}
