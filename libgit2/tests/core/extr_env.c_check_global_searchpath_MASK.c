
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,char const*,char const*) ;
 int FUNC_8 (TYPE_1__*,char const*) ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char const*) ;

__attribute__((used)) static void FUNC_11(
 const char *VAR_6, int VAR_7, const char *VAR_8, git_buf *VAR_9)
{
 git_buf VAR_10 = VAR_0;


 if (VAR_7 < 0)
  FUNC_3(FUNC_7(VAR_9, VAR_5, VAR_6, "$PATH"));
 else if (VAR_7 > 0)
  FUNC_3(FUNC_7(VAR_9, VAR_5, "$PATH", VAR_6));
 else
  FUNC_3(FUNC_8(VAR_9, VAR_6));

 FUNC_3(FUNC_9(
  VAR_4, VAR_1, VAR_9->ptr));


 FUNC_3(FUNC_9(
  VAR_3, VAR_1, &VAR_10));

 if (VAR_7 < 0)
  FUNC_0(FUNC_4(VAR_10.ptr, VAR_6) == 0);
 else if (VAR_7 > 0)
  FUNC_0(FUNC_5(VAR_10.ptr, VAR_6) == 0);
 else
  FUNC_2(VAR_10.ptr, VAR_6);


 FUNC_3(FUNC_10(VAR_9, VAR_8));


 FUNC_3(FUNC_9(
  VAR_4, VAR_1, ((void*)0)));
 FUNC_1(
  VAR_2, FUNC_10(VAR_9, VAR_8));

 FUNC_6(&VAR_10);
}
