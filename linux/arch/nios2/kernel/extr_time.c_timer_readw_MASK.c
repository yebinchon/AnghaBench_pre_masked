
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct nios2_timer {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct nios2_timer *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->base + VAR_1);
}
