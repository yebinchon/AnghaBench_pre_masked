
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_init_attr {scalar_t__ qp_type; int recv_cq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,void*,int ,int ) ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ib_qp_init_attr *VAR_6,
      void *VAR_7)
{
 int VAR_8;

 if (VAR_6->qp_type == VAR_0)
  return;

 VAR_8 = FUNC_1(VAR_6->recv_cq);

 if (VAR_6->qp_type == VAR_1) {
  if (VAR_8 == 128)
   FUNC_0(VAR_5, VAR_7, VAR_4, VAR_3);

  return;
 }

 FUNC_0(VAR_7, VAR_7, VAR_4,
   VAR_8 == 128 ? VAR_3 :
      VAR_2);
}
