
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int weightconfig_t ;
struct TYPE_5__ {int numweapons; TYPE_1__* weaponinfo; } ;
typedef TYPE_2__ weaponconfig_t ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;

int *FUNC_2(weightconfig_t *VAR_0, weaponconfig_t *VAR_1)
{
 int *VAR_2, VAR_3;


 VAR_2 = (int *) FUNC_1(sizeof(int) * VAR_1->numweapons);

 for (VAR_3 = 0; VAR_3 < VAR_1->numweapons; VAR_3++)
 {
  VAR_2[VAR_3] = FUNC_0(VAR_0, VAR_1->weaponinfo[VAR_3].name);
 }
 return VAR_2;
}
