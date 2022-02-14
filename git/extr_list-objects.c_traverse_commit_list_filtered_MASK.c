
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traversal_context {int filter; void* show_data; int show_commit; int show_object; struct rev_info* revs; } ;
struct rev_info {int dummy; } ;
struct oidset {int dummy; } ;
struct list_objects_filter_options {int dummy; } ;
typedef int show_object_fn ;
typedef int show_commit_fn ;


 int FUNC_0 (struct traversal_context*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct oidset*,struct list_objects_filter_options*) ;

void FUNC_3(
 struct list_objects_filter_options *VAR_0,
 struct rev_info *VAR_1,
 show_commit_fn VAR_2,
 show_object_fn VAR_3,
 void *VAR_4,
 struct oidset *VAR_5)
{
 struct traversal_context VAR_6;

 VAR_6.revs = VAR_1;
 VAR_6.show_object = VAR_3;
 VAR_6.show_commit = VAR_2;
 VAR_6.show_data = VAR_4;
 VAR_6.filter = FUNC_2(VAR_5, VAR_0);
 FUNC_0(&VAR_6);
 FUNC_1(VAR_6.filter);
}
