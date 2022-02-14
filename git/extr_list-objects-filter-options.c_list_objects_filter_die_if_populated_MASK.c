
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_objects_filter_options {scalar_t__ choice; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

void FUNC_2(
 struct list_objects_filter_options *VAR_0)
{
 if (VAR_0->choice)
  FUNC_1(FUNC_0("multiple filter-specs cannot be combined"));
}
