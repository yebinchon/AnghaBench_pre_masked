
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 char* FUNC_3 (char**,char*) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_2 = 1;
 const char *VAR_3;
 char *VAR_4, *VAR_5, *VAR_6;

 if (VAR_0 != ((void*)0))
  FUNC_2(0, VAR_0);
 else if ((VAR_3 = FUNC_1("RPCGEN_CPP")) == ((void*)0))
  FUNC_2(0, "/usr/bin/cpp");
 else {

  VAR_4 = FUNC_4(VAR_3);
  for (VAR_5 = VAR_4, VAR_2 = 0; (VAR_6 = FUNC_3(&VAR_5, " \t")) != ((void*)0); ) {
   if (VAR_6[0])
    FUNC_2(VAR_2++, VAR_6);
  }
  FUNC_0(VAR_4);
 }

 FUNC_2(VAR_2, VAR_1);
}
