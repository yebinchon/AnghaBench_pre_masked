
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * orh; } ;
struct nitrox_softreq {void* cb_arg; int (* callback ) (void*,int) ;TYPE_2__ resp; int tstamp; int status; } ;
struct TYPE_3__ {int completed; } ;
struct nitrox_device {TYPE_1__ stats; int timeout; } ;
struct nitrox_cmdq {int pending_count; struct nitrox_device* ndev; } ;
typedef int (* completion_t ) (void*,int) ;


 int FUNC_0 (struct nitrox_device*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 struct nitrox_softreq* FUNC_7 (struct nitrox_cmdq*) ;
 int FUNC_8 (struct nitrox_softreq*,struct nitrox_cmdq*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct nitrox_softreq*) ;
 int FUNC_11 (struct nitrox_softreq*) ;

__attribute__((used)) static void FUNC_12(struct nitrox_cmdq *VAR_1)
{
 struct nitrox_device *VAR_2 = VAR_1->ndev;
 struct nitrox_softreq *VAR_3;
 int VAR_4 = 0, VAR_5 = 0, VAR_6;
 completion_t VAR_7;
 void *VAR_8;


 VAR_6 = FUNC_4(&VAR_1->pending_count);

 while (VAR_4 < VAR_6) {
  VAR_3 = FUNC_7(VAR_1);
  if (!VAR_3)
   break;

  if (FUNC_4(&VAR_3->status) != VAR_0)
   break;


  if (!FUNC_11(VAR_3)) {

   if (!FUNC_5(VAR_3->tstamp, VAR_2->timeout))
    break;
   FUNC_6(FUNC_0(VAR_2),
         "Request timeout, orh 0x%016llx\n",
         FUNC_1(*VAR_3->resp.orh));
  }
  FUNC_3(&VAR_1->pending_count);
  FUNC_2(&VAR_2->stats.completed);

  FUNC_9();

  FUNC_8(VAR_3, VAR_1);

  VAR_5 = FUNC_1(*VAR_3->resp.orh) & 0xff;
  VAR_7 = VAR_3->callback;
  VAR_8 = VAR_3->cb_arg;
  FUNC_10(VAR_3);
  if (VAR_7)
   VAR_7(VAR_8, VAR_5);

  VAR_4++;
 }
}
