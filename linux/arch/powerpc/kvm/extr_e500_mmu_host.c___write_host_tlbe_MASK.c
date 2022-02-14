
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
typedef unsigned long u32 ;
struct kvm_book3e_206_tlb_entry {unsigned long mas1; int mas7_3; scalar_t__ mas2; int mas8; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (unsigned long,int ,unsigned long,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_6(struct kvm_book3e_206_tlb_entry *VAR_7,
         uint32_t VAR_8,
         uint32_t VAR_9)
{
 unsigned long VAR_10;

 FUNC_3(VAR_10);
 FUNC_4(VAR_1, VAR_8);
 FUNC_4(VAR_2, VAR_7->mas1);
 FUNC_4(VAR_3, (unsigned long)VAR_7->mas2);
 FUNC_4(VAR_4, (u32)VAR_7->mas7_3);
 FUNC_4(VAR_5, (u32)(VAR_7->mas7_3 >> 32));



 asm volatile("isync; tlbwe" : : : "memory");






 FUNC_2(VAR_10);

 FUNC_5(VAR_8, VAR_7->mas8, VAR_7->mas1,
                               VAR_7->mas2, VAR_7->mas7_3);
}
