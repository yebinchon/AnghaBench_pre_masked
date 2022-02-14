
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct object*) ;
 int FUNC_2 (struct object*) ;
 int FUNC_3 (struct object*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_5(struct object *VAR_3)
{
 if (VAR_2)
  FUNC_4(VAR_1, FUNC_0("Checking %s"), FUNC_3(VAR_3));

 if (VAR_3->flags & VAR_0)
  FUNC_1(VAR_3);
 else
  FUNC_2(VAR_3);
}
