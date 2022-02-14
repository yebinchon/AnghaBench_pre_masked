
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {int ad_bytes; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct x86_emulate_ctxt *VAR_0)
{
 return (1UL << (VAR_0->ad_bytes << 3)) - 1;
}
