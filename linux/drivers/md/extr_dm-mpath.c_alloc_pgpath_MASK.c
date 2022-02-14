
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgpath {int is_active; } ;


 int VAR_0 ;
 struct pgpath* FUNC_0 (int,int ) ;

__attribute__((used)) static struct pgpath *FUNC_1(void)
{
 struct pgpath *VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);

 if (!VAR_1)
  return ((void*)0);

 VAR_1->is_active = 1;

 return VAR_1;
}
