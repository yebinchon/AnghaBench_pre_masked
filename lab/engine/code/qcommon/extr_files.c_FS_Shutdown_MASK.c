
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* dir; scalar_t__ pack; struct TYPE_5__* next; } ;
typedef TYPE_1__ searchpath_t ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {scalar_t__ fileSize; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

void FUNC_5( qboolean VAR_4 ) {
 searchpath_t *VAR_5, *VAR_6;
 int VAR_7;

 for(VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_2[VAR_7].fileSize) {
   FUNC_1(VAR_7);
  }
 }


 for(VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_6)
 {
  VAR_6 = VAR_5->next;

  if(VAR_5->pack)
   FUNC_2(VAR_5->pack);
  if (VAR_5->dir)
   FUNC_3(VAR_5->dir);

  FUNC_3(VAR_5);
 }


 VAR_1 = ((void*)0);

 FUNC_0( "path" );
 FUNC_0( "dir" );
 FUNC_0( "fdir" );
 FUNC_0( "touchFile" );
 FUNC_0( "which" );






}
