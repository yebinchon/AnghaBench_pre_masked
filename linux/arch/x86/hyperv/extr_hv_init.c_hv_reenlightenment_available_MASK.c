
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; int misc_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static inline bool FUNC_0(void)
{




 return VAR_3.features & VAR_1 &&
  VAR_3.misc_features & VAR_0 &&
  VAR_3.features & VAR_2;
}
