
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {int dummy; } ;


 struct branch* VAR_0 ;
 struct branch* FUNC_0 (char const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct branch*) ;
 int FUNC_3 (char const*,char*) ;

struct branch *FUNC_4(const char *VAR_1)
{
 struct branch *VAR_2;

 FUNC_1();
 if (!VAR_1 || !*VAR_1 || !FUNC_3(VAR_1, "HEAD"))
  VAR_2 = VAR_0;
 else
  VAR_2 = FUNC_0(VAR_1, 0);
 FUNC_2(VAR_2);
 return VAR_2;
}
