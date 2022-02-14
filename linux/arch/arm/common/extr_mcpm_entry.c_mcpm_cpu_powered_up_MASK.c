
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cpu_is_up ) (unsigned int,unsigned int) ;int (* cluster_is_up ) (unsigned int) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned int) ;
 int** VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int,unsigned int) ;

int FUNC_9(void)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 bool VAR_7, VAR_8;
 unsigned long VAR_9;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_6();
 VAR_5 = FUNC_0(VAR_4, 0);
 VAR_6 = FUNC_0(VAR_4, 1);
 FUNC_4(VAR_9);
 FUNC_1(&VAR_2);

 VAR_7 = !VAR_1[VAR_6][VAR_5];
 VAR_8 = FUNC_5(VAR_6);

 if (VAR_8 && VAR_3->cluster_is_up)
  VAR_3->cluster_is_up(VAR_6);
 if (VAR_7)
  VAR_1[VAR_6][VAR_5] = 1;
 if (VAR_3->cpu_is_up)
  VAR_3->cpu_is_up(VAR_5, VAR_6);

 FUNC_2(&VAR_2);
 FUNC_3(VAR_9);

 return 0;
}
