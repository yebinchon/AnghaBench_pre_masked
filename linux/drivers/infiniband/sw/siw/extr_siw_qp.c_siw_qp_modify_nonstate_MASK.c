
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_qp_attrs {int flags; } ;
struct TYPE_2__ {int flags; } ;
struct siw_qp {TYPE_1__ attrs; } ;
typedef enum siw_qp_attr_mask { ____Placeholder_siw_qp_attr_mask } siw_qp_attr_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct siw_qp *VAR_4,
       struct siw_qp_attrs *VAR_5,
       enum siw_qp_attr_mask VAR_6)
{
 if (VAR_6 & VAR_0) {
  if (VAR_5->flags & VAR_1)
   VAR_4->attrs.flags |= VAR_1;
  else
   VAR_4->attrs.flags &= ~VAR_1;

  if (VAR_5->flags & VAR_3)
   VAR_4->attrs.flags |= VAR_3;
  else
   VAR_4->attrs.flags &= ~VAR_3;

  if (VAR_5->flags & VAR_2)
   VAR_4->attrs.flags |= VAR_2;
  else
   VAR_4->attrs.flags &= ~VAR_2;
 }
}
