
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct diff_options {int pathchange; } ;
struct combine_diff_path {struct combine_diff_path* next; } ;
typedef int pathchange_fn_t ;


 int FUNC_0 (struct combine_diff_path*,struct object_id const*,struct object_id const**,int,struct strbuf*,struct diff_options*) ;
 int VAR_0 ;
 int FUNC_1 (struct combine_diff_path*) ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_1,
       const struct object_id *VAR_2,
       struct strbuf *VAR_3, struct diff_options *VAR_4)
{
 struct combine_diff_path VAR_5, *VAR_6;
 pathchange_fn_t VAR_7 = VAR_4->pathchange;

 VAR_5.next = ((void*)0);
 VAR_4->pathchange = VAR_0;
 FUNC_0(&VAR_5, VAR_2, &VAR_1, 1, VAR_3, VAR_4);

 for (VAR_6 = VAR_5.next; VAR_6;) {
  struct combine_diff_path *VAR_8 = VAR_6;
  VAR_6 = VAR_6->next;
  FUNC_1(VAR_8);
 }

 VAR_4->pathchange = VAR_7;
 return 0;
}
