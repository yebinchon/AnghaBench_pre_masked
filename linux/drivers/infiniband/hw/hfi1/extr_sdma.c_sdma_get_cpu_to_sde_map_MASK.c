
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int cpu_mask; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,int ,char*,char*) ;
 int FUNC_5 (char*,int ) ;

ssize_t FUNC_6(struct sdma_engine *VAR_2, char *VAR_3)
{
 FUNC_2(&VAR_1);
 if (FUNC_1(&VAR_2->cpu_mask))
  FUNC_4(VAR_3, VAR_0, "%s\n", "empty");
 else
  FUNC_0(1, VAR_3, &VAR_2->cpu_mask);
 FUNC_3(&VAR_1);
 return FUNC_5(VAR_3, VAR_0);
}
