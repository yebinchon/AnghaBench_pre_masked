
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf**,int*,int) ;
 int FUNC_2 (struct mbuf**,int*,int) ;

int
FUNC_3(struct mbuf **VAR_3, int *VAR_4, int VAR_5)
{
 struct mbuf *VAR_6;

 VAR_6 = *VAR_3;
 *VAR_3 = ((void*)0);

 if (&FUNC_2) {
  *VAR_3 = VAR_6;
  FUNC_2(VAR_3, VAR_4, VAR_5);
  return (VAR_0);
 }






 if (!VAR_2) {
  FUNC_0(VAR_6);
  return (VAR_0);
 }

 if (VAR_1 != ((void*)0)) {
  *VAR_3 = VAR_6;
  FUNC_1(VAR_3, VAR_4, VAR_5);
  return (VAR_0);
 }

 FUNC_0(VAR_6);
 return (VAR_0);
}
