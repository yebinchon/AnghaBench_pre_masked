
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror {int error_count; int ms; } ;


 int FUNC_0 (int *) ;
 struct mirror* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mirror *VAR_0)
{
 struct mirror *VAR_1 = FUNC_1(VAR_0->ms);

 return !FUNC_0(&VAR_1->error_count);
}
