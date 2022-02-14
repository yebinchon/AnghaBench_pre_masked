
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {scalar_t__ inv_waitd_gen; scalar_t__ inv_waitd_seq_hw; } ;
struct dmar_qi_genseq {scalar_t__ gen; scalar_t__ seq; } ;



__attribute__((used)) static bool
FUNC_0(const struct dmar_unit *VAR_0,
    const struct dmar_qi_genseq *VAR_1)
{

 return (VAR_1->gen < VAR_0->inv_waitd_gen ||
     (VAR_1->gen == VAR_0->inv_waitd_gen &&
      VAR_1->seq <= VAR_0->inv_waitd_seq_hw));
}
