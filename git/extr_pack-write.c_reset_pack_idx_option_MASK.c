
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_idx_option {int version; int off32_limit; } ;


 int FUNC_0 (struct pack_idx_option*,int ,int) ;

void FUNC_1(struct pack_idx_option *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->version = 2;
 VAR_0->off32_limit = 0x7fffffff;
}
