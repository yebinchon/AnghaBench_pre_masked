
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,int ) ;
 char const* VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char,char const*,char*,char*) ;
 int FUNC_9 (TYPE_1__*,int ,char const*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

__attribute__((used)) static void FUNC_13(const char *VAR_2, bool VAR_3)
{
 git_buf VAR_4 = VAR_0;

 FUNC_0("template");
 if (FUNC_12(VAR_2, "template"))
  FUNC_3(FUNC_10("template", VAR_2));

 VAR_1 = VAR_2;





 FUNC_2(FUNC_8(&VAR_4, '/', VAR_2, "hooks", "link.sample"));



 FUNC_3(FUNC_11("update.sample", VAR_4.ptr));


 FUNC_6(&VAR_4);


 FUNC_2(FUNC_8(&VAR_4, '/', VAR_2, "hooks", ".dotfile"));
 FUNC_1(VAR_4.ptr, "something\n");

 FUNC_6(&VAR_4);

 if (VAR_3) {
  FUNC_2(FUNC_9(&VAR_4, FUNC_4(), VAR_2));
  FUNC_5("tmp_global_path", "init.templatedir", VAR_4.ptr);
 }

 FUNC_7(&VAR_4);
}
