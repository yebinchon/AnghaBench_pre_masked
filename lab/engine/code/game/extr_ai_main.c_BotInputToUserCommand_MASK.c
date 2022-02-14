
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_6__ {int serverTime; int* angles; float forwardmove; float rightmove; float upmove; int weapon; int buttons; } ;
typedef TYPE_1__ usercmd_t ;
struct TYPE_7__ {int actionflags; float* viewangles; int* dir; int speed; int weapon; } ;
typedef TYPE_2__ bot_input_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_0 (float) ;
 int FUNC_1 (float*,float*,float*,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 float FUNC_2 (float*,int*) ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 float FUNC_3 (float) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void FUNC_5(bot_input_t *VAR_33, usercmd_t *VAR_34, int VAR_35[3], int VAR_36) {
 vec3_t VAR_37, VAR_38, VAR_39;
 short VAR_40;
 int VAR_41;
 float VAR_42, VAR_43, VAR_44, VAR_45;


 FUNC_4(VAR_34, 0, sizeof(usercmd_t));

 VAR_34->serverTime = VAR_36;

 if (VAR_33->actionflags & VAR_3) {
  VAR_33->actionflags |= VAR_8;
  VAR_33->actionflags &= ~VAR_3;
 }

 if (VAR_33->actionflags & VAR_15) VAR_34->buttons = VAR_20;
 if (VAR_33->actionflags & VAR_1) VAR_34->buttons |= VAR_20;
 if (VAR_33->actionflags & VAR_16) VAR_34->buttons |= VAR_27;
 if (VAR_33->actionflags & VAR_5) VAR_34->buttons |= VAR_22;
 if (VAR_33->actionflags & VAR_17) VAR_34->buttons |= VAR_28;
 if (VAR_33->actionflags & VAR_18) VAR_34->buttons |= VAR_29;
 if (VAR_33->actionflags & VAR_0) VAR_34->buttons |= VAR_19;
 if (VAR_33->actionflags & VAR_13) VAR_34->buttons |= VAR_25;
 if (VAR_33->actionflags & VAR_6) VAR_34->buttons |= VAR_23;
 if (VAR_33->actionflags & VAR_7) VAR_34->buttons |= VAR_24;
 if (VAR_33->actionflags & VAR_14) VAR_34->buttons |= VAR_26;
 if (VAR_33->actionflags & VAR_4) VAR_34->buttons |= VAR_21;

 VAR_34->weapon = VAR_33->weapon;


 VAR_34->angles[VAR_30] = FUNC_0(VAR_33->viewangles[VAR_30]);
 VAR_34->angles[VAR_32] = FUNC_0(VAR_33->viewangles[VAR_32]);
 VAR_34->angles[VAR_31] = FUNC_0(VAR_33->viewangles[VAR_31]);

 for (VAR_41 = 0; VAR_41 < 3; VAR_41++) {
  VAR_40 = VAR_34->angles[VAR_41] - VAR_35[VAR_41];







  VAR_34->angles[VAR_41] = VAR_40;
 }



 if (VAR_33->dir[2]) VAR_37[VAR_30] = VAR_33->viewangles[VAR_30];
 else VAR_37[VAR_30] = 0;
 VAR_37[VAR_32] = VAR_33->viewangles[VAR_32];
 VAR_37[VAR_31] = 0;
 FUNC_1(VAR_37, VAR_38, VAR_39, ((void*)0));

 VAR_33->speed = VAR_33->speed * 127 / 400;

 VAR_42 = FUNC_2(VAR_38, VAR_33->dir);
 VAR_43 = FUNC_2(VAR_39, VAR_33->dir);
 VAR_44 = FUNC_3(VAR_38[2]) * VAR_33->dir[2];
 VAR_45 = FUNC_3(VAR_42);

 if (FUNC_3(VAR_43) > VAR_45) {
  VAR_45 = FUNC_3(VAR_43);
 }

 if (FUNC_3(VAR_44) > VAR_45) {
  VAR_45 = FUNC_3(VAR_44);
 }

 if (VAR_45 > 0) {
  VAR_42 *= VAR_33->speed / VAR_45;
  VAR_43 *= VAR_33->speed / VAR_45;
  VAR_44 *= VAR_33->speed / VAR_45;
 }

 VAR_34->forwardmove = VAR_42;
 VAR_34->rightmove = VAR_43;
 VAR_34->upmove = VAR_44;

 if (VAR_33->actionflags & VAR_10) VAR_34->forwardmove = 127;
 if (VAR_33->actionflags & VAR_9) VAR_34->forwardmove = -127;
 if (VAR_33->actionflags & VAR_11) VAR_34->rightmove = -127;
 if (VAR_33->actionflags & VAR_12) VAR_34->rightmove = 127;

 if (VAR_33->actionflags & VAR_8) VAR_34->upmove = 127;

 if (VAR_33->actionflags & VAR_2) VAR_34->upmove = -127;
}
