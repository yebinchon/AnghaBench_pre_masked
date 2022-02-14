
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9950_glue {int data; int (* exit ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct tda9950_glue *VAR_1 = VAR_0;

 if (VAR_1 && VAR_1->exit)
  VAR_1->exit(VAR_1->data);
}
