
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numDrawSurfs; int drawSurfs; int viewParms; int refdef; } ;
typedef TYPE_1__ drawSurfsCommand_t ;
struct TYPE_6__ {int viewParms; int refdef; } ;
struct TYPE_5__ {scalar_t__ numIndexes; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

const void *FUNC_2( const void *VAR_2 ) {
 const drawSurfsCommand_t *VAR_3;


 if ( VAR_1.numIndexes ) {
  FUNC_0();
 }

 VAR_3 = (const drawSurfsCommand_t *)VAR_2;

 VAR_0.refdef = VAR_3->refdef;
 VAR_0.viewParms = VAR_3->viewParms;

 FUNC_1( VAR_3->drawSurfs, VAR_3->numDrawSurfs );

 return (const void *)(VAR_3 + 1);
}
