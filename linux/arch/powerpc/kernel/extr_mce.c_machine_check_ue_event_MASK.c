
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine_check_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (int ,struct machine_check_event*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct machine_check_event *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1) - 1;

 if (VAR_5 >= VAR_0) {
  FUNC_0(VAR_1);
  return;
 }
 FUNC_3(FUNC_4(&VAR_3[VAR_5]), VAR_4, sizeof(*VAR_4));


 FUNC_2(&VAR_2);
}
