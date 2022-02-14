
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chap {int chap_id; } ;


 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (int,char*) ;

char *
FUNC_2(const struct chap *VAR_0)
{
 char *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1, "%d", VAR_0->chap_id);
 if (VAR_2 < 0)
  FUNC_1(1, "asprintf");

 return (VAR_1);
}
