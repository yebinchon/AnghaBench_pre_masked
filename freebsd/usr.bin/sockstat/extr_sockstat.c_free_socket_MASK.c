
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sock* next; struct sock* faddr; struct sock* laddr; } ;
struct addr {struct addr* next; struct addr* faddr; struct addr* laddr; } ;


 int FUNC_0 (struct sock*) ;

__attribute__((used)) static void
FUNC_1(struct sock *VAR_0)
{
 struct addr *VAR_1, *VAR_2;

 VAR_1 = VAR_0->laddr;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 VAR_1 = VAR_0->faddr;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_0(VAR_0);
}
