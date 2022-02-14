
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct fw_eui64 {int lo; int hi; } ;
struct eui64 {int * octet; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct fw_eui64 *VAR_0, struct eui64 *VAR_1)
{
 *(u_int32_t*)&(VAR_1->octet[0]) = FUNC_0(VAR_0->hi);
 *(u_int32_t*)&(VAR_1->octet[4]) = FUNC_0(VAR_0->lo);
}
