
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int mask; int gt; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct intel_engine_cs *VAR_0)
{
 return FUNC_0(VAR_0->gt, VAR_0->mask);
}
