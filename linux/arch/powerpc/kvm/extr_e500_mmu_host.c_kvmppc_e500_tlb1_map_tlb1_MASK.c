
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct tlbe_ref {int flags; } ;
struct kvmppc_vcpu_e500 {scalar_t__ host_tlb1_nv; int* h2g_tlb1_rmap; unsigned long long* g2h_tlb1_map; TYPE_2__** gtlb_priv; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct kvmppc_vcpu_e500 *VAR_2,
         struct tlbe_ref *VAR_3,
         int VAR_4)
{
 unsigned int VAR_5 = VAR_2->host_tlb1_nv++;

 if (FUNC_2(VAR_2->host_tlb1_nv >= FUNC_1()))
  VAR_2->host_tlb1_nv = 0;

 if (VAR_2->h2g_tlb1_rmap[VAR_5]) {
  unsigned int VAR_6 = VAR_2->h2g_tlb1_rmap[VAR_5] - 1;
  VAR_2->g2h_tlb1_map[VAR_6] &= ~(1ULL << VAR_5);
 }

 VAR_2->gtlb_priv[1][VAR_4].ref.flags |= VAR_0;
 VAR_2->g2h_tlb1_map[VAR_4] |= (u64)1 << VAR_5;
 VAR_2->h2g_tlb1_rmap[VAR_5] = VAR_4 + 1;
 FUNC_0(!(VAR_3->flags & VAR_1));

 return VAR_5;
}
