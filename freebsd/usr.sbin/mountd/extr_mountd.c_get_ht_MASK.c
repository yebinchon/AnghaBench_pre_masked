
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostlist {scalar_t__ ht_flag; struct hostlist* ht_next; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static struct hostlist *
FUNC_2(void)
{
 struct hostlist *VAR_0;

 VAR_0 = (struct hostlist *)FUNC_0(sizeof (struct hostlist));
 if (VAR_0 == (struct hostlist *)((void*)0))
  FUNC_1();
 VAR_0->ht_next = (struct hostlist *)((void*)0);
 VAR_0->ht_flag = 0;
 return (VAR_0);
}
