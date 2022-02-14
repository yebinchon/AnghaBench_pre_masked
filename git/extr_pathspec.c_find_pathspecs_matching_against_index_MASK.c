
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int nr; } ;
struct index_state {int dummy; } ;


 int FUNC_0 (struct pathspec const*,struct index_state const*,char*) ;
 char* FUNC_1 (int ,int) ;

char *FUNC_2(const struct pathspec *VAR_0,
         const struct index_state *VAR_1)
{
 char *VAR_2 = FUNC_1(VAR_0->nr, 1);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 return VAR_2;
}
