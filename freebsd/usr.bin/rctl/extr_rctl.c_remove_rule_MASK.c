
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, FUNC_2(VAR_2) + 1, ((void*)0), 0);
 if (VAR_4 != 0) {
  if (VAR_1 == VAR_0)
   FUNC_0();
  FUNC_3("failed to remove rule '%s'", VAR_3);
 }

 return (VAR_4);
}
