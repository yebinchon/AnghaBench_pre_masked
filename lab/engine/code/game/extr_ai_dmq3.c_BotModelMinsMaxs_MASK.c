
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vec3_t ;
struct TYPE_7__ {int contents; int maxs; int currentOrigin; int mins; } ;
struct TYPE_6__ {int eType; int modelindex; } ;
struct TYPE_8__ {TYPE_2__ r; TYPE_1__ s; int inuse; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_9__ {int num_entities; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* VAR_0 ;
 TYPE_4__ VAR_1 ;

int FUNC_2(int VAR_2, int VAR_3, int VAR_4, vec3_t VAR_5, vec3_t VAR_6) {
 gentity_t *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_0[0];
 for (VAR_8 = 0; VAR_8 < VAR_1.num_entities; VAR_8++, VAR_7++) {
  if ( !VAR_7->inuse ) {
   continue;
  }
  if ( VAR_3 && VAR_7->s.eType != VAR_3) {
   continue;
  }
  if ( VAR_4 && VAR_7->r.contents != VAR_4) {
   continue;
  }
  if (VAR_7->s.modelindex == VAR_2) {
   if (VAR_5)
    FUNC_0(VAR_7->r.currentOrigin, VAR_7->r.mins, VAR_5);
   if (VAR_6)
    FUNC_0(VAR_7->r.currentOrigin, VAR_7->r.maxs, VAR_6);
   return VAR_8;
  }
 }
 if (VAR_5)
  FUNC_1(VAR_5);
 if (VAR_6)
  FUNC_1(VAR_6);
 return 0;
}
