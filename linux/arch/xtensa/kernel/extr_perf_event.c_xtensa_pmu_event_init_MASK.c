
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; size_t config; } ;
struct TYPE_3__ {int config; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_9)
{
 int VAR_10;

 switch (VAR_9->attr.type) {
 case 130:
  if (VAR_9->attr.config >= FUNC_0(VAR_8) ||
      VAR_8[VAR_9->attr.config] == 0)
   return -VAR_0;
  VAR_9->hw.config = VAR_8[VAR_9->attr.config];
  return 0;

 case 129:
  VAR_10 = FUNC_1(VAR_9->attr.config);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_9->hw.config = VAR_10;
  return 0;

 case 128:

  if ((VAR_9->attr.config & VAR_5) ==
      (1 << VAR_6))
   return -VAR_0;
  VAR_9->hw.config = (VAR_9->attr.config &
        (VAR_3 |
         VAR_7 |
         VAR_5 |
         VAR_4)) |
   VAR_2;
  return 0;

 default:
  return -VAR_1;
 }
}
