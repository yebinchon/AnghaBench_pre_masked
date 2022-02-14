
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_0, unsigned int VAR_1)
{
 if (VAR_0 * 2 < VAR_1) {
  VAR_0 = VAR_0 * 2;

  while (VAR_0 * 2 + 1 < VAR_1)
   VAR_0 = VAR_0 * 2 + 1;
 } else
  VAR_0 >>= FUNC_0(VAR_0);

 return VAR_0;
}
