
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_qp {int dummy; } ;
struct mthca_err_cqe {int syndrome; int my_qpn; int wqe; int db_cnt; int vendor_err; } ;
struct mthca_dev {int dummy; } ;
struct mthca_cq {int cons_index; int cqn; } ;
struct ib_wc {int vendor_err; int status; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mthca_dev*,struct mthca_err_cqe*) ;
 int FUNC_4 (struct mthca_dev*,char*,int ,int ,int ,int ) ;
 int FUNC_5 (struct mthca_dev*,struct mthca_qp*,int,int,int*,int*) ;
 scalar_t__ FUNC_6 (struct mthca_dev*) ;

__attribute__((used)) static void FUNC_7(struct mthca_dev *VAR_19, struct mthca_cq *VAR_20,
        struct mthca_qp *VAR_21, int VAR_22, int VAR_23,
        struct mthca_err_cqe *VAR_24,
        struct ib_wc *VAR_25, int *VAR_26)
{
 int VAR_27;
 __be32 VAR_28;

 if (VAR_24->syndrome == 138) {
  FUNC_4(VAR_19, "local QP operation err "
     "(QPN %06x, WQE @ %08x, CQN %06x, index %d)\n",
     FUNC_1(VAR_24->my_qpn), FUNC_1(VAR_24->wqe),
     VAR_20->cqn, VAR_20->cons_index);
  FUNC_3(VAR_19, VAR_24);
 }





 switch (VAR_24->syndrome) {
 case 140:
  VAR_25->status = VAR_6;
  break;
 case 138:
  VAR_25->status = VAR_8;
  break;
 case 141:
  VAR_25->status = VAR_5;
  break;
 case 139:
  VAR_25->status = VAR_7;
  break;
 case 128:
  VAR_25->status = VAR_18;
  break;
 case 136:
  VAR_25->status = VAR_10;
  break;
 case 145:
  VAR_25->status = VAR_0;
  break;
 case 142:
  VAR_25->status = VAR_4;
  break;
 case 132:
  VAR_25->status = VAR_14;
  break;
 case 134:
  VAR_25->status = VAR_12;
  break;
 case 131:
  VAR_25->status = VAR_15;
  break;
 case 130:
  VAR_25->status = VAR_16;
  break;
 case 129:
  VAR_25->status = VAR_17;
  break;
 case 137:
  VAR_25->status = VAR_9;
  break;
 case 133:
  VAR_25->status = VAR_13;
  break;
 case 135:
  VAR_25->status = VAR_11;
  break;
 case 144:
  VAR_25->status = VAR_2;
  break;
 case 143:
  VAR_25->status = VAR_3;
  break;
 default:
  VAR_25->status = VAR_1;
  break;
 }

 VAR_25->vendor_err = VAR_24->vendor_err;





 if (FUNC_6(VAR_19))
  return;

 FUNC_5(VAR_19, VAR_21, VAR_23, VAR_22, &VAR_27, &VAR_28);






 if (!(VAR_28 & FUNC_2(0x3f)) || (!VAR_24->db_cnt && VAR_27))
  return;

 FUNC_0(&VAR_24->db_cnt, -VAR_27);
 VAR_24->wqe = VAR_28;
 VAR_24->syndrome = 128;

 *VAR_26 = 0;
}
