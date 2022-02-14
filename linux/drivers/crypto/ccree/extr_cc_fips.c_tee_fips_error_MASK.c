
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline void FUNC_2(struct device *VAR_1)
{
 if (VAR_0)
  FUNC_1("ccree: TEE reported cryptographic error in fips mode!\n");
 else
  FUNC_0(VAR_1, "TEE reported error!\n");
}
