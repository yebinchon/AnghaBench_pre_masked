
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ISzAllocPtr ;
typedef int CLzRef ;


 scalar_t__ FUNC_0 (int ,size_t) ;

__attribute__((used)) static CLzRef* FUNC_1(size_t VAR_0, ISzAllocPtr VAR_1)
{
  size_t VAR_2 = (size_t)VAR_0 * sizeof(CLzRef);
  if (VAR_2 / sizeof(CLzRef) != VAR_0)
    return ((void*)0);
  return (CLzRef *)FUNC_0(VAR_1, VAR_2);
}
