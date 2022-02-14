
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thunderx_gpio {scalar_t__ register_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct thunderx_gpio *VAR_1,
      unsigned int VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_1->register_base + FUNC_0(VAR_2));

 return (VAR_3 & VAR_0) == 0;
}
