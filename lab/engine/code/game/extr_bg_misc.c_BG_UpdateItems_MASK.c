
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * classname; } ;
typedef TYPE_1__ gitem_t ;
struct TYPE_7__ {int move_type; int tag; int type; int quantity; int model_name; int classname; int name; } ;
typedef TYPE_2__ dm_item_args_t ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int ,int,int ,int,int ,int,int *,int *,int *,int *) ;
 int FUNC_3 () ;

void FUNC_4( void ) {
 int VAR_5;
 dm_item_args_t VAR_6;
 gitem_t* VAR_7;



 int VAR_8 = VAR_4 - VAR_2;

 if ( VAR_8 != FUNC_3( ) ) {
  for ( VAR_5 = VAR_8; VAR_5 < FUNC_3( ); ++VAR_5 ) {



   if ( VAR_4 >= VAR_1 - 1 ) {
    FUNC_1( VAR_0, "Ran out of space to allocate new item!" );
    break;
   }

   if (FUNC_2(
     VAR_5, VAR_6.name, sizeof(VAR_6.name),
     VAR_6.classname, sizeof(VAR_6.classname),
     VAR_6.model_name, sizeof(VAR_6.model_name),
     &VAR_6.quantity, &VAR_6.type, &VAR_6.tag,
     &VAR_6.move_type
    )) {
    VAR_7 = &VAR_3[VAR_4++];
    FUNC_0( &VAR_6, VAR_7 );
   }
  }

  VAR_3[VAR_4 + 1].classname = ((void*)0);
 }
}
