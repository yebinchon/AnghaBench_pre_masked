
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ocrdma_eqe {int id_valid; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int eq_intr_cnt; } ;
struct ocrdma_eq {int cq_cnt; TYPE_2__ q; TYPE_1__ aic_obj; struct ocrdma_dev* dev; } ;
struct ocrdma_dev {int dummy; } ;
typedef int irqreturn_t ;
typedef int eqe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ocrdma_dev*,int) ;
 int FUNC_1 (struct ocrdma_eq*) ;
 struct ocrdma_eqe* FUNC_2 (struct ocrdma_eq*) ;
 int FUNC_3 (struct ocrdma_eqe*,int) ;
 int FUNC_4 (struct ocrdma_dev*,int ,int,int,int) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct ocrdma_eq *VAR_9 = VAR_8;
 struct ocrdma_dev *VAR_10 = VAR_9->dev;
 struct ocrdma_eqe VAR_11;
 struct ocrdma_eqe *VAR_12;
 u16 VAR_13;
 u8 VAR_14;
 int VAR_15 = VAR_9->cq_cnt;

 do {
  VAR_12 = FUNC_2(VAR_9);
  VAR_11 = *VAR_12;
  FUNC_3(&VAR_11, sizeof(VAR_11));
  VAR_14 = (VAR_11.id_valid & VAR_2)
    >> VAR_3;
  if (VAR_14 == VAR_6)
   FUNC_5("EQ full on eqid = 0x%x, eqe = 0x%x\n",
          VAR_9->q.id, VAR_11.id_valid);
  if ((VAR_11.id_valid & VAR_5) == 0)
   break;

  VAR_12->id_valid = 0;

  FUNC_4(VAR_10, VAR_9->q.id, 0, 1, 1);

  if ((VAR_11.id_valid & VAR_1) == 0) {
   VAR_13 = VAR_11.id_valid >> VAR_4;
   FUNC_0(VAR_10, VAR_13);
  }
  FUNC_1(VAR_9);




  if (VAR_15)
   VAR_15--;

 } while (VAR_15);

 VAR_9->aic_obj.eq_intr_cnt++;
 FUNC_4(VAR_10, VAR_9->q.id, 1, 1, 0);
 return VAR_0;
}
