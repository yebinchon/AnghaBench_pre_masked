
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int r; } ;
struct TYPE_6__ {int r; } ;
struct TYPE_5__ {int r; } ;
struct TYPE_8__ {TYPE_3__ autopoll; TYPE_2__ active_lo; TYPE_1__ active_hi; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_2, VAR_4);
 FUNC_0(&VAR_1->active_hi.r, VAR_3 >> 8);
 FUNC_0(&VAR_1->active_lo.r, VAR_3);
 FUNC_0(&VAR_1->autopoll.r, VAR_3? VAR_0: 0);
 FUNC_2(&VAR_2, VAR_4);
 return 0;
}
