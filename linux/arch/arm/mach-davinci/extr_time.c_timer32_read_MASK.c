
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_s {scalar_t__ tim_off; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct timer_s *VAR_0)
{
 return FUNC_0(VAR_0->base + VAR_0->tim_off);
}
