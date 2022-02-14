
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clear_range {int vm; int length; int start; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct clear_range *VAR_1 = VAR_0;

 FUNC_1(VAR_1->vm, VAR_1->start, VAR_1->length);
 FUNC_0(VAR_1->vm);

 return 0;
}
