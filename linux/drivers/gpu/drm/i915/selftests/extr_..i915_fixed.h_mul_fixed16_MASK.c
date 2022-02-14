
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int val; } ;
typedef TYPE_1__ uint_fixed_16_16_t ;
typedef int u64 ;


 TYPE_1__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline uint_fixed_16_16_t FUNC_2(uint_fixed_16_16_t VAR_0,
          uint_fixed_16_16_t VAR_1)
{
 u64 VAR_2;

 VAR_2 = FUNC_1(VAR_0.val, VAR_1.val);
 VAR_2 = VAR_2 >> 16;

 return FUNC_0(VAR_2);
}
