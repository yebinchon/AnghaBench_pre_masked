
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fetch_negotiation_algorithm; } ;
struct repository {TYPE_1__ settings; } ;
struct fetch_negotiator {int dummy; } ;




 int FUNC_0 (struct fetch_negotiator*) ;
 int FUNC_1 (struct repository*) ;
 int FUNC_2 (struct fetch_negotiator*) ;

void FUNC_3(struct repository *VAR_0,
      struct fetch_negotiator *VAR_1)
{
 FUNC_1(VAR_0);
 switch(VAR_0->settings.fetch_negotiation_algorithm) {
 case 128:
  FUNC_2(VAR_1);
  return;

 case 129:
 default:
  FUNC_0(VAR_1);
  return;
 }
}
