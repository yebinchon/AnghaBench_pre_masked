
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 char const** VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(uint8_t VAR_2)
{
 if (VAR_2 >= VAR_0 || VAR_1[VAR_2] == ((void*)0))
  return ("UNKN");
 else
  return (VAR_1[VAR_2]);
}
