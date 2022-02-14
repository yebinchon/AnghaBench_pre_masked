
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hisi_qm {scalar_t__ ctrl_qp_num; } ;


 int VAR_0 ;
 int FUNC_0 (struct hisi_qm*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_1(struct hisi_qm *VAR_1, u32 VAR_2, u32 VAR_3,
      u32 VAR_4)
{
 u32 VAR_5 = VAR_1->ctrl_qp_num;

 if (VAR_3 >= VAR_5 || VAR_4 > VAR_5 ||
     (VAR_3 + VAR_4) > VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
