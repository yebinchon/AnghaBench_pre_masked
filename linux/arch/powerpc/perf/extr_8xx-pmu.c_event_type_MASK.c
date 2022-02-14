
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int config; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




__attribute__((used)) static int FUNC_0(struct perf_event *VAR_10)
{
 switch (VAR_10->attr.type) {
 case 130:
  if (VAR_10->attr.config == VAR_8)
   return VAR_4;
  if (VAR_10->attr.config == VAR_9)
   return VAR_6;
  break;
 case 129:
  if (VAR_10->attr.config == VAR_3)
   return VAR_7;
  if (VAR_10->attr.config == VAR_0)
   return VAR_5;
  break;
 case 128:
  break;
 default:
  return -VAR_1;
 }
 return -VAR_2;
}
