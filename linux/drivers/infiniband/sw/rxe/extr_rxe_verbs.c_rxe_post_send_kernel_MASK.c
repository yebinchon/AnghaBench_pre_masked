
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int task; } ;
struct TYPE_5__ {scalar_t__ state; int task; } ;
struct rxe_qp {TYPE_3__ comp; TYPE_2__ req; } ;
struct ib_send_wr {int send_flags; int num_sge; struct ib_send_wr* next; TYPE_1__* sg_list; int opcode; } ;
struct TYPE_4__ {scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct rxe_qp*,struct ib_send_wr const*,unsigned int,unsigned int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int FUNC_3 (int ,struct rxe_qp*) ;

__attribute__((used)) static int FUNC_4(struct rxe_qp *VAR_4, const struct ib_send_wr *VAR_5,
    const struct ib_send_wr **VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8;
 unsigned int VAR_9 = 0;
 int VAR_10;

 while (VAR_5) {
  VAR_8 = FUNC_3(VAR_5->opcode, VAR_4);
  if (FUNC_2(!VAR_8)) {
   VAR_7 = -VAR_0;
   *VAR_6 = VAR_5;
   break;
  }

  if (FUNC_2((VAR_5->send_flags & VAR_1) &&
        !(VAR_8 & VAR_3))) {
   VAR_7 = -VAR_0;
   *VAR_6 = VAR_5;
   break;
  }

  VAR_9 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_5->num_sge; VAR_10++)
   VAR_9 += VAR_5->sg_list[VAR_10].length;

  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_8, VAR_9);

  if (VAR_7) {
   *VAR_6 = VAR_5;
   break;
  }
  VAR_5 = VAR_5->next;
 }

 FUNC_1(&VAR_4->req.task, 1);
 if (FUNC_2(VAR_4->req.state == VAR_2))
  FUNC_1(&VAR_4->comp.task, 1);

 return VAR_7;
}
