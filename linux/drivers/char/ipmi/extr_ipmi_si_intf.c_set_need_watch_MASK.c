
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int si_lock; int need_watch; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct smi_info*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, unsigned int VAR_1)
{
 struct smi_info *VAR_2 = VAR_0;
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = !!VAR_1;

 FUNC_0(&VAR_2->need_watch, VAR_4);
 FUNC_2(&VAR_2->si_lock, VAR_3);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_2->si_lock, VAR_3);
}
