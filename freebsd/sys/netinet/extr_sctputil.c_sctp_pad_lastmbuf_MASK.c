
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;


 struct mbuf* FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (struct mbuf*,int) ;

struct mbuf *
FUNC_2(struct mbuf *VAR_0, int VAR_1, struct mbuf *VAR_2)
{

 struct mbuf *VAR_3;

 if (VAR_2 != ((void*)0)) {
  return (FUNC_1(VAR_2, VAR_1));
 } else {
  for (VAR_3 = VAR_0; VAR_3; VAR_3 = FUNC_0(VAR_3)) {
   if (FUNC_0(VAR_3) == ((void*)0)) {
    return (FUNC_1(VAR_3, VAR_1));
   }
  }
 }
 return (((void*)0));
}
