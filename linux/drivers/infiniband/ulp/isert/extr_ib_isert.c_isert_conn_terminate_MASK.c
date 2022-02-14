
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {scalar_t__ state; int cm_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct isert_conn*,scalar_t__) ;
 int FUNC_1 (char*,struct isert_conn*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct isert_conn *VAR_1)
{
 int VAR_2;

 if (VAR_1->state >= VAR_0)
  return;

 FUNC_0("Terminating conn %p state %d\n",
     VAR_1, VAR_1->state);
 VAR_1->state = VAR_0;
 VAR_2 = FUNC_2(VAR_1->cm_id);
 if (VAR_2)
  FUNC_1("Failed rdma_disconnect isert_conn %p\n",
      VAR_1);
}
