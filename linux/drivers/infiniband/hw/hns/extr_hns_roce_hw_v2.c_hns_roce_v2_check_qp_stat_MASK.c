
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline bool FUNC_0(enum ib_qp_state VAR_5,
          enum ib_qp_state VAR_6)
{

 if ((VAR_5 != VAR_1 &&
     (VAR_6 == VAR_0 || VAR_6 == VAR_1)) ||
     ((VAR_5 == VAR_2 || VAR_5 == VAR_3) &&
     (VAR_6 == VAR_2 || VAR_6 == VAR_3)) ||
     (VAR_5 == VAR_4 && VAR_6 == VAR_2))
  return 1;

 return 0;

}
