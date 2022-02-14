
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int stat_string; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4, u32 VAR_5, u8 *VAR_6)
{
 int VAR_7;

 if (VAR_5 != VAR_1)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  FUNC_0(VAR_6 + VAR_7 * VAR_0,
         VAR_3[VAR_7].stat_string,
         VAR_0);
}
