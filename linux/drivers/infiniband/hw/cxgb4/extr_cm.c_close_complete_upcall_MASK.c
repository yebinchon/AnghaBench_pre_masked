
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iw_cm_event {int status; int event; } ;
struct TYPE_5__ {int history; TYPE_1__* cm_id; } ;
struct c4iw_ep {TYPE_3__ com; int hwtid; } ;
typedef int event ;
struct TYPE_4__ {int (* event_handler ) (TYPE_1__*,struct iw_cm_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct iw_cm_event*,int ,int) ;
 int FUNC_2 (char*,struct c4iw_ep*,TYPE_1__*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,struct iw_cm_event*) ;

__attribute__((used)) static void FUNC_5(struct c4iw_ep *VAR_2, int VAR_3)
{
 struct iw_cm_event VAR_4;

 FUNC_2("ep %p tid %u\n", VAR_2, VAR_2->hwtid);
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.event = VAR_1;
 VAR_4.status = VAR_3;
 if (VAR_2->com.cm_id) {
  FUNC_2("close complete delivered ep %p cm_id %p tid %u\n",
    VAR_2, VAR_2->com.cm_id, VAR_2->hwtid);
  VAR_2->com.cm_id->event_handler(VAR_2->com.cm_id, &VAR_4);
  FUNC_0(&VAR_2->com);
  FUNC_3(VAR_0, &VAR_2->com.history);
 }
}
