
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_cqe; } ;
struct rxe_dev {TYPE_1__ attr; } ;
struct rxe_cq {int queue; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct rxe_dev *VAR_1, struct rxe_cq *VAR_2,
      int VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_3 <= 0) {
  FUNC_0("cqe(%d) <= 0\n", VAR_3);
  goto err1;
 }

 if (VAR_3 > VAR_1->attr.max_cqe) {
  FUNC_0("cqe(%d) > max_cqe(%d)\n",
   VAR_3, VAR_1->attr.max_cqe);
  goto err1;
 }

 if (VAR_2) {
  VAR_5 = FUNC_1(VAR_2->queue);
  if (VAR_3 < VAR_5) {
   FUNC_0("cqe(%d) < current # elements in queue (%d)",
    VAR_3, VAR_5);
   goto err1;
  }
 }

 return 0;

err1:
 return -VAR_0;
}
