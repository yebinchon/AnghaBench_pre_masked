
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwcm_id_private {int state; int lock; } ;
struct ib_qp_attr {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct iwcm_id_private *VAR_1,
      struct ib_qp_attr *VAR_2,
      int *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(&VAR_1->lock, VAR_4);
 switch (VAR_1->state) {
 case 128:
 case 130:
 case 131:
 case 129:
  *VAR_3 = 0;
  VAR_5 = 0;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_1(&VAR_1->lock, VAR_4);
 return VAR_5;
}
