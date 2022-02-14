
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nmreq_option {size_t nro_size; scalar_t__ nro_status; int nro_reqtype; scalar_t__ nro_next; } ;
struct nmreq_opt_sync_kloop_mode {struct nmreq_option nro_opt; int mode; } ;
struct nmreq_opt_sync_kloop_eventfds {struct nmreq_option nro_opt; TYPE_1__* eventfds; } ;
struct TestContext {int sync_kloop_mode; } ;
typedef int modeopt ;
struct TYPE_2__ {int ioeventfd; int irqfd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nmreq_opt_sync_kloop_eventfds* FUNC_0 (int,size_t) ;
 int FUNC_1 (struct nmreq_option*,struct nmreq_option*) ;
 int FUNC_2 (struct TestContext*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct nmreq_opt_sync_kloop_eventfds*) ;
 int FUNC_5 (struct nmreq_opt_sync_kloop_mode*,int ,int) ;
 int FUNC_6 (struct TestContext*) ;
 int FUNC_7 (struct nmreq_option*,struct TestContext*) ;
 int FUNC_8 (struct TestContext*) ;

__attribute__((used)) static int
FUNC_9(struct TestContext *VAR_3)
{
 struct nmreq_opt_sync_kloop_eventfds *VAR_4 = ((void*)0);
 struct nmreq_opt_sync_kloop_mode VAR_5;
 struct nmreq_option VAR_6;
 int VAR_7;
 size_t VAR_8;
 int VAR_9, VAR_10;

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.nro_opt.nro_reqtype = VAR_2;
 VAR_5.mode = VAR_3->sync_kloop_mode;
 FUNC_7(&VAR_5.nro_opt, VAR_3);

 VAR_7 = FUNC_6(VAR_3);
 VAR_8 = sizeof(*VAR_4) + VAR_7 * sizeof(VAR_4->eventfds[0]);
 VAR_4 = FUNC_0(1, VAR_8);
 VAR_4->nro_opt.nro_next = 0;
 VAR_4->nro_opt.nro_reqtype = VAR_1;
 VAR_4->nro_opt.nro_status = 0;
 VAR_4->nro_opt.nro_size = VAR_8;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  int VAR_11 = FUNC_3(0, 0);

  VAR_4->eventfds[VAR_10].ioeventfd = VAR_11;
  VAR_11 = FUNC_3(0, 0);
  VAR_4->eventfds[VAR_10].irqfd = VAR_11;
 }

 FUNC_7(&VAR_4->nro_opt, VAR_3);
 VAR_6 = VAR_4->nro_opt;

 VAR_9 = FUNC_8(VAR_3);
 if (VAR_9 != 0) {
  FUNC_4(VAR_4);
  FUNC_2(VAR_3);
  return VAR_9;
 }

 VAR_6.nro_status = 0;




 VAR_9 = FUNC_1(&VAR_4->nro_opt, &VAR_6);
 FUNC_4(VAR_4);
 FUNC_2(VAR_3);

 return VAR_9;
}
