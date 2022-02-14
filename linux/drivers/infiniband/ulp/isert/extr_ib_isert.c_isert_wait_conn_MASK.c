
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int release_work; int qp; int mutex; } ;
struct iscsi_conn {struct isert_conn* context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct isert_conn*) ;
 int FUNC_2 (char*,struct isert_conn*) ;
 int FUNC_3 (struct iscsi_conn*) ;
 int VAR_0 ;
 int FUNC_4 (struct iscsi_conn*) ;
 int FUNC_5 (struct isert_conn*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct iscsi_conn *VAR_1)
{
 struct isert_conn *VAR_2 = VAR_1->context;

 FUNC_2("Starting conn %p\n", VAR_2);

 FUNC_6(&VAR_2->mutex);
 FUNC_1(VAR_2);
 FUNC_7(&VAR_2->mutex);

 FUNC_0(VAR_2->qp);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_2);

 FUNC_8(VAR_0, &VAR_2->release_work);
}
