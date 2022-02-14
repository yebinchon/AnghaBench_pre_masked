
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int flags; } ;


 int VAR_0 ;
 struct object* FUNC_0 (struct object_id const*) ;

__attribute__((used)) static void FUNC_1(const struct object_id *VAR_1)
{
 struct object *VAR_2 = FUNC_0(VAR_1);
 VAR_2->flags |= VAR_0;
}
