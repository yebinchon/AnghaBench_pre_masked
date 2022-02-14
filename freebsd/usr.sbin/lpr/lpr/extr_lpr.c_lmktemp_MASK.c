
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char* spool_dir; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,char*,char const*,int,int ) ;

__attribute__((used)) static char *
FUNC_3(const struct printer *VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
 register char *VAR_5;

 if ((VAR_5 = FUNC_1(VAR_4)) == ((void*)0))
  FUNC_0(1, "out of memory");
 (void) FUNC_2(VAR_5, VAR_4, "%s/%sA%03d%s", VAR_1->spool_dir, VAR_2, VAR_3,
     VAR_0);
 return(VAR_5);
}
