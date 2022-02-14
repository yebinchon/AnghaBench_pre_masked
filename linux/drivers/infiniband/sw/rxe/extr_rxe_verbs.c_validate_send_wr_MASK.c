
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_sq {int max_sge; unsigned int max_inline; } ;
struct rxe_qp {struct rxe_sq sq; } ;
struct ib_send_wr {int num_sge; int send_flags; } ;
struct TYPE_2__ {int remote_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* FUNC_0 (struct ib_send_wr const*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct rxe_qp *VAR_3, const struct ib_send_wr *VAR_4,
       unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7 = VAR_4->num_sge;
 struct rxe_sq *VAR_8 = &VAR_3->sq;

 if (FUNC_1(VAR_7 > VAR_8->max_sge))
  goto err1;

 if (FUNC_1(VAR_5 & VAR_2)) {
  if (VAR_6 < 8)
   goto err1;

  if (FUNC_0(VAR_4)->remote_addr & 0x7)
   goto err1;
 }

 if (FUNC_1((VAR_4->send_flags & VAR_1) &&
       (VAR_6 > VAR_8->max_inline)))
  goto err1;

 return 0;

err1:
 return -VAR_0;
}
