
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;
struct x {char* buf; } ;


 int VAR_0 ;

uint32_t FUNC_0(uintptr_t VAR_1, int VAR_2, void *VAR_3)
{
 return (VAR_2 & VAR_0) ?
  ((struct x *)VAR_1)->buf[0] : *(char *)VAR_1;
}
