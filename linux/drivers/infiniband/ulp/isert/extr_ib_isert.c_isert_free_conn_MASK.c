
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int qp; } ;
struct iscsi_conn {struct isert_conn* context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct isert_conn*) ;

__attribute__((used)) static void FUNC_2(struct iscsi_conn *VAR_0)
{
 struct isert_conn *VAR_1 = VAR_0->context;

 FUNC_0(VAR_1->qp);
 FUNC_1(VAR_1);
}
