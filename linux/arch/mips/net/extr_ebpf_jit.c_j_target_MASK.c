
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {unsigned long* offsets; scalar_t__ target; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct jit_ctx *VAR_1, int VAR_2)
{
 unsigned long VAR_3, VAR_4;
 unsigned int VAR_5;

 if (!VAR_1->target)
  return 0;

 VAR_4 = (unsigned long)VAR_1->target;
 VAR_3 = VAR_4 + (VAR_1->offsets[VAR_2] & ~VAR_0);

 if ((VAR_4 & ~0x0ffffffful) != (VAR_3 & ~0x0ffffffful))
  return (unsigned int)-1;
 VAR_5 = VAR_3 & 0x0ffffffful;
 return VAR_5;
}
