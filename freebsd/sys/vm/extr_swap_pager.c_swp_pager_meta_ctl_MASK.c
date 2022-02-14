
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t vm_pindex_t ;
typedef TYPE_3__* vm_object_t ;
struct swblk {scalar_t__* d; } ;
typedef scalar_t__ daddr_t ;
struct TYPE_9__ {int swp_blks; } ;
struct TYPE_8__ {TYPE_2__ swp; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ un_pager; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 struct swblk* FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (size_t,size_t) ;
 int FUNC_4 (TYPE_3__*,struct swblk*) ;

__attribute__((used)) static daddr_t
FUNC_5(vm_object_t VAR_4, vm_pindex_t VAR_5, int VAR_6)
{
 struct swblk *VAR_7;
 daddr_t VAR_8;

 if ((VAR_6 & VAR_3) != 0)
  FUNC_2(VAR_4);
 else
  FUNC_1(VAR_4);





 if (VAR_4->type != VAR_0)
  return (VAR_1);

 VAR_7 = FUNC_0(&VAR_4->un_pager.swp.swp_blks,
     FUNC_3(VAR_5, VAR_2));
 if (VAR_7 == ((void*)0))
  return (VAR_1);
 VAR_8 = VAR_7->d[VAR_5 % VAR_2];
 if (VAR_8 == VAR_1)
  return (VAR_1);
 if ((VAR_6 & VAR_3) != 0) {
  VAR_7->d[VAR_5 % VAR_2] = VAR_1;
  FUNC_4(VAR_4, VAR_7);
 }
 return (VAR_8);
}
