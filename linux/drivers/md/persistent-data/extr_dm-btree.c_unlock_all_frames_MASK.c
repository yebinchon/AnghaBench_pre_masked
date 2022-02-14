
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int b; } ;
struct del_stack {int tm; int top; struct frame* spine; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct del_stack*) ;

__attribute__((used)) static void FUNC_2(struct del_stack *VAR_0)
{
 struct frame *VAR_1;

 while (FUNC_1(VAR_0)) {
  VAR_1 = VAR_0->spine + VAR_0->top--;
  FUNC_0(VAR_0->tm, VAR_1->b);
 }
}
