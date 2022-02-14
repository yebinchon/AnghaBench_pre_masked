
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb_pending_info {int vaddrs; int nr; int ctx; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct tlb_pending_info *VAR_1 = VAR_0;

 FUNC_0(VAR_1->ctx, VAR_1->nr, VAR_1->vaddrs);
}
