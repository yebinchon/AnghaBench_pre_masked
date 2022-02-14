
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static __inline uint32_t
FUNC_1(const char *VAR_1, uint32_t VAR_2)
{

 if (FUNC_0(VAR_1, "ebus") == 0 || FUNC_0(VAR_1, "isa") == 0)
  VAR_2 &= 0x1;
 else if (FUNC_0(VAR_1, "pci") == 0)
  VAR_2 &= VAR_0;

 return (VAR_2);
}
