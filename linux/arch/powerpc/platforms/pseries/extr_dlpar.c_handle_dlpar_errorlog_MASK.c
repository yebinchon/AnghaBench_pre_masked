
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* index; void* count; } ;
struct TYPE_4__ {TYPE_1__ ic; void* drc_index; void* drc_count; } ;
struct pseries_hp_errorlog {int id_type; int resource; TYPE_2__ _drc_u; } ;


 int VAR_0 ;






 void* FUNC_0 (void*) ;
 int FUNC_1 (struct pseries_hp_errorlog*) ;
 int FUNC_2 (struct pseries_hp_errorlog*) ;
 int FUNC_3 (struct pseries_hp_errorlog*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct pseries_hp_errorlog *VAR_1)
{
 int VAR_2;


 switch (VAR_1->id_type) {
 case 133:
  VAR_1->_drc_u.drc_count =
    FUNC_0(VAR_1->_drc_u.drc_count);
  break;
 case 131:
  VAR_1->_drc_u.drc_index =
    FUNC_0(VAR_1->_drc_u.drc_index);
  break;
 case 132:
  VAR_1->_drc_u.ic.count =
    FUNC_0(VAR_1->_drc_u.ic.count);
  VAR_1->_drc_u.ic.index =
    FUNC_0(VAR_1->_drc_u.ic.index);
 }

 switch (VAR_1->resource) {
 case 129:
  VAR_2 = FUNC_3(VAR_1);
  break;
 case 130:
  VAR_2 = FUNC_1(VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_2(VAR_1);
  break;

 default:
  FUNC_4("Invalid resource (%d) specified\n",
        VAR_1->resource);
  VAR_2 = -VAR_0;
 }

 return VAR_2;
}
