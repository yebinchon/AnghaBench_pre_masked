
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct x86_emulate_ctxt {int ad_bytes; } ;


 int FUNC_0 (scalar_t__*,scalar_t__,int ) ;
 scalar_t__* FUNC_1 (struct x86_emulate_ctxt*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct x86_emulate_ctxt *VAR_0, int VAR_1, int VAR_2)
{
 ulong *VAR_3 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_3, *VAR_3 + VAR_2, VAR_0->ad_bytes);
}
