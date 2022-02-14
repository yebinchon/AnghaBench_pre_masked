
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_error_log {int dummy; } ;
struct pseries_errorlog {scalar_t__ data; } ;
struct epow_errorlog {int sensor_value; int event_modifier; } ;
 int VAR_0 ;
 int FUNC_0 () ;
 struct pseries_errorlog* FUNC_1 (struct rtas_error_log*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct rtas_error_log *VAR_2)
{
 struct pseries_errorlog *VAR_3;
 struct epow_errorlog *VAR_4;
 char VAR_5;
 char VAR_6;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3 == ((void*)0))
  return;

 VAR_4 = (struct epow_errorlog *)VAR_3->data;
 VAR_5 = VAR_4->sensor_value & 0xF;
 VAR_6 = VAR_4->event_modifier & 0xF;

 switch (VAR_5) {
 case 132:
  if (VAR_1) {
   FUNC_7("Non critical power/cooling issue cleared\n");
   VAR_1--;
  }
  break;

 case 129:
  FUNC_7("Non-critical cooling issue detected. Check RTAS error"
   " log for details\n");
  break;

 case 128:
  FUNC_7("Non-critical power issue detected. Check RTAS error"
   " log for details\n");
  break;

 case 130:
  FUNC_2(VAR_4->event_modifier);
  break;

 case 131:
  FUNC_5("Critical power/cooling issue detected. Check RTAS"
    " error log for details. Powering off.\n");
  FUNC_4(1);
  break;

 case 134:
 case 133:
  FUNC_5("System about to lose power. Check RTAS error log "
    " for details. Powering off immediately.\n");
  FUNC_0();
  FUNC_3();
  break;

 default:
  FUNC_6("Unknown power/cooling event (action code  = %d)\n",
   VAR_5);
 }


 if (VAR_5 != 132)
  VAR_1++;
}
