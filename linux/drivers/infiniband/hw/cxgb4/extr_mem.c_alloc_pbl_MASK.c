
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pbl_size; int pbl_addr; } ;
struct c4iw_mr {TYPE_2__ attr; TYPE_1__* rhp; } ;
struct TYPE_3__ {int rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(struct c4iw_mr *VAR_1, int VAR_2)
{
 VAR_1->attr.pbl_addr = FUNC_0(&VAR_1->rhp->rdev,
          VAR_2 << 3);

 if (!VAR_1->attr.pbl_addr)
  return -VAR_0;

 VAR_1->attr.pbl_size = VAR_2;

 return 0;
}
