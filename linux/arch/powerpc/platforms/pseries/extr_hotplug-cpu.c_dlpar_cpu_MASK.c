
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int drc_index; int drc_count; } ;
struct pseries_hp_errorlog {int action; int id_type; TYPE_1__ _drc_u; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 () ;

int FUNC_7(struct pseries_hp_errorlog *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->_drc_u.drc_count;
 VAR_5 = VAR_3->_drc_u.drc_index;

 FUNC_4();

 switch (VAR_3->action) {
 case 128:
  if (VAR_3->id_type == VAR_1)
   VAR_6 = FUNC_2(VAR_4);
  else if (VAR_3->id_type == VAR_2)
   VAR_6 = FUNC_3(VAR_5);
  else
   VAR_6 = -VAR_0;
  break;
 case 129:
  if (VAR_3->id_type == VAR_1)
   VAR_6 = FUNC_1(VAR_4);
  else if (VAR_3->id_type == VAR_2)
   VAR_6 = FUNC_0(VAR_5);
  else
   VAR_6 = -VAR_0;
  break;
 default:
  FUNC_5("Invalid action (%d) specified\n", VAR_3->action);
  VAR_6 = -VAR_0;
  break;
 }

 FUNC_6();
 return VAR_6;
}
