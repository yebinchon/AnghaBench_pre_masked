
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int dummy; } ;


 int VAR_0 ;
 struct passwd* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 struct passwd* FUNC_3 (int ) ;
 int FUNC_4 (unsigned char) ;

__attribute__((used)) static struct passwd *
FUNC_5(const char *VAR_1)
{
 struct passwd *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1)) == ((void*)0) &&
     (!FUNC_4((unsigned char)*VAR_1) ||
     (VAR_2 = FUNC_3((uid_t) FUNC_1(VAR_1))) == ((void*)0)))
  FUNC_2(VAR_0, "user `%s' does not exist", VAR_1);

 return (VAR_2);
}
