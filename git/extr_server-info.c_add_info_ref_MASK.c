
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info_ctx {int dummy; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; struct object_id const oid; } ;


 scalar_t__ VAR_0 ;
 struct object* FUNC_0 (int ,struct object*,char const*,int ) ;
 int FUNC_1 (struct object_id const*) ;
 struct object* FUNC_2 (int ,struct object_id const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct update_info_ctx*,char*,int ,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, const struct object_id *VAR_3,
   int VAR_4, void *VAR_5)
{
 struct update_info_ctx *VAR_6 = VAR_5;
 struct object *VAR_7 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_7)
  return -1;

 if (FUNC_3(VAR_6, "%s	%s\n", FUNC_1(VAR_3), VAR_2) < 0)
  return -1;

 if (VAR_7->type == VAR_0) {
  VAR_7 = FUNC_0(VAR_1, VAR_7, VAR_2, 0);
  if (VAR_7)
   if (FUNC_3(VAR_6, "%s	%s^{}\n",
    FUNC_1(&VAR_7->oid), VAR_2) < 0)
    return -1;
 }
 return 0;
}
