
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gpte_is_8_bytes; int word; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
typedef int gpa_t ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_mmu_page *VAR_0, gpa_t VAR_1,
        int VAR_2)
{
 unsigned VAR_3, VAR_4, VAR_5;

 FUNC_1("misaligned: gpa %llx bytes %d role %x\n",
   VAR_1, VAR_2, VAR_0->role.word);

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = VAR_0->role.gpte_is_8_bytes ? 8 : 4;





 if (!(VAR_3 & (VAR_4 - 1)) && VAR_2 == 1)
  return 0;

 VAR_5 = (VAR_3 ^ (VAR_3 + VAR_2 - 1)) & ~(VAR_4 - 1);
 VAR_5 |= VAR_2 < 4;

 return VAR_5;
}
