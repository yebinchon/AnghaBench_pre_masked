
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned long const*,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned long const*,unsigned long const*,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned long const*,unsigned long const*,unsigned int) ;

__attribute__((used)) static const unsigned long *FUNC_4(const unsigned long *VAR_0,
       unsigned int VAR_1,
       const unsigned long *VAR_2,
       bool VAR_3)
{
 if (FUNC_1(VAR_2, VAR_1))
  return ((void*)0);
 while (*VAR_0) {
  if (VAR_3) {
   if (FUNC_2(VAR_2, VAR_0, VAR_1))
    return VAR_0;
  } else {
   if (FUNC_3(VAR_2, VAR_0, VAR_1))
    return VAR_0;
  }
  VAR_0 += FUNC_0(VAR_1);
 }
 return ((void*)0);
}
