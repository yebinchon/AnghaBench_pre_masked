
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int flags; int oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct object*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct object*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct object *VAR_3)
{





 if (!(VAR_3->flags & VAR_1)) {
  if (FUNC_3(&VAR_3->oid))
   return;
  if (FUNC_2(&VAR_3->oid))
   return;
  FUNC_5(FUNC_0("missing %s %s"), FUNC_4(VAR_3),
     FUNC_1(VAR_3));
  VAR_2 |= VAR_0;
  return;
 }
}
