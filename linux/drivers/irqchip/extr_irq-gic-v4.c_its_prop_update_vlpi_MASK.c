
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int config; } ;
struct its_cmd_info {TYPE_1__ member_1; int cmd_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct its_cmd_info*) ;

int FUNC_1(int VAR_2, u8 VAR_3, bool VAR_4)
{
 struct its_cmd_info VAR_5 = {
  .cmd_type = VAR_4 ? VAR_0 : VAR_1,
  {
   .config = VAR_3,
  },
 };

 return FUNC_0(VAR_2, &VAR_5);
}
