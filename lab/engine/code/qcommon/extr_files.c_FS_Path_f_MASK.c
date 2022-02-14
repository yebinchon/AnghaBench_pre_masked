
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* dir; TYPE_7__* pack; struct TYPE_11__* next; } ;
typedef TYPE_4__ searchpath_t ;
struct TYPE_13__ {int pakFilename; int numfiles; } ;
struct TYPE_9__ {scalar_t__ o; } ;
struct TYPE_10__ {TYPE_2__ file; } ;
struct TYPE_12__ {int name; TYPE_3__ handleFiles; } ;
struct TYPE_8__ {int gamedir; int path; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_5__* VAR_4 ;

void FUNC_2( void ) {
 searchpath_t *VAR_5;
 int VAR_6;

 FUNC_0 ("We are looking in the current search path:\n");
 for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->pack) {
   FUNC_0 ("%s (%i files)\n", VAR_5->pack->pakFilename, VAR_5->pack->numfiles);
   if ( VAR_2 ) {
    if ( !FUNC_1(VAR_5->pack) ) {
     FUNC_0( "    not on the pure list\n" );
    } else {
     FUNC_0( "    on the pure list\n" );
    }
   }
  } else {
   FUNC_0 ("%s%c%s\n", VAR_5->dir->path, VAR_1, VAR_5->dir->gamedir );
  }
 }


 FUNC_0( "\n" );
 for ( VAR_6 = 1 ; VAR_6 < VAR_0 ; VAR_6++ ) {
  if ( VAR_4[VAR_6].handleFiles.file.o ) {
   FUNC_0( "handle %i: %s\n", VAR_6, VAR_4[VAR_6].name );
  }
 }
}
