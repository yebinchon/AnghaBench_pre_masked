
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring {unsigned int size; } ;


 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static inline bool
FUNC_1(const struct intel_ring *VAR_0,
   unsigned int VAR_1)
{
 if (VAR_1 & -VAR_0->size)
  return 0;

 if (!FUNC_0(VAR_1, 8))
  return 0;

 return 1;
}
