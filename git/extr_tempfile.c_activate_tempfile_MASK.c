
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int active; int owner; int list; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct tempfile*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct tempfile *VAR_3)
{
 static int VAR_4;

 if (FUNC_3(VAR_3))
  FUNC_0("activate_tempfile called for active object");

 if (!VAR_4) {
  FUNC_4(VAR_1);
  FUNC_1(VAR_0);
  VAR_4 = 1;
 }

 FUNC_5(&VAR_3->list, &VAR_2);
 VAR_3->owner = FUNC_2();
 VAR_3->active = 1;
}
