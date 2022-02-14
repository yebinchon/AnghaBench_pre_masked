
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int index; int count; } ;
struct TYPE_4__ {int drc_index; TYPE_1__ ic; int drc_count; } ;
struct pseries_hp_errorlog {int action; TYPE_2__ _drc_u; int id_type; } ;


 int VAR_0 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int) ;
 int VAR_1 ;
 int FUNC_10 () ;

int FUNC_11(struct pseries_hp_errorlog *VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5;

 FUNC_8();

 switch (VAR_2->action) {
 case 133:
  switch (VAR_2->id_type) {
  case 130:
   VAR_3 = VAR_2->_drc_u.drc_count;
   VAR_5 = FUNC_0(VAR_3);
   break;
  case 128:
   VAR_4 = VAR_2->_drc_u.drc_index;
   VAR_5 = FUNC_2(VAR_4);
   break;
  case 129:
   VAR_3 = VAR_2->_drc_u.ic.count;
   VAR_4 = VAR_2->_drc_u.ic.index;
   VAR_5 = FUNC_1(VAR_3, VAR_4);
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  }

  break;
 case 131:
  switch (VAR_2->id_type) {
  case 130:
   VAR_3 = VAR_2->_drc_u.drc_count;
   VAR_5 = FUNC_4(VAR_3);
   break;
  case 128:
   VAR_4 = VAR_2->_drc_u.drc_index;
   VAR_5 = FUNC_6(VAR_4);
   break;
  case 129:
   VAR_3 = VAR_2->_drc_u.ic.count;
   VAR_4 = VAR_2->_drc_u.ic.index;
   VAR_5 = FUNC_5(VAR_3, VAR_4);
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  }

  break;
 case 132:
  VAR_4 = VAR_2->_drc_u.drc_index;
  VAR_5 = FUNC_3(VAR_4);
  break;
 default:
  FUNC_9("Invalid action (%d) specified\n", VAR_2->action);
  VAR_5 = -VAR_0;
  break;
 }

 if (!VAR_5) {
  VAR_1 = 1;
  VAR_5 = FUNC_7();
  VAR_1 = 0;
 }

 FUNC_10();
 return VAR_5;
}
