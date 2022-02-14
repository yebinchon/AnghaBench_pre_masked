
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int (*) (char**,size_t*,void*)) ;
 int FUNC_1 (int (*) (char**,size_t*,void*)) ;
 int FUNC_2 (int ) ;
 struct servent* FUNC_3 () ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (struct servent*,char*,size_t*) ;

__attribute__((used)) static int
FUNC_6(char **VAR_2, size_t *VAR_3, void *VAR_4)
{
 struct servent *VAR_5;

 FUNC_0(FUNC_6);
 VAR_5 = FUNC_3();
 if (VAR_5 != ((void*)0)) {
  FUNC_5(VAR_5, ((void*)0), VAR_3);
  *VAR_2 = FUNC_4(*VAR_3);
  FUNC_2(*VAR_2 != ((void*)0));
  FUNC_5(VAR_5, *VAR_2, VAR_3);
 }

 FUNC_1(FUNC_6);
 return (VAR_5 == ((void*)0) ? VAR_0 : VAR_1);
}
