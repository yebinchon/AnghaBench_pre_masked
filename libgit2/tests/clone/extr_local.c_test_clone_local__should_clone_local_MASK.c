
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char const*,int ) ;

void FUNC_8(void)
{
 git_buf VAR_5 = VAR_0;


 const char *VAR_6 = FUNC_1("testrepo.git");

 FUNC_2(FUNC_3(&VAR_5, "", VAR_6));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_2));
 FUNC_0(1, FUNC_7(VAR_5.ptr, VAR_1));
 FUNC_0(1, FUNC_7(VAR_5.ptr, VAR_3));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_4));

 FUNC_2(FUNC_3(&VAR_5, "localhost", VAR_6));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_2));
 FUNC_0(1, FUNC_7(VAR_5.ptr, VAR_1));
 FUNC_0(1, FUNC_7(VAR_5.ptr, VAR_3));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_4));

 FUNC_2(FUNC_3(&VAR_5, "other-host.mycompany.com", VAR_6));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_2));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_1));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_3));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_4));


 FUNC_2(FUNC_3(&VAR_5, "", VAR_6));
 FUNC_6(&VAR_5, 4);
 FUNC_2(FUNC_5(&VAR_5, "%2e%67%69%74"));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_2));
 FUNC_0(1, FUNC_7(VAR_5.ptr, VAR_1));
 FUNC_0(1, FUNC_7(VAR_5.ptr, VAR_3));
 FUNC_0(0, FUNC_7(VAR_5.ptr, VAR_4));

 FUNC_0(1, FUNC_7(VAR_6, VAR_2));
 FUNC_0(1, FUNC_7(VAR_6, VAR_1));
 FUNC_0(1, FUNC_7(VAR_6, VAR_3));
 FUNC_0(0, FUNC_7(VAR_6, VAR_4));

 FUNC_4(&VAR_5);
}
