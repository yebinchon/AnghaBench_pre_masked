
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int eType; } ;
struct TYPE_6__ {int classname; TYPE_1__ s; int inuse; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_7__ {int num_entities; } ;
 int FUNC_0 (char*,...) ;
 TYPE_2__* VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_1 (void) {
 int VAR_2;
 gentity_t *VAR_3;

 VAR_3 = VAR_0;
 for (VAR_2 = 0; VAR_2 < VAR_1.num_entities ; VAR_2++, VAR_3++) {
  if ( !VAR_3->inuse ) {
   continue;
  }
  FUNC_0("%3i:", VAR_2);
  switch ( VAR_3->s.eType ) {
  case 138:
   FUNC_0("ET_GENERAL          ");
   break;
  case 132:
   FUNC_0("ET_PLAYER           ");
   break;
  case 135:
   FUNC_0("ET_ITEM             ");
   break;
  case 134:
   FUNC_0("ET_MISSILE          ");
   break;
  case 133:
   FUNC_0("ET_MOVER            ");
   break;
  case 139:
   FUNC_0("ET_BEAM             ");
   break;
  case 131:
   FUNC_0("ET_PORTAL           ");
   break;
  case 129:
   FUNC_0("ET_SPEAKER          ");
   break;
  case 130:
   FUNC_0("ET_PUSH_TRIGGER     ");
   break;
  case 128:
   FUNC_0("ET_TELEPORT_TRIGGER ");
   break;
  case 136:
   FUNC_0("ET_INVISIBLE        ");
   break;
  case 137:
   FUNC_0("ET_GRAPPLE          ");
   break;
  default:
   FUNC_0("%3i                 ", VAR_3->s.eType);
   break;
  }

  if ( VAR_3->classname ) {
   FUNC_0("%s", VAR_3->classname);
  }
  FUNC_0("\n");
 }
}
