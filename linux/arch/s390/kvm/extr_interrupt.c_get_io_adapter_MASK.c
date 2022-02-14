
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_io_adapter {int dummy; } ;
struct TYPE_2__ {struct s390_io_adapter** adapters; } ;
struct kvm {TYPE_1__ arch; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static struct s390_io_adapter *FUNC_1(struct kvm *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_2, VAR_0);
 return VAR_1->arch.adapters[VAR_2];
}
