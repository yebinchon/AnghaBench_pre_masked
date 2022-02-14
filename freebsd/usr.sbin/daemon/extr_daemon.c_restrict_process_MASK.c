
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 struct passwd* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int *,struct passwd*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1)
{
 struct passwd *VAR_2 = ((void*)0);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_0(1, "unknown user: %s", VAR_1);

 if (FUNC_2(((void*)0), VAR_2, VAR_2->pw_uid, VAR_0) != 0)
  FUNC_0(1, "failed to set user environment");
}
