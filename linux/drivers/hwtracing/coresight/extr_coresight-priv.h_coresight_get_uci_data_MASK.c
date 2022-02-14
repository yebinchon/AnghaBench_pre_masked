
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amba_id {scalar_t__ data; } ;
struct amba_cs_uci_id {void* data; } ;



__attribute__((used)) static inline void *FUNC_0(const struct amba_id *VAR_0)
{
 if (VAR_0->data)
  return ((struct amba_cs_uci_id *)(VAR_0->data))->data;
 return 0;
}
