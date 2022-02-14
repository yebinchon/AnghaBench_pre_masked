
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct perf_event {int (* destroy ) (struct perf_event*) ;TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_2)
{
 int VAR_3;


 if (FUNC_1(VAR_2))
  return -VAR_1;

 switch (VAR_2->attr.type) {
 case 128:
 case 129:
 case 130:
  VAR_3 = FUNC_0(VAR_2);
  break;

 default:
  return -VAR_0;
 }

 if (FUNC_3(VAR_3)) {
  if (VAR_2->destroy)
   VAR_2->destroy(VAR_2);
 }

 return VAR_3;
}
