
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_xive {int mapping_lock; scalar_t__ mapping; } ;
struct TYPE_2__ {struct kvmppc_xive* xive; } ;
struct kvm {TYPE_1__ arch; } ;
typedef unsigned long long pgoff_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long long,unsigned long long,int) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_4, unsigned long VAR_5)
{
 struct kvmppc_xive *VAR_6 = VAR_4->arch.xive;
 pgoff_t VAR_7 = VAR_2 + VAR_5 * 2;

 if (VAR_5 >= VAR_1)
  return -VAR_0;






 FUNC_2("clearing esb pages for girq 0x%lx\n", VAR_5);
 FUNC_0(&VAR_6->mapping_lock);
 if (VAR_6->mapping)
  FUNC_3(VAR_6->mapping,
        VAR_7 << VAR_3,
        2ull << VAR_3, 1);
 FUNC_1(&VAR_6->mapping_lock);
 return 0;
}
