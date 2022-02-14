
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* connect; } ;
struct mdp5_cfg_hw {TYPE_1__ intf; } ;
typedef enum mdp5_intf_type { ____Placeholder_mdp5_intf_type } mdp5_intf_type ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int const VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct mdp5_cfg_hw *VAR_2, int VAR_3)
{
 const enum mdp5_intf_type *VAR_4 = VAR_2->intf.connect;
 const int VAR_5 = FUNC_0(VAR_2->intf.connect);
 int VAR_6 = 0, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_4[VAR_7] == VAR_1) {
   if (VAR_3 == VAR_7)
    return VAR_6;

   VAR_6++;
  }
 }

 return -VAR_0;
}
