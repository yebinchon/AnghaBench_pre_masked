
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(unsigned VAR_1)
{
 VAR_1 = VAR_1 * 1103515245 + 12345;
 return (VAR_1/65536) % VAR_0;
}
