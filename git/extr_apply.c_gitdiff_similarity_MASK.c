
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {unsigned long score; } ;
struct gitdiff_data {int dummy; } ;


 unsigned long FUNC_0 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct gitdiff_data *VAR_0,
         const char *VAR_1,
         struct patch *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1, ((void*)0), 10);
 if (VAR_3 <= 100)
  VAR_2->score = VAR_3;
 return 0;
}
