
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct perf_event {scalar_t__ cpu; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct perf_event*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct perf_event*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct perf_event *VAR_5)
{
 int VAR_6 = 0;


 if (FUNC_5(VAR_5))
  return -VAR_2;

 switch (VAR_5->attr.type) {
 case 128:
 case 130:
 case 129:
  break;

 default:
  return -VAR_1;
 }

 if (VAR_5->cpu >= 0 && !FUNC_4(VAR_5->cpu))
  return -VAR_0;

 if (!FUNC_2(&VAR_3)) {
  FUNC_7(&VAR_4);
  if (FUNC_3(&VAR_3) == 0)
   VAR_6 = FUNC_6();

  if (!VAR_6)
   FUNC_1(&VAR_3);
  FUNC_8(&VAR_4);
 }

 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_5);
}
