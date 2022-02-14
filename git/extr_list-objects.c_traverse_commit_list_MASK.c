
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traversal_context {int * filter; void* show_data; int show_object; int show_commit; struct rev_info* revs; } ;
struct rev_info {int dummy; } ;
typedef int show_object_fn ;
typedef int show_commit_fn ;


 int FUNC_0 (struct traversal_context*) ;

void FUNC_1(struct rev_info *VAR_0,
     show_commit_fn VAR_1,
     show_object_fn VAR_2,
     void *VAR_3)
{
 struct traversal_context VAR_4;
 VAR_4.revs = VAR_0;
 VAR_4.show_commit = VAR_1;
 VAR_4.show_object = VAR_2;
 VAR_4.show_data = VAR_3;
 VAR_4.filter = ((void*)0);
 FUNC_0(&VAR_4);
}
