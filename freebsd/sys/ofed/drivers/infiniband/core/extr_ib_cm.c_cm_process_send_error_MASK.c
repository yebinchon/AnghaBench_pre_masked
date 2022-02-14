
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_mad_send_buf {struct cm_id_private** context; } ;
struct TYPE_4__ {int send_status; } ;
struct ib_cm_event {TYPE_1__ param; int event; } ;
struct TYPE_5__ {int state; int (* cm_handler ) (TYPE_2__*,struct ib_cm_event*) ;} ;
struct cm_id_private {int lock; TYPE_2__ id; struct ib_mad_send_buf* msg; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
typedef enum ib_cm_state { ____Placeholder_ib_cm_state } ib_cm_state ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int FUNC_0 (struct cm_id_private*) ;
 int FUNC_1 (struct ib_mad_send_buf*) ;
 int FUNC_2 (struct cm_id_private*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct ib_cm_event*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,struct ib_cm_event*) ;

__attribute__((used)) static void FUNC_8(struct ib_mad_send_buf *VAR_5,
      enum ib_wc_status VAR_6)
{
 struct cm_id_private *VAR_7;
 struct ib_cm_event VAR_8;
 enum ib_cm_state VAR_9;
 int VAR_10;

 FUNC_4(&VAR_8, 0, sizeof VAR_8);
 VAR_7 = VAR_5->context[0];


 FUNC_5(&VAR_7->lock);
 VAR_9 = (enum ib_cm_state) (unsigned long) VAR_5->context[1];
 if (VAR_5 != VAR_7->msg || VAR_9 != VAR_7->id.state)
  goto discard;

 switch (VAR_9) {
 case 129:
 case 131:
  FUNC_2(VAR_7);
  VAR_8.event = VAR_3;
  break;
 case 130:
 case 132:
  FUNC_2(VAR_7);
  VAR_8.event = VAR_2;
  break;
 case 133:
  FUNC_0(VAR_7);
  VAR_8.event = VAR_0;
  break;
 case 128:
  VAR_7->id.state = VAR_1;
  VAR_8.event = VAR_4;
  break;
 default:
  goto discard;
 }
 FUNC_6(&VAR_7->lock);
 VAR_8.param.send_status = VAR_6;


 VAR_10 = VAR_7->id.cm_handler(&VAR_7->id, &VAR_8);
 FUNC_1(VAR_5);
 if (VAR_10)
  FUNC_3(&VAR_7->id);
 return;
discard:
 FUNC_6(&VAR_7->lock);
 FUNC_1(VAR_5);
}
