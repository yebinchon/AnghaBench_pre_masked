
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu {unsigned int last_nonleaf_level; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct kvm_mmu *VAR_2,
    unsigned VAR_3, unsigned VAR_4)
{





 VAR_4 &= VAR_3 - VAR_2->last_nonleaf_level;






 VAR_4 |= VAR_3 - VAR_1 - 1;

 return VAR_4 & VAR_0;
}
