
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdei_event {scalar_t__ type; int event_num; scalar_t__ reenable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdei_event*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sdei_event*) ;
 int FUNC_5 (struct sdei_event*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct sdei_event *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_2);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4) {
  FUNC_2("Failed to re-register event %u\n", VAR_3->event_num);
  FUNC_5(VAR_3);
  return VAR_4;
 }

 if (VAR_3->reenable) {
  if (VAR_3->type == VAR_0)
   VAR_4 = FUNC_3(VAR_3->event_num);
  else
   VAR_4 = FUNC_4(VAR_1, VAR_3);
 }

 if (VAR_4)
  FUNC_2("Failed to re-enable event %u\n", VAR_3->event_num);

 return VAR_4;
}
