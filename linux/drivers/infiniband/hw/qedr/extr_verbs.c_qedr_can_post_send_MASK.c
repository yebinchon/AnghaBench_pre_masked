
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_sges; int pbl; } ;
struct qedr_qp {int err_bitmap; TYPE_1__ sq; struct qedr_dev* dev; } ;
struct qedr_dev {int dummy; } ;
struct ib_send_wr {scalar_t__ num_sge; } ;


 int FUNC_0 (struct qedr_dev*,char*,struct qedr_qp*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_3(struct qedr_qp *VAR_4,
          const struct ib_send_wr *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct qedr_dev *VAR_9 = VAR_4->dev;


 VAR_7 = VAR_5->num_sge > VAR_4->sq.max_sges;
 VAR_6 = FUNC_2(&VAR_4->sq);
 VAR_8 = FUNC_1(&VAR_4->sq.pbl) <
        VAR_0;
 if (VAR_6 || VAR_7 || VAR_8) {
  if (VAR_6 && !(VAR_4->err_bitmap & VAR_2)) {
   FUNC_0(VAR_9,
          "error: WQ is full. Post send on QP %p failed (this error appears only once)\n",
          VAR_4);
   VAR_4->err_bitmap |= VAR_2;
  }

  if (VAR_7 && !(VAR_4->err_bitmap & VAR_1)) {
   FUNC_0(VAR_9,
          "error: WR is bad. Post send on QP %p failed (this error appears only once)\n",
          VAR_4);
   VAR_4->err_bitmap |= VAR_1;
  }

  if (VAR_8 &&
      !(VAR_4->err_bitmap & VAR_3)) {
   FUNC_0(VAR_9,
          "error: WQ PBL is full. Post send on QP %p failed (this error appears only once)\n",
          VAR_4);
   VAR_4->err_bitmap |= VAR_3;
  }
  return 0;
 }
 return 1;
}
