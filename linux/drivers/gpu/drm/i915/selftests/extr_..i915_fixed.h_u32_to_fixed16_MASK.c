
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ uint_fixed_16_16_t ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline uint_fixed_16_16_t FUNC_1(u32 VAR_1)
{
 uint_fixed_16_16_t VAR_2 = { .val = VAR_1 << 16 };

 FUNC_0(VAR_1 > VAR_0);

 return VAR_2;
}
