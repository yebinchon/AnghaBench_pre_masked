
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tail; } ;
struct ocrdma_qp {TYPE_1__ sq; } ;
struct ocrdma_cqe {int dummy; } ;
struct ib_wc {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;
 int FUNC_2 (struct ocrdma_qp*,struct ib_wc*,int ) ;

__attribute__((used)) static int FUNC_3(struct ib_wc *VAR_0, struct ocrdma_cqe *VAR_1,
      struct ocrdma_qp *VAR_2, int VAR_3)
{
 FUNC_2(VAR_2, VAR_0, VAR_2->sq.tail);
 FUNC_0(&VAR_2->sq);

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
