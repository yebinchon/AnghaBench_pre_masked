
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdei_event {int reenable; scalar_t__ type; int event_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct sdei_event*) ;
 struct sdei_event* FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(u32 VAR_6)
{
 int VAR_7 = -VAR_0;
 struct sdei_event *VAR_8;

 FUNC_0(&VAR_4);
 VAR_8 = FUNC_4(VAR_6);
 if (!VAR_8) {
  FUNC_1(&VAR_4);
  return -VAR_1;
 }

 FUNC_5(&VAR_5);
 VAR_8->reenable = 1;
 FUNC_6(&VAR_5);

 if (VAR_8->type == VAR_2)
  VAR_7 = FUNC_2(VAR_8->event_num);
 else
  VAR_7 = FUNC_3(VAR_3, VAR_8);
 FUNC_1(&VAR_4);

 return VAR_7;
}
