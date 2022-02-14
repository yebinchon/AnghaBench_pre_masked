
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static unsigned char
FUNC_2(unsigned char VAR_0)
{

 if (FUNC_0(VAR_0))
  return (VAR_0 - '0');

 return (FUNC_1(VAR_0) ? VAR_0 - 'A' + 10 : VAR_0 - 'a' + 10);
}
