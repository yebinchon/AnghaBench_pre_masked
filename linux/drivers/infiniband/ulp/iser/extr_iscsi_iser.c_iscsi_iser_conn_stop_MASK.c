
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {int state_mutex; int stop_completion; int * iscsi_conn; } ;
struct iscsi_conn {struct iser_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct iscsi_cls_conn*,int) ;
 int FUNC_2 (struct iser_conn*) ;
 int FUNC_3 (char*,struct iscsi_conn*,struct iser_conn*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(struct iscsi_cls_conn *VAR_1, int VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_1->dd_data;
 struct iser_conn *VAR_4 = VAR_3->dd_data;

 FUNC_3("stopping iscsi_conn: %p, iser_conn: %p\n", VAR_3, VAR_4);





 if (VAR_4) {
  FUNC_4(&VAR_4->state_mutex);
  FUNC_4(&VAR_0);
  FUNC_2(VAR_4);
  FUNC_1(VAR_1, VAR_2);


  VAR_4->iscsi_conn = ((void*)0);
  VAR_3->dd_data = ((void*)0);
  FUNC_5(&VAR_0);

  FUNC_0(&VAR_4->stop_completion);
  FUNC_5(&VAR_4->state_mutex);
 } else {
  FUNC_1(VAR_1, VAR_2);
 }
}
