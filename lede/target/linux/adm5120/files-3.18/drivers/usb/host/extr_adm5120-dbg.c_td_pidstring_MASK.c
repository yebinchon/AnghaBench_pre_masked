
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;




__attribute__((used)) static inline char *FUNC_0(u32 VAR_1)
{
 switch (VAR_1 & VAR_0) {
 case 128:
  return "SETUP";
 case 130:
  return "IN";
 case 129:
  return "OUT";
 }
 return "?PID";
}
