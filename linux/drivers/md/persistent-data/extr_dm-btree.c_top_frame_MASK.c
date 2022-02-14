
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int dummy; } ;
struct del_stack {scalar_t__ top; struct frame* spine; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct del_stack *VAR_1, struct frame **VAR_2)
{
 if (VAR_1->top < 0) {
  FUNC_0("btree deletion stack empty");
  return -VAR_0;
 }

 *VAR_2 = VAR_1->spine + VAR_1->top;

 return 0;
}
