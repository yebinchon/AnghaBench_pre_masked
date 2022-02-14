
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nlm_grantcookie {int ng_sysid; } ;
struct netobj {scalar_t__ n_bytes; } ;



__attribute__((used)) static inline uint32_t
FUNC_0(struct netobj *VAR_0)
{

 return ((struct nlm_grantcookie *)VAR_0->n_bytes)->ng_sysid;
}
