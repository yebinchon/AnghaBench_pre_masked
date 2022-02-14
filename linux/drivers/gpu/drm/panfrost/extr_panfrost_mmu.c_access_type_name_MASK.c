
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct panfrost_device {int dummy; } ;




 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct panfrost_device*,int ) ;

__attribute__((used)) static const char *FUNC_2(struct panfrost_device *VAR_2,
  u32 VAR_3)
{
 switch (VAR_3 & VAR_0) {
 case 131:
  if (FUNC_1(VAR_2, VAR_1))
   return "ATOMIC";
  else
   return "UNKNOWN";
 case 129:
  return "READ";
 case 128:
  return "WRITE";
 case 130:
  return "EXECUTE";
 default:
  FUNC_0(1);
  return ((void*)0);
 }
}
