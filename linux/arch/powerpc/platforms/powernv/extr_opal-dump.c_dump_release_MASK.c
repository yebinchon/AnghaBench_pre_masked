
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct dump_obj {int buffer; } ;


 int FUNC_0 (struct dump_obj*) ;
 struct dump_obj* FUNC_1 (struct kobject*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0)
{
 struct dump_obj *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_1->buffer);
 FUNC_0(VAR_1);
}
