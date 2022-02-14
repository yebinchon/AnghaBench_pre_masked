
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int maxs; int mins; int currentAngles; int currentOrigin; } ;
struct TYPE_5__ {TYPE_1__ r; } ;
typedef TYPE_2__ gentity_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int const,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const gentity_t* VAR_1, const vec3_t VAR_2,
               vec3_t VAR_3) {
 vec3_t VAR_4;


 FUNC_2(VAR_2, VAR_1->r.currentOrigin, VAR_4);


 FUNC_1(VAR_1->r.currentAngles, VAR_4, VAR_0);
 FUNC_0(VAR_4, VAR_1->r.mins, VAR_1->r.maxs, VAR_3);
}
