
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {scalar_t__ context; } ;
struct iser_conn {scalar_t__ iscsi_conn; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct iser_conn*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct rdma_cm_id *VAR_1)
{
 struct iser_conn *VAR_2 = (struct iser_conn *)VAR_1->context;

 if (FUNC_1(VAR_2)) {
  if (VAR_2->iscsi_conn)
   FUNC_0(VAR_2->iscsi_conn,
        VAR_0);
  else
   FUNC_2("iscsi_iser connection isn't bound\n");
 }
}
