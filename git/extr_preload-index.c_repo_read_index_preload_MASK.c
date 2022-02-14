
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int index; } ;
struct pathspec {int dummy; } ;


 int FUNC_0 (int ,struct pathspec const*,unsigned int) ;
 int FUNC_1 (struct repository*) ;

int FUNC_2(struct repository *VAR_0,
       const struct pathspec *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_0->index, VAR_1, VAR_2);
 return VAR_3;
}
