
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i915_reg_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1, unsigned int VAR_2,
 unsigned int VAR_3, unsigned int VAR_4, i915_reg_t VAR_5)
{
 unsigned int VAR_6 = VAR_3 - VAR_2;

 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_5);
 if (VAR_1 < VAR_2 || VAR_1 > VAR_4)
  return VAR_0;
 VAR_1 -= VAR_2;
 return VAR_1 / VAR_6;
}
