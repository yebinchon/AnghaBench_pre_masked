
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct gb_operation_msg_hdr {int operation_id; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct gb_operation {TYPE_2__ timer; TYPE_1__* request; scalar_t__ id; scalar_t__ callback; struct gb_connection* connection; } ;
struct gb_connection {int op_cycle; } ;
typedef int gfp_t ;
typedef scalar_t__ gb_operation_callback ;
struct TYPE_3__ {struct gb_operation_msg_hdr* header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct gb_operation*) ;
 int FUNC_6 (struct gb_operation*) ;
 scalar_t__ FUNC_7 (struct gb_operation*) ;
 int FUNC_8 (struct gb_operation*) ;
 int FUNC_9 (struct gb_operation*) ;
 int FUNC_10 (struct gb_operation*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (unsigned int) ;

int FUNC_12(struct gb_operation *VAR_5,
         gb_operation_callback VAR_6,
         unsigned int VAR_7,
         gfp_t VAR_8)
{
 struct gb_connection *VAR_9 = VAR_5->connection;
 struct gb_operation_msg_hdr *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 if (FUNC_3(VAR_9))
  return -VAR_0;

 if (!VAR_6)
  return -VAR_2;






 VAR_5->callback = VAR_6;





 if (FUNC_7(VAR_5)) {
  VAR_5->id = 0;
 } else {
  VAR_11 = (unsigned int)FUNC_1(&VAR_9->op_cycle);
  VAR_5->id = (u16)(VAR_11 % VAR_3 + 1);
 }

 VAR_10 = VAR_5->request->header;
 VAR_10->operation_id = FUNC_2(VAR_5->id);

 FUNC_10(VAR_5, -VAR_1);





 FUNC_5(VAR_5);
 VAR_12 = FUNC_6(VAR_5);
 if (VAR_12)
  goto err_put;

 VAR_12 = FUNC_4(VAR_5->request, VAR_8);
 if (VAR_12)
  goto err_put_active;

 if (VAR_7) {
  VAR_5->timer.expires = VAR_4 + FUNC_11(VAR_7);
  FUNC_0(&VAR_5->timer);
 }

 return 0;

err_put_active:
 FUNC_9(VAR_5);
err_put:
 FUNC_8(VAR_5);

 return VAR_12;
}
