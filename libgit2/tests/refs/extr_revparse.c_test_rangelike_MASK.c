
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int to; int from; int flags; } ;
typedef TYPE_1__ git_revspec ;
typedef int git_revparse_mode_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,char const*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1,
         const char *VAR_2,
         const char *VAR_3,
         git_revparse_mode_t VAR_4)
{
 char VAR_5[64] = {0};
 git_revspec VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6(&VAR_6, VAR_0, VAR_1);

 if (VAR_2 != ((void*)0)) {
  FUNC_1(0, VAR_7);
  FUNC_1(VAR_6.flags, VAR_4);
  FUNC_5(VAR_5, FUNC_4(VAR_6.from));
  FUNC_2(VAR_5, VAR_2);
  FUNC_5(VAR_5, FUNC_4(VAR_6.to));
  FUNC_2(VAR_5, VAR_3);
 } else
  FUNC_0(VAR_7 != 0);

 FUNC_3(VAR_6.from);
 FUNC_3(VAR_6.to);
}
