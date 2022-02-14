
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct vmcs12 {int dummy; } ;
typedef int natural_width ;






 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static inline u64 FUNC_2(struct vmcs12 *VAR_0, unsigned long VAR_1,
      u16 VAR_2)
{
 char *VAR_3 = (char *)VAR_0 + VAR_2;

 switch (FUNC_1(VAR_1)) {
 case 131:
  return *((natural_width *)VAR_3);
 case 130:
  return *((u16 *)VAR_3);
 case 129:
  return *((u32 *)VAR_3);
 case 128:
  return *((u64 *)VAR_3);
 default:
  FUNC_0(1);
  return -1;
 }
}
