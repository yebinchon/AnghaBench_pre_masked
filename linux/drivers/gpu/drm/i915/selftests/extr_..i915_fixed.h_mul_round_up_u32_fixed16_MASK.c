
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ uint_fixed_16_16_t ;
typedef scalar_t__ u64 ;
typedef int u32 ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static inline u32 FUNC_3(u32 VAR_1, uint_fixed_16_16_t VAR_2)
{
 u64 VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2.val);
 VAR_3 = FUNC_0(VAR_3, 1 << 16);
 FUNC_1(VAR_3 > VAR_0);

 return (u32)VAR_3;
}
