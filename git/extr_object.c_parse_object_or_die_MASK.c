
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 char const* FUNC_2 (struct object_id const*) ;
 struct object* FUNC_3 (int ,struct object_id const*) ;
 int VAR_0 ;

struct object *FUNC_4(const struct object_id *VAR_1,
       const char *VAR_2)
{
 struct object *VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_1(FUNC_0("unable to parse object: %s"), VAR_2 ? VAR_2 : FUNC_2(VAR_1));
}
