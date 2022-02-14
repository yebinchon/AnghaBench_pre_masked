
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sounds; int animations; int newAnims; int modelIcon; int headSkin; int headModel; int torsoSkin; int torsoModel; int legsSkin; int legsModel; int gender; int footsteps; int headOffset; } ;
typedef TYPE_1__ clientInfo_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2( clientInfo_t *VAR_0, clientInfo_t *VAR_1 ) {
 FUNC_0( VAR_0->headOffset, VAR_1->headOffset );
 VAR_1->footsteps = VAR_0->footsteps;
 VAR_1->gender = VAR_0->gender;

 VAR_1->legsModel = VAR_0->legsModel;
 VAR_1->legsSkin = VAR_0->legsSkin;
 VAR_1->torsoModel = VAR_0->torsoModel;
 VAR_1->torsoSkin = VAR_0->torsoSkin;
 VAR_1->headModel = VAR_0->headModel;
 VAR_1->headSkin = VAR_0->headSkin;
 VAR_1->modelIcon = VAR_0->modelIcon;

 VAR_1->newAnims = VAR_0->newAnims;

 FUNC_1( VAR_1->animations, VAR_0->animations, sizeof( VAR_1->animations ) );
 FUNC_1( VAR_1->sounds, VAR_0->sounds, sizeof( VAR_1->sounds ) );
}
