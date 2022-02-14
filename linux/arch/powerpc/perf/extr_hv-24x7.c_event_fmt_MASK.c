
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_24x7_event_data {int event_group_record_offs; int event_counter_offs; } ;
typedef int buf ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ,char*,char const*,scalar_t__,char const*,char const*) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static char *FUNC_3(struct hv_24x7_event_data *VAR_1, unsigned VAR_2)
{
 const char *VAR_3;
 const char *VAR_4;
 const char *VAR_5;
 char VAR_6[8];

 switch (VAR_2) {
 case 129:
  FUNC_2(VAR_6, sizeof(VAR_6), "%d", VAR_2);
  VAR_5 = VAR_6;
  VAR_4 = "0x0";
  VAR_3 = "chip";
  break;
 case 128:
  VAR_5 = "?";
  VAR_4 = "0x0";
  VAR_3 = "core";
  break;
 default:
  VAR_5 = "?";
  VAR_4 = "?";
  VAR_3 = "vcpu";
 }

 return FUNC_1(VAR_0,
   "domain=%s,offset=0x%x,%s=?,lpar=%s",
   VAR_5,
   FUNC_0(VAR_1->event_counter_offs) +
    FUNC_0(VAR_1->event_group_record_offs),
   VAR_3,
   VAR_4);
}
