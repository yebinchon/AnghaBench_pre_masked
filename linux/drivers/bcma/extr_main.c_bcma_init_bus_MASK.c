
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_bus {scalar_t__ nr_cores; int cores; scalar_t__ num; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bcma_bus*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct bcma_bus *VAR_2)
{
 FUNC_2(&VAR_1);
 VAR_2->num = VAR_0++;
 FUNC_3(&VAR_1);

 FUNC_0(&VAR_2->cores);
 VAR_2->nr_cores = 0;

 FUNC_1(VAR_2);
}
