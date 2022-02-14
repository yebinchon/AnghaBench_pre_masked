
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am_state {int msg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct am_state*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct am_state*) ;
 int FUNC_6 (int *,char*,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct am_state *VAR_0)
{
 int VAR_1;

 FUNC_3(VAR_0->msg);
 VAR_1 = FUNC_6(((void*)0), "applypatch-msg", FUNC_2(VAR_0, "final-commit"), ((void*)0));

 if (!VAR_1) {
  FUNC_0(VAR_0->msg);
  if (FUNC_5(VAR_0) < 0)
   FUNC_4(FUNC_1("'%s' was deleted by the applypatch-msg hook"),
    FUNC_2(VAR_0, "final-commit"));
 }

 return VAR_1;
}
