
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;


 int FUNC_0 (struct repository*,void const*,int *) ;
 int FUNC_1 (void const*,void const*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 struct repository *VAR_3 = VAR_2;
 int VAR_4 = FUNC_0(VAR_3, VAR_0, ((void*)0));
 int VAR_5 = FUNC_0(VAR_3, VAR_1, ((void*)0));
 int VAR_6;
 int VAR_7;





 if (VAR_4 == VAR_5)
  return FUNC_1(VAR_0, VAR_1);
 VAR_6 = VAR_4 % 4;
 VAR_7 = VAR_5 % 4;
 return VAR_6 > VAR_7 ? 1 : -1;
}
