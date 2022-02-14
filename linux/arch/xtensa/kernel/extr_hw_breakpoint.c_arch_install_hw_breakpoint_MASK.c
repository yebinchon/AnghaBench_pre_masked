
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,struct perf_event*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int,struct perf_event*) ;
 int FUNC_3 (int,struct perf_event*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

int FUNC_5(struct perf_event *VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_5)->type == VAR_2) {

  VAR_6 = FUNC_0(FUNC_4(VAR_3), VAR_1, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_3(VAR_6, VAR_5);

 } else {

  VAR_6 = FUNC_0(FUNC_4(VAR_4), VAR_0, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_2(VAR_6, VAR_5);
 }
 return 0;
}
