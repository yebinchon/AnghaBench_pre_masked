
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int flags; } ;


 int VAR_0 ;
 struct object* FUNC_0 (int ,struct object_id const*) ;
 int FUNC_1 (int ,struct object*) ;
 int FUNC_2 (struct object*,int *) ;
 int VAR_1 ;
 struct object* FUNC_3 (int ,struct object_id const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(const struct object_id *VAR_3)
{
 struct object *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_3(VAR_2, VAR_3);


 if (!VAR_4)
  return;

 VAR_4->flags |= VAR_0;
 if (!FUNC_1(VAR_1, VAR_4))
  FUNC_2(VAR_4, &VAR_1);
}
