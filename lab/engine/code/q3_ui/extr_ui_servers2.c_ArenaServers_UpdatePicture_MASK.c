
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int mapname; } ;
typedef TYPE_5__ servernode_t ;
typedef int picname ;
struct TYPE_7__ {char* name; } ;
struct TYPE_8__ {scalar_t__ shader; TYPE_1__ generic; } ;
struct TYPE_10__ {size_t curvalue; int numitems; } ;
struct TYPE_12__ {TYPE_2__ mappic; TYPE_4__ list; TYPE_3__* table; } ;
struct TYPE_9__ {TYPE_5__* servernode; } ;


 int FUNC_0 (char*,int,char*,int ) ;
 TYPE_6__ VAR_0 ;

__attribute__((used)) static void FUNC_1( void ) {
 static char VAR_1[64];
 servernode_t* VAR_2;

 if( !VAR_0.list.numitems ) {
  VAR_0.mappic.generic.name = ((void*)0);
 }
 else {
  VAR_2 = VAR_0.table[VAR_0.list.curvalue].servernode;
  FUNC_0( VAR_1, sizeof(VAR_1), "levelshots/%s.tga", VAR_2->mapname );
  VAR_0.mappic.generic.name = VAR_1;

 }


 VAR_0.mappic.shader = 0;
}
