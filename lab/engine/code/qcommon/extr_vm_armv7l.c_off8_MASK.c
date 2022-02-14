
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static unsigned char FUNC_1(unsigned VAR_0)
{
 if (VAR_0&3)
  FUNC_0("offset must be multiple of four");
 if (VAR_0 > 1020)
  FUNC_0("offset too large");
 return VAR_0>>2;
}
