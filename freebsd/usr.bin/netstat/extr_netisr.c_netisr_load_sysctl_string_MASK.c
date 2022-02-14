
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,size_t*,int *,int ) ;
 int FUNC_1 (int,char*,char const*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 VAR_3 = VAR_2;
 if (FUNC_0(VAR_0, VAR_1, &VAR_3, ((void*)0), 0) < 0)
  FUNC_1(-1, "%s", VAR_0);
 VAR_1[VAR_2 - 1] = '\0';
}
