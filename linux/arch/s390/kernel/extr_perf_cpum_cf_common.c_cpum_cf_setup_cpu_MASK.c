
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_cf_events {int flags; int info; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 struct cpu_cf_events* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct cpu_cf_events *VAR_3 = FUNC_3(&VAR_1);

 switch (*((int *) VAR_2)) {
 case 129:
  FUNC_1(&VAR_3->info, 0, sizeof(VAR_3->info));
  FUNC_2(&VAR_3->info);
  VAR_3->flags |= VAR_0;
  break;

 case 128:
  VAR_3->flags &= ~VAR_0;
  break;
 }


 FUNC_0(0);
}
