
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, int VAR_1)
{
 if (VAR_1)
  VAR_0 = FUNC_0(VAR_0, 0);
 else if (FUNC_1(VAR_0, "refs/heads/"))
  VAR_0 = VAR_0 + 11;
 else if (FUNC_1(VAR_0, "refs/"))
  VAR_0 = VAR_0 + 5;
 return VAR_0;
}
