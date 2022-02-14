
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_entry {int dummy; } ;
struct base_data {int * data; struct object_entry* obj; } ;


 struct base_data* FUNC_0 () ;
 int FUNC_1 (struct base_data*) ;

__attribute__((used)) static void FUNC_2(struct object_entry *VAR_0)
{
 struct base_data *VAR_1 = FUNC_0();
 VAR_1->obj = VAR_0;
 VAR_1->data = ((void*)0);
 FUNC_1(VAR_1);
}
