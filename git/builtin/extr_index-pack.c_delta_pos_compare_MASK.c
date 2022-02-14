
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_delta_entry {int obj_no; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct ref_delta_entry *VAR_2 = *(struct ref_delta_entry **)VAR_0;
 struct ref_delta_entry *VAR_3 = *(struct ref_delta_entry **)VAR_1;
 return VAR_2->obj_no - VAR_3->obj_no;
}
