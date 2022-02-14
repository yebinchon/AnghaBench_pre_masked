
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int unzFile ;
struct TYPE_8__ {struct TYPE_8__* name; } ;
typedef TYPE_1__ VFS_PAKFILE ;
struct TYPE_9__ {TYPE_1__* data; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(){
 while ( VAR_1 )
 {
  FUNC_2( (unzFile)VAR_1->data );
  VAR_1 = FUNC_1( VAR_1, VAR_1->data );
 }

 while ( VAR_0 )
 {
  VFS_PAKFILE* VAR_2 = (VFS_PAKFILE*)VAR_0->data;
  FUNC_0( VAR_2->name );
  FUNC_0( VAR_2 );
  VAR_0 = FUNC_1( VAR_0, VAR_2 );
 }
}
