
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xive_q {scalar_t__ idx; scalar_t__ toggle; int msk; int qpage; } ;
struct kvmppc_xive {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct kvmppc_xive*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct kvmppc_xive *VAR_1, struct xive_q *VAR_2)
{
 u32 VAR_3 = VAR_2->idx;
 u32 VAR_4 = VAR_2->toggle;
 u32 VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_2->qpage, VAR_2->msk, &VAR_3, &VAR_4);
  if (VAR_5 > VAR_0)
   FUNC_1(VAR_1, VAR_5);
 } while(VAR_5);
}
