
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diffgrep_cb {int hit; int regexp; } ;
typedef int regmatch_t ;


 int FUNC_0 (int ,char*,unsigned long,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, char *VAR_1, unsigned long VAR_2)
{
 struct diffgrep_cb *VAR_3 = VAR_0;
 regmatch_t VAR_4;

 if (VAR_1[0] != '+' && VAR_1[0] != '-')
  return;
 if (VAR_3->hit)




  return;
 VAR_3->hit = !FUNC_0(VAR_3->regexp, VAR_1 + 1, VAR_2 - 1, 1,
     &VAR_4, 0);
}
