
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;


 int FUNC_0 (struct mii_bus*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct mii_bus *VAR_1)
{
 return !!(FUNC_1(VAR_0+0x40) & (1 << FUNC_0(VAR_1)));
}
