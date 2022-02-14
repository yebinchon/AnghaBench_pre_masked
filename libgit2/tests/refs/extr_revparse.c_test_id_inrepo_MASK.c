
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int to; int from; } ;
typedef TYPE_1__ git_revspec ;
typedef scalar_t__ git_revparse_mode_t ;
typedef int git_repository ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*,int *,char const*) ;

__attribute__((used)) static void FUNC_6(
 const char *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 git_revparse_mode_t VAR_4,
 git_repository *VAR_5)
{
 git_revspec VAR_6;
 int VAR_7 = FUNC_5(&VAR_6, VAR_5, VAR_1);

 if (VAR_2) {
  char VAR_8[64] = {0};
  FUNC_0(0, VAR_7);
  FUNC_4(VAR_8, FUNC_3(VAR_6.from));
  FUNC_1(VAR_8, VAR_2);
  FUNC_2(VAR_6.from);
 } else {
  FUNC_0(VAR_0, VAR_7);
 }

 if (VAR_3) {
  char VAR_9[64] = {0};
  FUNC_4(VAR_9, FUNC_3(VAR_6.to));
  FUNC_1(VAR_9, VAR_3);
  FUNC_2(VAR_6.to);
 }

 if (VAR_4)
  FUNC_0(VAR_4, VAR_6.flags);
}
