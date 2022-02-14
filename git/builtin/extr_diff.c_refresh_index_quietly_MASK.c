
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_file {int dummy; } ;


 struct lock_file VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct lock_file*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct lock_file*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
 struct lock_file VAR_4 = VAR_0;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4, 0);
 if (VAR_5 < 0)
  return;
 FUNC_0();
 FUNC_2();
 FUNC_3(VAR_1|VAR_2);
 FUNC_4(VAR_3, &VAR_4);
}
