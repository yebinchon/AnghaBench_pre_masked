
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_filebuf ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (char*,int *,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int ,int ) ;

void FUNC_15(void)
{
 git_filebuf VAR_3 = VAR_1;
 git_buf VAR_4 = VAR_0, VAR_5 = VAR_0;

 if (!FUNC_12(FUNC_3()))
  FUNC_2();

 FUNC_1(FUNC_5(&VAR_4, FUNC_3(), "linkdir/link"));
 FUNC_1(FUNC_5(&VAR_5, FUNC_3(), "linkdir/target"));
 FUNC_1(FUNC_13("linkdir", 0777));
 FUNC_1(FUNC_14(VAR_5.ptr, VAR_4.ptr));

 FUNC_1(FUNC_8(&VAR_3, VAR_4.ptr, 0, 0666));
 FUNC_1(FUNC_9(&VAR_3, "%s\n", "libgit2 rocks"));

 FUNC_0(1, FUNC_11("linkdir/target.lock"));

 FUNC_1(FUNC_7(&VAR_3));
 FUNC_0(1, FUNC_11("linkdir/target"));

 FUNC_6(&VAR_3);
 FUNC_4(&VAR_4);
 FUNC_4(&VAR_5);

 FUNC_1(FUNC_10("linkdir", ((void*)0), VAR_2));
}
