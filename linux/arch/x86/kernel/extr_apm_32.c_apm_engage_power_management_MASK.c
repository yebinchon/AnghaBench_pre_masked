
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u32 ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int,int *,int*) ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static int FUNC_1(u_short VAR_7, int VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 if ((VAR_8 == 0) && (VAR_7 == VAR_2)
     && (VAR_6.bios.flags & VAR_0))
  return VAR_3;
 if (FUNC_0(VAR_4, VAR_7, VAR_8,
     &VAR_9, &VAR_10))
  return VAR_10;
 if (VAR_7 == VAR_2) {
  if (VAR_8)
   VAR_6.bios.flags &= ~VAR_1;
  else
   VAR_6.bios.flags |= VAR_1;
 }
 return VAR_5;
}
