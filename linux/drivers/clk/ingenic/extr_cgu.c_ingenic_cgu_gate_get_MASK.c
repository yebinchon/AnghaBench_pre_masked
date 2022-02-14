
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_cgu_gate_info {int clear_to_gate; int bit; scalar_t__ reg; } ;
struct ingenic_cgu {scalar_t__ base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_2(struct ingenic_cgu *VAR_0,
       const struct ingenic_cgu_gate_info *VAR_1)
{
 return !!(FUNC_1(VAR_0->base + VAR_1->reg) & FUNC_0(VAR_1->bit))
  ^ VAR_1->clear_to_gate;
}
