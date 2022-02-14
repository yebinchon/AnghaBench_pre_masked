
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {int stop_completion; } ;
struct iscsi_conn {struct iser_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int FUNC_0 (struct iscsi_cls_conn*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct iscsi_cls_conn *VAR_0)
{
 struct iscsi_conn *VAR_1;
 struct iser_conn *VAR_2;

 VAR_1 = VAR_0->dd_data;
 VAR_2 = VAR_1->dd_data;
 FUNC_1(&VAR_2->stop_completion);

 return FUNC_0(VAR_0);
}
