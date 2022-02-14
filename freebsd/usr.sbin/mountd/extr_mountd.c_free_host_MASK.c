
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostlist {struct hostlist* ht_next; } ;
typedef int caddr_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct hostlist *VAR_0)
{
 struct hostlist *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->ht_next;
  FUNC_0((caddr_t)VAR_1);
 }
}
