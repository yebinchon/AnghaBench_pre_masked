
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* pickup_sound; char* icon; char* precaches; char* sounds; int move_type; int giTag; int giType; int quantity; void* pickup_name; void** world_model; void* classname; } ;
typedef TYPE_1__ gitem_t ;
struct TYPE_6__ {int move_type; int tag; int type; int quantity; int name; int model_name; int classname; } ;
typedef TYPE_2__ dm_item_args_t ;


 void* FUNC_0 (int ) ;

void FUNC_1( dm_item_args_t* VAR_0, gitem_t* VAR_1 ) {
 VAR_1->classname = FUNC_0( VAR_0->classname );
 VAR_1->pickup_sound = "sound/misc/w_pkup.wav";
 VAR_1->world_model[0] = FUNC_0( VAR_0->model_name );
 VAR_1->icon = "icons/iconh_green";
 VAR_1->pickup_name = FUNC_0( VAR_0->name );
 VAR_1->quantity = VAR_0->quantity;
 VAR_1->giType = VAR_0->type;
 VAR_1->giTag = VAR_0->tag;
 VAR_1->move_type = VAR_0->move_type;
 VAR_1->precaches = "";
 VAR_1->sounds = "";
}
