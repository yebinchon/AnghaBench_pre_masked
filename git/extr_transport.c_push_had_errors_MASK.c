
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int status; struct ref* next; } ;






__attribute__((used)) static int FUNC_0(struct ref *VAR_0)
{
 for (; VAR_0; VAR_0 = VAR_0->next) {
  switch (VAR_0->status) {
  case 130:
  case 128:
  case 129:
   break;
  default:
   return 1;
  }
 }
 return 0;
}
