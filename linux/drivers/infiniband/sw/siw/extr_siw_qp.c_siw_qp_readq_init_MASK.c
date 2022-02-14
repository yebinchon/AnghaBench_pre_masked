
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_sqe {int dummy; } ;
struct TYPE_2__ {int irq_size; int orq_size; } ;
struct siw_qp {void* irq; TYPE_1__ attrs; void* orq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct siw_qp*,char*,int,...) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct siw_qp *VAR_1, int VAR_2, int VAR_3)
{
 VAR_2 = FUNC_0(VAR_2);
 VAR_3 = FUNC_0(VAR_3);

 VAR_1->attrs.irq_size = VAR_2;
 VAR_1->attrs.orq_size = VAR_3;

 VAR_1->irq = FUNC_3(VAR_2 * sizeof(struct siw_sqe));
 if (!VAR_1->irq) {
  FUNC_1(VAR_1, "irq malloc for %d failed\n", VAR_2);
  VAR_1->attrs.irq_size = 0;
  return -VAR_0;
 }
 VAR_1->orq = FUNC_3(VAR_3 * sizeof(struct siw_sqe));
 if (!VAR_1->orq) {
  FUNC_1(VAR_1, "orq malloc for %d failed\n", VAR_3);
  VAR_1->attrs.orq_size = 0;
  VAR_1->attrs.irq_size = 0;
  FUNC_2(VAR_1->irq);
  return -VAR_0;
 }
 FUNC_1(VAR_1, "ORD %d, IRD %d\n", VAR_3, VAR_2);
 return 0;
}
