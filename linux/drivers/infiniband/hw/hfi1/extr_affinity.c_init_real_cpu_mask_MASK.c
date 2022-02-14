
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int real_cpu_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_1 ;
 int * FUNC_6 (int) ;

void FUNC_7(void)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 FUNC_0(&VAR_1.real_cpu_mask);


 FUNC_2(&VAR_1.real_cpu_mask, VAR_0);




 VAR_2 = FUNC_5(&VAR_1.real_cpu_mask);
 VAR_5 = FUNC_5(FUNC_6(
    FUNC_3(&VAR_1.real_cpu_mask)));





 VAR_3 = FUNC_3(&VAR_1.real_cpu_mask);
 for (VAR_4 = 0; VAR_4 < VAR_2 / VAR_5; VAR_4++)
  VAR_3 = FUNC_4(VAR_3, &VAR_1.real_cpu_mask);




 for (; VAR_4 < VAR_2; VAR_4++) {
  FUNC_1(VAR_3, &VAR_1.real_cpu_mask);
  VAR_3 = FUNC_4(VAR_3, &VAR_1.real_cpu_mask);
 }
}
