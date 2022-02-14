
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* vm_object_t ;
struct swblk {int p; } ;
struct TYPE_5__ {int swp_blks; } ;
struct TYPE_6__ {TYPE_1__ swp; } ;
struct TYPE_7__ {TYPE_2__ un_pager; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct swblk*,int ,int ) ;
 int FUNC_2 (int ,struct swblk*) ;

__attribute__((used)) static void
FUNC_3(vm_object_t VAR_2, struct swblk *VAR_3)
{

 if (FUNC_1(VAR_3, 0, VAR_0)) {
  FUNC_0(&VAR_2->un_pager.swp.swp_blks, VAR_3->p);
  FUNC_2(VAR_1, VAR_3);
 }
}
