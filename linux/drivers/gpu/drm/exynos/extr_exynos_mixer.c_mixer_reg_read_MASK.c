
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mixer_context {scalar_t__ mixer_regs; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct mixer_context *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->mixer_regs + VAR_1);
}
