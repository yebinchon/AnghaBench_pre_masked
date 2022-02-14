
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int lpages; } ;
struct kvm {TYPE_2__ stat; } ;
struct TYPE_4__ {scalar_t__ level; } ;
struct TYPE_6__ {TYPE_1__ role; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct kvm *VAR_1, u64 *VAR_2)
{
 if (FUNC_3(*VAR_2)) {
  FUNC_0(FUNC_4(FUNC_1(VAR_2))->role.level ==
   VAR_0);
  FUNC_2(VAR_1, VAR_2);
  --VAR_1->stat.lpages;
  return 1;
 }

 return 0;
}
