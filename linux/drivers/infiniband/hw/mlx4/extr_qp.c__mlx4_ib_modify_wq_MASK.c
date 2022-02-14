
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_qp {int state; int port; } ;
struct ib_wq {int wq_num; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int port_num; } ;
struct ib_qp {int dummy; } ;
typedef enum ib_wq_state { ____Placeholder_ib_wq_state } ib_wq_state ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ib_wq*,int ,struct ib_qp_attr*,int,int,int,struct ib_udata*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 struct mlx4_ib_qp* FUNC_4 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_5(struct ib_wq *VAR_5, enum ib_wq_state VAR_6,
         struct ib_udata *VAR_7)
{
 struct mlx4_ib_qp *VAR_8 = FUNC_4((struct ib_qp *)VAR_5);
 enum ib_qp_state VAR_9;
 enum ib_qp_state VAR_10;
 int VAR_11;
 int VAR_12;




 VAR_9 = VAR_8->state;
 VAR_10 = FUNC_1(VAR_6);

 if (FUNC_1(VAR_6) == VAR_9)
  return 0;

 if (VAR_6 == VAR_3) {
  struct ib_qp_attr VAR_13 = {};

  VAR_13.port_num = VAR_8->port;
  VAR_11 = VAR_2;

  VAR_12 = FUNC_0(VAR_5, VAR_4, &VAR_13,
       VAR_11, VAR_1, VAR_0,
       VAR_7);
  if (VAR_12) {
   FUNC_2("WQN=0x%06x failed to apply RST->INIT on the HW QP\n",
     VAR_5->wq_num);
   return VAR_12;
  }

  VAR_9 = VAR_0;
 }

 VAR_11 = 0;
 VAR_12 = FUNC_0(VAR_5, VAR_4, ((void*)0), VAR_11,
      VAR_9, VAR_10, VAR_7);

 if (VAR_12 && (VAR_9 == VAR_0)) {
  VAR_10 = VAR_1;
  if (FUNC_0(VAR_5, VAR_4, ((void*)0),
     VAR_11, VAR_0, VAR_1,
     VAR_7)) {
   FUNC_3("WQN=0x%06x failed with reverting HW's resources failure\n",
    VAR_5->wq_num);
   VAR_10 = VAR_0;
  }
 }

 VAR_8->state = VAR_10;

 return VAR_12;
}
