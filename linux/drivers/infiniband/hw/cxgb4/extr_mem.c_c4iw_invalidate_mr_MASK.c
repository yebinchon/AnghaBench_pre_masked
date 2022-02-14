
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ state; } ;
struct c4iw_mr {TYPE_1__ attr; } ;
struct c4iw_dev {int mrs; } ;


 struct c4iw_mr* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct c4iw_dev *VAR_0, u32 VAR_1)
{
 struct c4iw_mr *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->mrs, VAR_3);
 VAR_2 = FUNC_0(&VAR_0->mrs, VAR_1 >> 8);
 if (VAR_2)
  VAR_2->attr.state = 0;
 FUNC_2(&VAR_0->mrs, VAR_3);
}
