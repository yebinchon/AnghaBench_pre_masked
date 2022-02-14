
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servtab {int se_fd; struct servtab* se_next; } ;


 int FUNC_0 (struct servtab*) ;
 struct servtab* VAR_0 ;
 int FUNC_1 (struct servtab*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct servtab *VAR_2;

 VAR_1 = 0;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->se_next)
  if (VAR_2->se_fd == -1 && !FUNC_0(VAR_2))
   FUNC_1(VAR_2);
}
