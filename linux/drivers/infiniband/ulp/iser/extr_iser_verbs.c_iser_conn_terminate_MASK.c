
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_conn {int qp; scalar_t__ cma_id; } ;
struct iser_conn {scalar_t__ iscsi_conn; int state; struct ib_conn ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct iser_conn*,int ,int ) ;
 int FUNC_3 (char*,struct iser_conn*,int) ;
 int FUNC_4 (char*,struct iser_conn*,int ) ;
 int FUNC_5 (scalar_t__) ;

int FUNC_6(struct iser_conn *VAR_2)
{
 struct ib_conn *VAR_3 = &VAR_2->ib_conn;
 int VAR_4 = 0;


 if (!FUNC_2(VAR_2, VAR_1,
           VAR_0))
  return 0;

 FUNC_4("iser_conn %p state %d\n", VAR_2, VAR_2->state);


 if (VAR_2->iscsi_conn)
  FUNC_1(VAR_2->iscsi_conn);






 if (VAR_3->cma_id) {
  VAR_4 = FUNC_5(VAR_3->cma_id);
  if (VAR_4)
   FUNC_3("Failed to disconnect, conn: 0x%p err %d\n",
     VAR_2, VAR_4);


  FUNC_0(VAR_3->qp);
 }

 return 1;
}
