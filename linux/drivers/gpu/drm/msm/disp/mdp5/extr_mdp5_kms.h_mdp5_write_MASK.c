
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mdp5_kms {scalar_t__ enable_count; scalar_t__ mmio; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct mdp5_kms *VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_0->enable_count <= 0);
 FUNC_1(VAR_2, VAR_0->mmio + VAR_1);
}
