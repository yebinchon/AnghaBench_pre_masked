
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char wchar_t ;
typedef unsigned char* bwstring_iterator ;


 int VAR_0 ;

__attribute__((used)) static inline bwstring_iterator
FUNC_0(bwstring_iterator VAR_1, size_t VAR_2)
{

 if (VAR_0 == 1)
  return ((unsigned char *) VAR_1) + VAR_2;
 else
  return ((wchar_t*) VAR_1) + VAR_2;
}
