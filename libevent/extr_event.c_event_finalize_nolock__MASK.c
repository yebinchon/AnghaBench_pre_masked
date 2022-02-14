
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event_base {int dummy; } ;
struct TYPE_3__ {int evcb_evfinalize; } ;
struct TYPE_4__ {TYPE_1__ evcb_cb_union; } ;
struct event {int ev_flags; TYPE_2__ ev_evcallback; int ev_closure; } ;
typedef int event_finalize_callback_fn ;
typedef int ev_uint8_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct event*,int ,int) ;
 int FUNC_1 (struct event*,int ) ;

__attribute__((used)) static int
FUNC_2(struct event_base *VAR_6, unsigned VAR_7, struct event *VAR_8, event_finalize_callback_fn VAR_9)
{
 ev_uint8_t VAR_10 = (VAR_7 & VAR_1) ?
     VAR_4 : VAR_3;

 FUNC_1(VAR_8, VAR_0);
 VAR_8->ev_closure = VAR_10;
 VAR_8->ev_evcallback.evcb_cb_union.evcb_evfinalize = VAR_9;
 FUNC_0(VAR_8, VAR_5, 1);
 VAR_8->ev_flags |= VAR_2;
 return 0;
}
