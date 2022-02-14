
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mip4_fw_version {void* param; void* app; void* core; void* boot; } ;


 void* FUNC_0 (int const*) ;

__attribute__((used)) static void FUNC_1(const u8 *VAR_0, struct mip4_fw_version *VAR_1)
{
 VAR_1->boot = FUNC_0(VAR_0 + 0);
 VAR_1->core = FUNC_0(VAR_0 + 2);
 VAR_1->app = FUNC_0(VAR_0 + 4);
 VAR_1->param = FUNC_0(VAR_0 + 6);
}
