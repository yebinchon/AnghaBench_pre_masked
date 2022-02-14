
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iw_cm_event {int event; } ;
struct TYPE_4__ {int history; TYPE_2__* cm_id; } ;
struct c4iw_ep {TYPE_1__ com; int hwtid; } ;
typedef int event ;
struct TYPE_5__ {int (* event_handler ) (TYPE_2__*,struct iw_cm_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iw_cm_event*,int ,int) ;
 int FUNC_1 (char*,struct c4iw_ep*,TYPE_2__*,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*,struct iw_cm_event*) ;

__attribute__((used)) static void FUNC_4(struct c4iw_ep *VAR_2)
{
 struct iw_cm_event VAR_3;

 FUNC_1("ep %p tid %u\n", VAR_2, VAR_2->hwtid);
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.event = VAR_1;
 if (VAR_2->com.cm_id) {
  FUNC_1("peer close delivered ep %p cm_id %p tid %u\n",
    VAR_2, VAR_2->com.cm_id, VAR_2->hwtid);
  VAR_2->com.cm_id->event_handler(VAR_2->com.cm_id, &VAR_3);
  FUNC_2(VAR_0, &VAR_2->com.history);
 }
}
