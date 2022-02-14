
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct rxe_qp {TYPE_2__ req; TYPE_1__ resp; int valid; } ;
struct rxe_pkt_info {int opcode; int mask; } ;
struct rxe_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rxe_qp*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rxe_dev *VAR_7, struct rxe_pkt_info *VAR_8,
       struct rxe_qp *VAR_9)
{
 if (FUNC_2(!VAR_9->valid))
  goto err1;

 switch (FUNC_1(VAR_9)) {
 case 131:
  if (FUNC_2((VAR_8->opcode & VAR_1) != 0)) {
   FUNC_0("bad qp type\n");
   goto err1;
  }
  break;
 case 129:
  if (FUNC_2(!(VAR_8->opcode & VAR_2))) {
   FUNC_0("bad qp type\n");
   goto err1;
  }
  break;
 case 128:
 case 130:
 case 132:
  if (FUNC_2(!(VAR_8->opcode & VAR_3))) {
   FUNC_0("bad qp type\n");
   goto err1;
  }
  break;
 default:
  FUNC_0("unsupported qp type\n");
  goto err1;
 }

 if (VAR_8->mask & VAR_6) {
  if (FUNC_2(VAR_9->resp.state != VAR_5))
   goto err1;
 } else if (FUNC_2(VAR_9->req.state < VAR_5 ||
    VAR_9->req.state > VAR_4)) {
  goto err1;
 }

 return 0;

err1:
 return -VAR_0;
}
