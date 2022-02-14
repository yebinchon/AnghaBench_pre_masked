
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int dummy; } ;


 int FUNC_0 (int ) ;
 struct object* FUNC_1 (int ,struct object_id const*,int ) ;
 struct object* FUNC_2 (int ,struct object_id const*) ;
 int VAR_0 ;

struct object *FUNC_3(const struct object_id *VAR_1)
{
 struct object *VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0, VAR_1,
        FUNC_0(VAR_0));
 return VAR_2;
}
