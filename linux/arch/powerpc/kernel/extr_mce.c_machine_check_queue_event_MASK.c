
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine_check_event {int dummy; } ;
typedef int evt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct machine_check_event*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,struct machine_check_event*,int) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 int VAR_5;
 struct machine_check_event VAR_6;

 if (!FUNC_2(&VAR_6, VAR_1))
  return;

 VAR_5 = FUNC_1(VAR_4) - 1;

 if (VAR_5 >= VAR_0) {
  FUNC_0(VAR_4);
  return;
 }
 FUNC_4(FUNC_5(&VAR_3[VAR_5]), &VAR_6, sizeof(VAR_6));


 FUNC_3(&VAR_2);
}
