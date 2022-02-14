
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riprt {int rrt_flags; scalar_t__ rrt_index; } ;
struct ifc {scalar_t__ ifc_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct riprt *VAR_6, struct ifc *VAR_7)
{


 if (VAR_6->rrt_flags & VAR_2) {

  if (VAR_6->rrt_flags & (VAR_1 | VAR_0))
   return 0;

  if (VAR_3)
   return 1;
  if (VAR_5 && VAR_6->rrt_index != VAR_7->ifc_index)
   return 1;
  return 0;
 }

 if (VAR_4 == 0 && VAR_6->rrt_index == VAR_7->ifc_index)
  return 0;
 return 1;
}
