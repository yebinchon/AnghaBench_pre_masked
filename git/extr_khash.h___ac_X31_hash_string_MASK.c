
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int khint_t ;



__attribute__((used)) static inline khint_t FUNC_0(const char *VAR_0)
{
 khint_t VAR_1 = (khint_t)*VAR_0;
 if (VAR_1) for (++VAR_0 ; *VAR_0; ++VAR_0) VAR_1 = (VAR_1 << 5) - VAR_1 + (khint_t)*VAR_0;
 return VAR_1;
}
