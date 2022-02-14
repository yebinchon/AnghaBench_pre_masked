
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_objects_filter_options {size_t sub_nr; struct list_objects_filter_options* sub; struct list_objects_filter_options* sparse_oid_name; int filter_spec; } ;


 int FUNC_0 (struct list_objects_filter_options*) ;
 int FUNC_1 (struct list_objects_filter_options*,int ,int) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(
 struct list_objects_filter_options *VAR_0)
{
 size_t VAR_1;

 if (!VAR_0)
  return;
 FUNC_2(&VAR_0->filter_spec, 0);
 FUNC_0(VAR_0->sparse_oid_name);
 for (VAR_1 = 0; VAR_1 < VAR_0->sub_nr; VAR_1++)
  FUNC_3(&VAR_0->sub[VAR_1]);
 FUNC_0(VAR_0->sub);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
