
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef enum ib_qp_attr_mask { ____Placeholder_ib_qp_attr_mask } ib_qp_attr_mask ;
struct TYPE_2__ {int* req_param; int* opt_param; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;

bool FUNC_0(enum ib_qp_state VAR_7, enum ib_qp_state VAR_8,
   enum ib_qp_type VAR_9, enum ib_qp_attr_mask VAR_10)
{
 enum ib_qp_attr_mask VAR_11, VAR_12;

 if (VAR_10 & VAR_4 &&
     VAR_7 != VAR_0 && VAR_7 != VAR_1 &&
     VAR_7 != VAR_2 && VAR_7 != VAR_3)
  return 0;

 if (!VAR_6[VAR_7][VAR_8].valid)
  return 0;

 VAR_11 = VAR_6[VAR_7][VAR_8].req_param[VAR_9];
 VAR_12 = VAR_6[VAR_7][VAR_8].opt_param[VAR_9];

 if ((VAR_10 & VAR_11) != VAR_11)
  return 0;

 if (VAR_10 & ~(VAR_11 | VAR_12 | VAR_5))
  return 0;

 return 1;
}
