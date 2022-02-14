
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw {struct ip_fw* next; } ;


 int FUNC_0 (struct ip_fw*) ;

void
FUNC_1(struct ip_fw *VAR_0)
{
 struct ip_fw *VAR_1;

 while ((VAR_1 = VAR_0) != ((void*)0)) {
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
