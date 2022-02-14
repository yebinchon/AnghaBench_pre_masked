
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct ref_entry *VAR_2 = *(struct ref_entry **)VAR_0;
 struct ref_entry *VAR_3 = *(struct ref_entry **)VAR_1;
 return FUNC_0(VAR_2->name, VAR_3->name);
}
