
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_execlists {unsigned int port_mask; } ;



__attribute__((used)) static inline unsigned int
FUNC_0(const struct intel_engine_execlists * const VAR_0)
{
 return VAR_0->port_mask + 1;
}
