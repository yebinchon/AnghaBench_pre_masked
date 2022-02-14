
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct ng_vlan_table {int n; } ;
struct ng_parse_type {int dummy; } ;



__attribute__((used)) static int
FUNC_0(const struct ng_parse_type *VAR_0,
    const u_char *VAR_1, const u_char *VAR_2)
{
 const struct ng_vlan_table *const VAR_3 =
     (const struct ng_vlan_table *)(VAR_2 - sizeof(u_int32_t));

 return VAR_3->n;
}
