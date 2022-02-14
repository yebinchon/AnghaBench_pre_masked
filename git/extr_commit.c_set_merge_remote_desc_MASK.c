
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct merge_remote_desc {struct object* obj; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct merge_remote_desc*,char const*,char const*) ;
 int VAR_0 ;
 struct merge_remote_desc** FUNC_1 (int *,struct commit*) ;

void FUNC_2(struct commit *VAR_1,
      const char *VAR_2, struct object *VAR_3)
{
 struct merge_remote_desc *VAR_4;
 FUNC_0(VAR_4, VAR_2, VAR_2);
 VAR_4->obj = VAR_3;
 *FUNC_1(&VAR_0, VAR_1) = VAR_4;
}
