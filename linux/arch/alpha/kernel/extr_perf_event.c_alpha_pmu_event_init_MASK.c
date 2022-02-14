
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct perf_event*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct perf_event*) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_4)
{
 int VAR_5;


 if (FUNC_1(VAR_4))
  return -VAR_2;

 switch (VAR_4->attr.type) {
 case 128:
 case 130:
 case 129:
  break;

 default:
  return -VAR_1;
 }

 if (!VAR_3)
  return -VAR_0;


 VAR_5 = FUNC_0(VAR_4);

 return VAR_5;
}
