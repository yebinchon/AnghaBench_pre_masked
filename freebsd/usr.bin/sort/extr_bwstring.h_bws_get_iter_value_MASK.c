
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char wchar_t ;
typedef scalar_t__ bwstring_iterator ;


 int VAR_0 ;

__attribute__((used)) static inline wchar_t
FUNC_0(bwstring_iterator VAR_1)
{

 if (VAR_0 == 1)
  return *((unsigned char *) VAR_1);
 else
  return *((wchar_t*) VAR_1);
}
