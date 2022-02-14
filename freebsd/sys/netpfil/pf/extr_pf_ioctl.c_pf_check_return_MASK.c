
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
typedef int pfil_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static pfil_return_t
FUNC_1(int VAR_3, struct mbuf **VAR_4)
{

 switch (VAR_3) {
 case 128:
  if (*VAR_4 == ((void*)0))
   return (VAR_0);
  else
   return (VAR_2);
  break;
 default:
  if (*VAR_4 != ((void*)0)) {
   FUNC_0(*VAR_4);
   *VAR_4 = ((void*)0);
  }
  return (VAR_1);
 }
}
