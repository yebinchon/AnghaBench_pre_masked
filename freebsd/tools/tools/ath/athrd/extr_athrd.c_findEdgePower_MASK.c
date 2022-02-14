
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ath_hal {int dummy; } ;
typedef int RD_EDGES_POWER ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static RD_EDGES_POWER*
FUNC_0(struct ath_hal *VAR_5, u_int VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  if (VAR_2[VAR_7] == VAR_6)
   return &VAR_4[VAR_7 * VAR_1];
 return VAR_0;
}
