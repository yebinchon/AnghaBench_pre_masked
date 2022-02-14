
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,char*,int *) ;
 int FUNC_8 (char*,int) ;

void FUNC_9(void)
{
 git_buf VAR_6 = VAR_0;

 FUNC_0(FUNC_5(
  VAR_2, VAR_1, &VAR_6));

 VAR_4 = FUNC_3(&VAR_6);
 FUNC_2(VAR_5, ((void*)0));

 if (!FUNC_6("home"))
  FUNC_1(FUNC_8("home", 0777));
 FUNC_0(FUNC_7(&VAR_6, "home", ((void*)0)));
 FUNC_0(FUNC_5(
  VAR_3, VAR_1, VAR_6.ptr));
 FUNC_4(&VAR_6);
}
