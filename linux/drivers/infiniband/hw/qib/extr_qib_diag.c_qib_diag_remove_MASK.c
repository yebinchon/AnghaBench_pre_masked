
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_diag_client {struct qib_diag_client* next; } ;
struct qib_devdata {scalar_t__ diag_client; int diag_device; int diag_cdev; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct qib_diag_client* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qib_diag_client*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct qib_devdata*) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct qib_devdata *VAR_4)
{
 struct qib_diag_client *VAR_5;

 if (FUNC_0(&VAR_2))
  FUNC_2(&VAR_1, &VAR_3);

 FUNC_2(&VAR_4->diag_cdev, &VAR_4->diag_device);





 while (VAR_4->diag_client)
  FUNC_4(VAR_4->diag_client);


 while (VAR_0) {
  VAR_5 = VAR_0;
  VAR_0 = VAR_5->next;
  FUNC_1(VAR_5);
 }

 FUNC_3(VAR_4);
}
