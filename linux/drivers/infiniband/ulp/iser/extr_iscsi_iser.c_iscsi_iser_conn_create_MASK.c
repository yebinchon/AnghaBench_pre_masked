
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_conn {int max_recv_dlength; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 struct iscsi_cls_conn* FUNC_0 (struct iscsi_cls_session*,int ,int ) ;

__attribute__((used)) static struct iscsi_cls_conn *
FUNC_1(struct iscsi_cls_session *VAR_1,
         uint32_t VAR_2)
{
 struct iscsi_conn *VAR_3;
 struct iscsi_cls_conn *VAR_4;

 VAR_4 = FUNC_0(VAR_1, 0, VAR_2);
 if (!VAR_4)
  return ((void*)0);
 VAR_3 = VAR_4->dd_data;





 VAR_3->max_recv_dlength = VAR_0;

 return VAR_4;
}
