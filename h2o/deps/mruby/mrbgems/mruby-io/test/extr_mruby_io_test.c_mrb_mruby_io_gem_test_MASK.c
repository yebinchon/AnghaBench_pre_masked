
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_3 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_4(mrb_state* VAR_7)
{
  struct RClass *VAR_8 = FUNC_3(VAR_7, "MRubyIOTestUtil");
  FUNC_2(VAR_7, VAR_8, "io_test_setup", VAR_3, FUNC_0());
  FUNC_2(VAR_7, VAR_8, "io_test_cleanup", VAR_2, FUNC_0());

  FUNC_2(VAR_7, VAR_8, "file_test_setup", VAR_1, FUNC_0());
  FUNC_2(VAR_7, VAR_8, "file_test_cleanup", VAR_0, FUNC_0());

  FUNC_2(VAR_7, VAR_8, "mkdtemp", VAR_4, FUNC_1(1));
  FUNC_2(VAR_7, VAR_8, "rmdir", VAR_5, FUNC_1(1));
  FUNC_2(VAR_7, VAR_8, "win?", VAR_6, FUNC_0());
}
