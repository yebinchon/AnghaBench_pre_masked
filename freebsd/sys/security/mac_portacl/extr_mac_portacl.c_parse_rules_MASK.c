
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rulehead {int dummy; } ;
struct rule {int dummy; } ;


 int FUNC_0 (struct rulehead*,struct rule*,int ) ;
 int FUNC_1 (char*,struct rule**) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;
 int FUNC_4 (struct rulehead*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_1, struct rulehead *VAR_2)
{
 struct rule *VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 while ((VAR_4 = FUNC_3(&VAR_1, ",")) != ((void*)0)) {
  if (FUNC_2(VAR_4) == 0)
   continue;
  VAR_5 = FUNC_1(VAR_4, &VAR_3);
  if (VAR_5)
   goto out;
  FUNC_0(VAR_2, VAR_3, VAR_0);
 }
out:
 if (VAR_5 != 0)
  FUNC_4(VAR_2);
 return (VAR_5);
}
