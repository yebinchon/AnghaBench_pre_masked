
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ead_instance {scalar_t__ pid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 struct ead_instance* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct ead_instance *VAR_6)
{
 if (!VAR_3) {
  VAR_6->pid = FUNC_3();
  if (VAR_6->pid != 0) {
   if (VAR_6->pid < 0)
    VAR_6->pid = 0;
   return;
  }
 }

 VAR_1 = VAR_6;
 FUNC_5(VAR_0, VAR_2);
 FUNC_0(1);
 FUNC_1();
 FUNC_4(VAR_4);
 if (VAR_5 != VAR_4)
  FUNC_4(VAR_5);

 FUNC_2(0);
}
