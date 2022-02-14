
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_ca_slot {scalar_t__ slot_state; int camchange_count; int camchange_type; } ;
struct dvb_ca_private {int flags; int open; TYPE_1__* pub; struct dvb_ca_slot* slot_info; } ;
struct TYPE_2__ {int (* poll_slot_status ) (TYPE_1__*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_ca_private *VAR_9, int VAR_10)
{
 struct dvb_ca_slot *VAR_11 = &VAR_9->slot_info[VAR_10];
 int VAR_12;
 int VAR_13;
 int VAR_14;


 if (VAR_9->flags & VAR_2)
  return (FUNC_0(&VAR_11->camchange_count) != 0);


 VAR_12 = VAR_9->pub->poll_slot_status(VAR_9->pub, VAR_10, VAR_9->open);

 VAR_13 = (VAR_12 & VAR_4) ? 1 : 0;
 VAR_14 = (VAR_12 & VAR_3) ? 1 : 0;
 if (!VAR_14) {
  int VAR_15 = (VAR_11->slot_state != VAR_6);

  VAR_14 = (VAR_13 != VAR_15);
 }

 if (VAR_14) {
  if (!VAR_13)
   VAR_11->camchange_type = VAR_1;
  else
   VAR_11->camchange_type = VAR_0;
  FUNC_1(&VAR_11->camchange_count, 1);
 } else {
  if ((VAR_11->slot_state == VAR_8) &&
      (VAR_12 & VAR_5)) {

   VAR_11->slot_state = VAR_7;
  }
 }

 return VAR_14;
}
