
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cma_hdr {int ip_version; } ;



__attribute__((used)) static inline u8 FUNC_0(const struct cma_hdr *VAR_0)
{
 return VAR_0->ip_version >> 4;
}
