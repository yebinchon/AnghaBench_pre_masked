
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ use_esca; } ;
struct kvm {int lock; TYPE_1__ arch; } ;
struct TYPE_4__ {int has_64bscao; int has_esca; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm*) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 if (!FUNC_0()) {
  if (VAR_5 < VAR_0)
   return 1;
  return 0;
 }
 if (VAR_5 < VAR_1)
  return 1;
 if (!VAR_3.has_esca || !VAR_3.has_64bscao)
  return 0;

 FUNC_1(&VAR_4->lock);
 VAR_6 = VAR_4->arch.use_esca ? 0 : FUNC_3(VAR_4);
 FUNC_2(&VAR_4->lock);

 return VAR_6 == 0 && VAR_5 < VAR_2;
}
