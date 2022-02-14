
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_notifier {int lock; scalar_t__ cec_adap; int phys_addr; int conn_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct cec_notifier*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct cec_notifier *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_4(&VAR_1->lock);
 FUNC_3(&VAR_1->conn_info, 0, sizeof(VAR_1->conn_info));
 VAR_1->phys_addr = VAR_0;
 if (VAR_1->cec_adap) {
  FUNC_1(VAR_1->cec_adap);
  FUNC_2(VAR_1->cec_adap, ((void*)0));
 }
 FUNC_5(&VAR_1->lock);
 FUNC_0(VAR_1);
}
