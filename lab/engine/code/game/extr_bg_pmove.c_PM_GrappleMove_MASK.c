
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {TYPE_1__* ps; } ;
struct TYPE_5__ {int groundPlane; int forward; } ;
struct TYPE_4__ {int velocity; int origin; int grapplePoint; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6( void ) {
 vec3_t VAR_3, VAR_4;
 float VAR_5;

 FUNC_4(VAR_1.forward, -16, VAR_4);
 FUNC_0(VAR_0->ps->grapplePoint, VAR_4, VAR_4);
 FUNC_5(VAR_4, VAR_0->ps->origin, VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 FUNC_3( VAR_3 );

 if (VAR_5 <= 100)
  FUNC_4(VAR_3, 10 * VAR_5, VAR_3);
 else
  FUNC_4(VAR_3, 800, VAR_3);

 FUNC_1(VAR_3, VAR_0->ps->velocity);

 VAR_1.groundPlane = VAR_2;
}
