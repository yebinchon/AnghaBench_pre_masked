
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct TYPE_2__ {int prio; } ;
struct bnxt_re_dev {scalar_t__ cur_prio_map; TYPE_1__ qplib_res; int * cosq; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (struct bnxt_re_dev*) ;
 int FUNC_2 (scalar_t__,scalar_t__*,int *) ;
 int FUNC_3 (struct bnxt_re_dev*,int ,int *) ;
 int FUNC_4 (struct bnxt_re_dev*) ;
 int FUNC_5 (int ,char*,scalar_t__,...) ;
 int FUNC_6 (struct bnxt_re_dev*) ;

__attribute__((used)) static int FUNC_7(struct bnxt_re_dev *VAR_0)
{
 u8 VAR_1 = 0;
 u64 VAR_2;
 int VAR_3;


 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 == VAR_0->cur_prio_map)
  return 0;
 VAR_0->cur_prio_map = VAR_1;

 VAR_3 = FUNC_3(VAR_0, 0, &VAR_2);
 if (VAR_3) {
  FUNC_5(FUNC_6(VAR_0), "no cos for p_mask %x\n", VAR_1);
  return VAR_3;
 }

 FUNC_2(VAR_1, (u8 *)&VAR_2, VAR_0->cosq);


 VAR_3 = FUNC_0(&VAR_0->qplib_res, VAR_0->cosq);
 if (VAR_3) {
  FUNC_5(FUNC_6(VAR_0), "no tc for cos{%x, %x}\n",
    VAR_0->cosq[0], VAR_0->cosq[1]);
  return VAR_3;
 }




 if ((VAR_1 == 0 && VAR_0->qplib_res.prio) ||
     (VAR_1 != 0 && !VAR_0->qplib_res.prio)) {
  VAR_0->qplib_res.prio = VAR_1 ? 1 : 0;

  FUNC_4(VAR_0);
 }

 return 0;
}
