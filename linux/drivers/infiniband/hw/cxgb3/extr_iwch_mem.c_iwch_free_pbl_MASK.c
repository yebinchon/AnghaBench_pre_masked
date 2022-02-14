
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pbl_size; int pbl_addr; } ;
struct iwch_mr {TYPE_2__ attr; TYPE_1__* rhp; } ;
struct TYPE_3__ {int rdev; } ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct iwch_mr *VAR_0)
{
 FUNC_0(&VAR_0->rhp->rdev, VAR_0->attr.pbl_addr,
         VAR_0->attr.pbl_size << 3);
}
