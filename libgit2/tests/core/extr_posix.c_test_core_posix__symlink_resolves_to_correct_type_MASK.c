
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;

void FUNC_13(void)
{
 git_buf VAR_1 = VAR_0;

 if (!FUNC_9(FUNC_5()))
  FUNC_4();

 FUNC_3(FUNC_7("dir", 0777, 0));
 FUNC_3(FUNC_7("file", 0777, 0));
 FUNC_1("dir/file", "symlink target");

 FUNC_2(FUNC_11("file", "dir/link"));

 FUNC_2(FUNC_8(&VAR_1, "dir/file"));
 FUNC_0(VAR_1.ptr, "symlink target");

 FUNC_3(FUNC_12("dir/link"));
 FUNC_3(FUNC_12("dir/file"));
 FUNC_3(FUNC_10("dir"));
 FUNC_3(FUNC_10("file"));

 FUNC_6(&VAR_1);
}
