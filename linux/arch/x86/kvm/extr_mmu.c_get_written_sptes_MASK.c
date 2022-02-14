
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int level; unsigned int quadrant; int gpte_is_8_bytes; } ;
struct kvm_mmu_page {int * spt; TYPE_1__ role; } ;
typedef int gpa_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static u64 *FUNC_1(struct kvm_mmu_page *VAR_3, gpa_t VAR_4, int *VAR_5)
{
 unsigned VAR_6, VAR_7;
 u64 *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_4);
 VAR_9 = VAR_3->role.level;
 *VAR_5 = 1;
 if (!VAR_3->role.gpte_is_8_bytes) {
  VAR_6 <<= 1;





  if (VAR_9 == VAR_2) {
   VAR_6 &= ~7;
   VAR_6 <<= 1;
   *VAR_5 = 2;
  }
  VAR_7 = VAR_6 >> VAR_1;
  VAR_6 &= ~VAR_0;
  if (VAR_7 != VAR_3->role.quadrant)
   return ((void*)0);
 }

 VAR_8 = &VAR_3->spt[VAR_6 / sizeof(*VAR_8)];
 return VAR_8;
}
