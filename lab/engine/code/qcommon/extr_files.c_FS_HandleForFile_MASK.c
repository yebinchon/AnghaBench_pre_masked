
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fileHandle_t ;
struct TYPE_4__ {int * o; } ;
struct TYPE_5__ {TYPE_1__ file; } ;
struct TYPE_6__ {TYPE_2__ handleFiles; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static fileHandle_t FUNC_1(void) {
 int VAR_3;

 for ( VAR_3 = 1 ; VAR_3 < VAR_1 ; VAR_3++ ) {
  if ( VAR_2[VAR_3].handleFiles.file.o == ((void*)0) ) {
   return VAR_3;
  }
 }
 FUNC_0( VAR_0, "FS_HandleForFile: none free" );
 return 0;
}
