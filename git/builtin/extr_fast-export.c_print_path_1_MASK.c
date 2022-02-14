
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,int *,int *,int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1, ((void*)0), ((void*)0), 0);
 if (VAR_2)
  FUNC_1(VAR_1, ((void*)0), VAR_0, 0);
 else if (FUNC_2(VAR_1, ' '))
  FUNC_0("\"%s\"", VAR_1);
 else
  FUNC_0("%s", VAR_1);
}
