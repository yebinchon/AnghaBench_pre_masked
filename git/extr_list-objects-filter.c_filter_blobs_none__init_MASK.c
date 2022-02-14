
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_objects_filter_options {int dummy; } ;
struct filter {int free_fn; int filter_object_fn; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(
 struct list_objects_filter_options *VAR_2,
 struct filter *VAR_3)
{
 VAR_3->filter_object_fn = VAR_0;
 VAR_3->free_fn = VAR_1;
}
