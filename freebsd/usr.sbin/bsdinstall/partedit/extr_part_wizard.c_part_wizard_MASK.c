
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmesh {int dummy; } ;


 char* FUNC_0 (struct gmesh*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct gmesh*) ;
 int FUNC_5 (struct gmesh*) ;
 int FUNC_6 (struct gmesh*,char*,char const*,int) ;
 char* FUNC_7 (struct gmesh*,char*) ;

int
FUNC_8(const char *VAR_0)
{
 char *VAR_1, *VAR_2;
 const char *VAR_3;
 struct gmesh VAR_4;
 int VAR_5;

 if (VAR_0 != ((void*)0))
  VAR_3 = VAR_0;
 else
  VAR_3 = "ufs";

startwizard:
 VAR_5 = FUNC_5(&VAR_4);

 FUNC_2();
 VAR_5 = FUNC_5(&VAR_4);
 VAR_1 = FUNC_0(&VAR_4);
 if (VAR_1 == ((void*)0))
  return (1);

 FUNC_1();
 FUNC_2();
 VAR_2 = FUNC_7(&VAR_4, VAR_1);
 FUNC_3(VAR_1);
 if (VAR_2 == ((void*)0))
  return (1);

 FUNC_4(&VAR_4);
 FUNC_1();
 FUNC_2();
 VAR_5 = FUNC_5(&VAR_4);

 VAR_5 = FUNC_6(&VAR_4, VAR_2, VAR_3, 1);
 if (VAR_5)
  goto startwizard;
 FUNC_3(VAR_2);

 FUNC_4(&VAR_4);

 return (0);
}
