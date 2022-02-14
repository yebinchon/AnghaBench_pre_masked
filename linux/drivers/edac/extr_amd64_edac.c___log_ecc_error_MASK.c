
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mem_ctl_info {int dummy; } ;
struct err_info {int err_code; int channel; int csrow; int syndrome; int offset; int page; } ;
typedef enum hw_event_mc_err_type { ____Placeholder_hw_event_mc_err_type } hw_event_mc_err_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,struct mem_ctl_info*,int,int ,int ,int ,int ,int ,int,char const*,char*) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_3, struct err_info *VAR_4,
       u8 VAR_5)
{
 enum hw_event_mc_err_type VAR_6;
 const char *VAR_7;

 if (VAR_5 == 2)
  VAR_6 = VAR_0;
 else if (VAR_5 == 1)
  VAR_6 = VAR_2;
 else if (VAR_5 == 3)
  VAR_6 = VAR_1;
 else {
  FUNC_0(1, "Something is rotten in the state of Denmark.\n");
  return;
 }

 switch (VAR_4->err_code) {
 case 133:
  VAR_7 = "";
  break;
 case 130:
  VAR_7 = "Failed to map error addr to a node";
  break;
 case 131:
  VAR_7 = "Failed to map error addr to a csrow";
  break;
 case 132:
  VAR_7 = "Unknown syndrome - possible error reporting race";
  break;
 case 128:
  VAR_7 = "MCA_SYND not valid - unknown syndrome and csrow";
  break;
 case 129:
  VAR_7 = "Cannot decode normalized address";
  break;
 default:
  VAR_7 = "WTF error";
  break;
 }

 FUNC_1(VAR_6, VAR_3, 1,
        VAR_4->page, VAR_4->offset, VAR_4->syndrome,
        VAR_4->csrow, VAR_4->channel, -1,
        VAR_7, "");
}
