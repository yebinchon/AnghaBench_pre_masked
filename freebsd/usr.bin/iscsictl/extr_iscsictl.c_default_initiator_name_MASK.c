
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (int,size_t) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static char *
FUNC_5(void)
{
 char *VAR_2;
 size_t VAR_3;
 int VAR_4;

 VAR_3 = VAR_1 + FUNC_3(VAR_0);

 VAR_2 = FUNC_0(1, VAR_3 + 1);
 if (VAR_2 == ((void*)0))
  FUNC_4(1, "calloc");
 FUNC_2(VAR_2, VAR_0);
 VAR_4 = FUNC_1(VAR_2 + FUNC_3(VAR_0),
     VAR_3 - FUNC_3(VAR_0));
 if (VAR_4 != 0)
  FUNC_4(1, "gethostname");

 return (VAR_2);
}
