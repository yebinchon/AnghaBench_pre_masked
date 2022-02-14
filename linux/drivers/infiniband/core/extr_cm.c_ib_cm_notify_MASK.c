
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_cm_id {int dummy; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int VAR_0 ;


 int FUNC_0 (struct ib_cm_id*) ;
 int FUNC_1 (struct ib_cm_id*) ;

int FUNC_2(struct ib_cm_id *VAR_1, enum ib_event_type VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 129:
  VAR_3 = FUNC_0(VAR_1);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_1);
  break;
 default:
  VAR_3 = -VAR_0;
 }
 return VAR_3;
}
