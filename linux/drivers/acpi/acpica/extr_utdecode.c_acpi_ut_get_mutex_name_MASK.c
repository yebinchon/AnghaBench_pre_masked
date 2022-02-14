
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 size_t VAR_0 ;
 char const** VAR_1 ;

const char *FUNC_0(u32 VAR_2)
{

 if (VAR_2 > VAR_0) {
  return ("Invalid Mutex ID");
 }

 return (VAR_1[VAR_2]);
}
