
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_ca_private {int flags; TYPE_1__* slot_info; TYPE_2__* pub; } ;
struct TYPE_4__ {int (* poll_slot_status ) (TYPE_2__*,int,int ) ;} ;
struct TYPE_3__ {int slot_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_ca_private*) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_ca_private *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;





 if ((!(VAR_3->flags & VAR_0)) &&
     (VAR_3->pub->poll_slot_status)) {
  VAR_6 = VAR_3->pub->poll_slot_status(VAR_3->pub, VAR_4, 0);
  if (!(VAR_6 &
   VAR_1)) {
   VAR_3->slot_info[VAR_4].slot_state = VAR_2;
   FUNC_0(VAR_3);
   VAR_5 = 1;
  }
 }
 return VAR_5;
}
