
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine_check_event {scalar_t__ in_use; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 struct machine_check_event* FUNC_2 (int *) ;

int FUNC_3(struct machine_check_event *VAR_3, bool VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2) - 1;
 struct machine_check_event *VAR_6;
 int VAR_7 = 0;


 if (VAR_5 < 0)
  return VAR_7;


 if (VAR_5 < VAR_0) {
  VAR_6 = FUNC_2(&VAR_1[VAR_5]);

  if (VAR_3)
   *VAR_3 = *VAR_6;
  if (VAR_4)
   VAR_6->in_use = 0;
  VAR_7 = 1;
 }

 if (VAR_4)
  FUNC_0(VAR_2);

 return VAR_7;
}
