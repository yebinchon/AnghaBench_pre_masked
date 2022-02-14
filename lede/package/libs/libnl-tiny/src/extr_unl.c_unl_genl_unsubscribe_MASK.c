
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unl {int sock; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct unl*,char const*) ;

int FUNC_2(struct unl *VAR_0, const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_0->sock, VAR_2);
}
