
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct diff_options {int dummy; } ;
struct combine_diff_path {int next; } ;


 int FUNC_0 (int ) ;
 struct combine_diff_path* FUNC_1 (struct combine_diff_path*,struct object_id const*,struct object_id const**,int,struct strbuf*,struct diff_options*) ;

struct combine_diff_path *FUNC_2(
 struct combine_diff_path *VAR_0, const struct object_id *VAR_1,
 const struct object_id **VAR_2, int VAR_3,
 struct strbuf *VAR_4, struct diff_options *VAR_5)
{
 VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);





 FUNC_0(VAR_0->next);

 return VAR_0;
}
