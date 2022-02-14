
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdei_event {int reregister; int reenable; scalar_t__ type; int event_num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sdei_event*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sdei_event *VAR_4)
{
 FUNC_0(&VAR_2);

 FUNC_3(&VAR_3);
 VAR_4->reregister = 0;
 VAR_4->reenable = 0;
 FUNC_4(&VAR_3);

 if (VAR_4->type == VAR_0)
  return FUNC_1(VAR_4->event_num);

 return FUNC_2(VAR_1, VAR_4);
}
