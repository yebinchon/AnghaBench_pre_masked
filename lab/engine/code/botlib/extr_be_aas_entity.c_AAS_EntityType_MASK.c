
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int maxentities; TYPE_2__* entities; int initialized; } ;
struct TYPE_7__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ i; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

int FUNC_1(int VAR_3)
{
 if (!VAR_1.initialized) return 0;

 if (VAR_3 < 0 || VAR_3 >= VAR_1.maxentities)
 {
  VAR_2.Print(VAR_0, "AAS_EntityType: entnum %d out of range\n", VAR_3);
  return 0;
 }
 return VAR_1.entities[VAR_3].i.type;
}
