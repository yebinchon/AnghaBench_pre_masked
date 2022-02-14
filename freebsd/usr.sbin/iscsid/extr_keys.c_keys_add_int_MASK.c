
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keys {int dummy; } ;


 int FUNC_0 (char**,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct keys*,char const*,char*) ;
 int FUNC_3 (int,char*) ;

void
FUNC_4(struct keys *VAR_0, const char *VAR_1, int VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3, "%d", VAR_2);
 if (VAR_4 <= 0)
  FUNC_3(1, "asprintf");

 FUNC_2(VAR_0, VAR_1, VAR_3);
 FUNC_1(VAR_3);
}
