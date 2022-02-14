
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;

void FUNC_11(void)
{

 git_buf VAR_4 = VAR_0;

 FUNC_3(VAR_3, ((void*)0));


 FUNC_0(!FUNC_8("d0"));
 FUNC_1(FUNC_7("d0", 0755, 0));
 FUNC_0(FUNC_8("d0"));

 FUNC_2(FUNC_10("d0", "d1"));
 FUNC_0(FUNC_9("d1"));

 FUNC_1(FUNC_7("d1/foo/bar", 0755, VAR_1|VAR_2));
 FUNC_0(FUNC_9("d1"));
 FUNC_0(FUNC_8("d1/foo/bar"));
 FUNC_0(FUNC_8("d0/foo/bar"));

 FUNC_2(FUNC_10("d0", "d2"));
 FUNC_0(FUNC_9("d2"));

 FUNC_6(&VAR_4, FUNC_4(), "d2/other/dir");

 FUNC_1(FUNC_7(VAR_4.ptr, 0755, VAR_1|VAR_2));
 FUNC_0(FUNC_9("d2"));
 FUNC_0(FUNC_8("d2/other/dir"));
 FUNC_0(FUNC_8("d0/other/dir"));

 FUNC_5(&VAR_4);

}
