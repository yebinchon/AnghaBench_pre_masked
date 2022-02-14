
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static const char *FUNC_2(unsigned VAR_0)
{
 if (!FUNC_1(VAR_0))
  return ((void*)0);

 switch (VAR_0) {
 case 133: return "Physical Chip";
 case 132: return "Physical Core";
 case 130: return "VCPU Home Core";
 case 131: return "VCPU Home Chip";
 case 129: return "VCPU Home Node";
 case 128: return "VCPU Remote Node";
 }

 FUNC_0(VAR_0);
 return ((void*)0);
}
