
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bot_weaponstate_t ;
struct TYPE_2__ {int (* Print ) (int ,char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int ** VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;

bot_weaponstate_t *FUNC_2(int VAR_4)
{
 if (VAR_4 <= 0 || VAR_4 > VAR_0)
 {
  VAR_2.Print(VAR_1, "weapon state handle %d out of range\n", VAR_4);
  return ((void*)0);
 }
 if (!VAR_3[VAR_4])
 {
  VAR_2.Print(VAR_1, "invalid weapon state %d\n", VAR_4);
  return ((void*)0);
 }
 return VAR_3[VAR_4];
}
