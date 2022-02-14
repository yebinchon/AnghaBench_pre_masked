
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* phys_gravitydirection; void* rs_maxjumpfallheight; void* rs_maxfallheight; void* rs_falldamage10; void* rs_falldamage5; void* rs_startelevator; void* rs_funcbob; void* rs_aircontrolledjumppad; void* rs_jumppad; void* rs_bfgjump; void* rs_rocketjump; void* rs_startjump; void* rs_startwalkoffledge; void* rs_startgrapple; void* rs_startcrouch; void* rs_barrierjump; void* rs_teleport; void* rs_waterjump; void* phys_falldelta10; void* phys_falldelta5; void* phys_jumpvel; void* phys_maxbarrier; void* phys_maxwaterjump; void* phys_maxsteepness; void* phys_maxstep; void* phys_swimaccelerate; void* phys_airaccelerate; void* phys_walkaccelerate; void* phys_maxswimvelocity; void* phys_maxcrouchvelocity; void* phys_maxwalkvelocity; void* phys_maxvelocity; void* phys_watergravity; void* phys_waterfriction; void* phys_gravity; void* phys_stopspeed; void* phys_friction; } ;


 void* FUNC_0 (char*,char*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void)
{
 VAR_0.phys_gravitydirection[0] = 0;
 VAR_0.phys_gravitydirection[1] = 0;
 VAR_0.phys_gravitydirection[2] = -1;
 VAR_0.phys_friction = FUNC_0("phys_friction", "6");
 VAR_0.phys_stopspeed = FUNC_0("phys_stopspeed", "100");
 VAR_0.phys_gravity = FUNC_0("phys_gravity", "800");
 VAR_0.phys_waterfriction = FUNC_0("phys_waterfriction", "1");
 VAR_0.phys_watergravity = FUNC_0("phys_watergravity", "400");
 VAR_0.phys_maxvelocity = FUNC_0("phys_maxvelocity", "320");
 VAR_0.phys_maxwalkvelocity = FUNC_0("phys_maxwalkvelocity", "320");
 VAR_0.phys_maxcrouchvelocity = FUNC_0("phys_maxcrouchvelocity", "100");
 VAR_0.phys_maxswimvelocity = FUNC_0("phys_maxswimvelocity", "150");
 VAR_0.phys_walkaccelerate = FUNC_0("phys_walkaccelerate", "10");
 VAR_0.phys_airaccelerate = FUNC_0("phys_airaccelerate", "1");
 VAR_0.phys_swimaccelerate = FUNC_0("phys_swimaccelerate", "4");
 VAR_0.phys_maxstep = FUNC_0("phys_maxstep", "19");
 VAR_0.phys_maxsteepness = FUNC_0("phys_maxsteepness", "0.7");
 VAR_0.phys_maxwaterjump = FUNC_0("phys_maxwaterjump", "18");
 VAR_0.phys_maxbarrier = FUNC_0("phys_maxbarrier", "33");
 VAR_0.phys_jumpvel = FUNC_0("phys_jumpvel", "270");
 VAR_0.phys_falldelta5 = FUNC_0("phys_falldelta5", "40");
 VAR_0.phys_falldelta10 = FUNC_0("phys_falldelta10", "60");
 VAR_0.rs_waterjump = FUNC_0("rs_waterjump", "400");
 VAR_0.rs_teleport = FUNC_0("rs_teleport", "50");
 VAR_0.rs_barrierjump = FUNC_0("rs_barrierjump", "100");
 VAR_0.rs_startcrouch = FUNC_0("rs_startcrouch", "300");
 VAR_0.rs_startgrapple = FUNC_0("rs_startgrapple", "500");
 VAR_0.rs_startwalkoffledge = FUNC_0("rs_startwalkoffledge", "70");
 VAR_0.rs_startjump = FUNC_0("rs_startjump", "300");
 VAR_0.rs_rocketjump = FUNC_0("rs_rocketjump", "500");
 VAR_0.rs_bfgjump = FUNC_0("rs_bfgjump", "500");
 VAR_0.rs_jumppad = FUNC_0("rs_jumppad", "250");
 VAR_0.rs_aircontrolledjumppad = FUNC_0("rs_aircontrolledjumppad", "300");
 VAR_0.rs_funcbob = FUNC_0("rs_funcbob", "300");
 VAR_0.rs_startelevator = FUNC_0("rs_startelevator", "50");
 VAR_0.rs_falldamage5 = FUNC_0("rs_falldamage5", "300");
 VAR_0.rs_falldamage10 = FUNC_0("rs_falldamage10", "500");
 VAR_0.rs_maxfallheight = FUNC_0("rs_maxfallheight", "0");
 VAR_0.rs_maxjumpfallheight = FUNC_0("rs_maxjumpfallheight", "450");
}
