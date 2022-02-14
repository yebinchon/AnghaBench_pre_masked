
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
typedef int u16 ;
struct vmcs12 {int dummy; } ;
typedef void* natural_width ;






 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct vmcs12 *VAR_0, unsigned long VAR_1,
        u16 VAR_2, u64 VAR_3)
{
 char *VAR_4 = (char *)VAR_0 + VAR_2;

 switch (FUNC_1(VAR_1)) {
 case 130:
  *(u16 *)VAR_4 = VAR_3;
  break;
 case 129:
  *(u32 *)VAR_4 = VAR_3;
  break;
 case 128:
  *(u64 *)VAR_4 = VAR_3;
  break;
 case 131:
  *(natural_width *)VAR_4 = VAR_3;
  break;
 default:
  FUNC_0(1);
  break;
 }
}
