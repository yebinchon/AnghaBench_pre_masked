
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_4;

 if (VAR_0 == ((void*)0))
  VAR_4 = FUNC_1(VAR_3, "#line %d%s", VAR_1, VAR_2);
 else
  VAR_4 = FUNC_1(VAR_3, "#line %d \"%s\"%s",
      VAR_1, VAR_0, VAR_2);
 if (VAR_4 < 0)
  FUNC_0();
}
