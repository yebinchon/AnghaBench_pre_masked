
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {int maxentities; TYPE_2__* entities; } ;
struct TYPE_7__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_5__ {int origin; } ;
struct TYPE_6__ {TYPE_1__ i; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int ,char*,int) ;

void FUNC_3(int VAR_3, vec3_t VAR_4)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_1.maxentities)
 {
  VAR_2.Print(VAR_0, "AAS_EntityOrigin: entnum %d out of range\n", VAR_3);
  FUNC_0(VAR_4);
  return;
 }

 FUNC_1(VAR_1.entities[VAR_3].i.origin, VAR_4);
}
