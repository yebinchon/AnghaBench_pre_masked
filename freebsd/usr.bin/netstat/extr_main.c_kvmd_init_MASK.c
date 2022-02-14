
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int *,int ,char*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(void)
{
 char VAR_5[VAR_1];

 if (VAR_2 != ((void*)0))
  return (0);

 VAR_2 = FUNC_1(VAR_4, VAR_3, ((void*)0), VAR_0, VAR_5);
 if (FUNC_2(FUNC_0()) != 0)
  FUNC_3(-1, "setgid");

 if (VAR_2 == ((void*)0)) {
  FUNC_4("kvm not available: %s", VAR_5);
  return (-1);
 }

 return (0);
}
