
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat64_config {int flags; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

int
FUNC_1(const struct nat64_config *VAR_2, in_addr_t VAR_3)
{

 if (VAR_2->flags & VAR_0)
  return (0);


 if (VAR_2->flags & VAR_1) {

  if ((VAR_3 & FUNC_0(0xff000000)) == FUNC_0(0x0a000000) ||
      (VAR_3 & FUNC_0(0xfff00000)) == FUNC_0(0xac100000) ||
      (VAR_3 & FUNC_0(0xffff0000)) == FUNC_0(0xc0a80000))
   return (1);
  if ((VAR_3 & FUNC_0(0xffffff00)) == FUNC_0(0xc0000000) ||
      (VAR_3 & FUNC_0(0xffffff00)) == FUNC_0(0xc0586300) ||
      (VAR_3 & FUNC_0(0xfffffe00)) == FUNC_0(0xc6120000) ||
      (VAR_3 & FUNC_0(0xffffff00)) == FUNC_0(0xc0000200) ||
      (VAR_3 & FUNC_0(0xfffffe00)) == FUNC_0(0xc6336400) ||
      (VAR_3 & FUNC_0(0xffffff00)) == FUNC_0(0xcb007100))
   return (1);
 }
 return (0);
}
