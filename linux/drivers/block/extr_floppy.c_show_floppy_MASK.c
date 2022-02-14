
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ expires; } ;
struct TYPE_9__ {int func; } ;
struct TYPE_13__ {TYPE_2__ timer; TYPE_1__ work; } ;
struct TYPE_12__ {int jiffies; int status; int data; } ;
struct TYPE_11__ {int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 TYPE_6__ VAR_8 ;
 TYPE_6__ VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_4__* VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int ,int,int,int ,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_22;

 FUNC_2("\n");
 FUNC_2("floppy driver state\n");
 FUNC_2("-------------------\n");
 FUNC_2("now=%lu last interrupt=%lu diff=%lu last called handler=%ps\n",
  VAR_13, VAR_12, VAR_13 - VAR_12,
  VAR_14);

 FUNC_2("timeout_message=%s\n", VAR_21);
 FUNC_2("last output bytes:\n");
 for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++)
  FUNC_2("%2x %2x %lu\n",
   VAR_16[(VAR_22 + VAR_17) % VAR_3].data,
   VAR_16[(VAR_22 + VAR_17) % VAR_3].status,
   VAR_16[(VAR_22 + VAR_17) % VAR_3].jiffies);
 FUNC_2("last result at %lu\n", VAR_19);
 FUNC_2("last redo_fd_request at %lu\n", VAR_15);
 FUNC_3(VAR_2, "", VAR_0, 16, 1,
         VAR_18, VAR_20, 1);

 FUNC_2("status=%x\n", FUNC_1(VAR_1));
 FUNC_2("fdc_busy=%lu\n", VAR_10);
 if (VAR_7)
  FUNC_2("do_floppy=%ps\n", VAR_7);
 if (FUNC_4(&VAR_11))
  FUNC_2("floppy_work.func=%ps\n", VAR_11.func);
 if (FUNC_0(&VAR_9))
  FUNC_2("delayed work.function=%p expires=%ld\n",
         VAR_9.work.func,
         VAR_9.timer.expires - VAR_13);
 if (FUNC_0(&VAR_8))
  FUNC_2("timer_function=%p expires=%ld\n",
         VAR_8.work.func,
         VAR_8.timer.expires - VAR_13);

 FUNC_2("cont=%p\n", VAR_5);
 FUNC_2("current_req=%p\n", VAR_6);
 FUNC_2("command_status=%d\n", VAR_4);
 FUNC_2("\n");
}
