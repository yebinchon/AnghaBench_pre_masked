
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct oid_array {int nr; struct object_id* oid; } ;
struct object_id {int dummy; } ;
struct diff_options {int dummy; } ;
struct combine_diff_path {struct combine_diff_path* next; } ;


 int FUNC_0 (struct object_id const**,int) ;
 int VAR_0 ;
 int FUNC_1 (struct combine_diff_path*,struct object_id const*,struct object_id const**,int,struct strbuf*,struct diff_options*) ;
 int FUNC_2 (struct object_id const**) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static struct combine_diff_path *FUNC_5(
 const struct object_id *VAR_1, const struct oid_array *VAR_2,
 struct diff_options *VAR_3)
{
 int VAR_4, VAR_5 = VAR_2->nr;
 const struct object_id **VAR_6;
 struct combine_diff_path VAR_7;
 struct strbuf VAR_8;

 FUNC_0(VAR_6, VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_6[VAR_4] = &VAR_2->oid[VAR_4];


 VAR_7.next = ((void*)0);

 FUNC_3(&VAR_8, VAR_0);
 FUNC_1(&VAR_7, VAR_1, VAR_6, VAR_5, &VAR_8, VAR_3);

 FUNC_4(&VAR_8);
 FUNC_2(VAR_6);
 return VAR_7.next;
}
