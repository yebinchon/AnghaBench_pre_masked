
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i ;


 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,int*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
 size_t VAR_1;
 int VAR_2;

 VAR_1 = sizeof(VAR_2);
 if (FUNC_1(VAR_0, &VAR_2, &VAR_1, ((void*)0), 0) < 0)
  FUNC_0(-1, "%s", VAR_0);
 return (VAR_2);
}
