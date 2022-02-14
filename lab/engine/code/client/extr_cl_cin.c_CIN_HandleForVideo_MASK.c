
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* fileName; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(void) {
 int VAR_3;

 for ( VAR_3 = 0 ; VAR_3 < VAR_1 ; VAR_3++ ) {
  if ( VAR_2[VAR_3].fileName[0] == 0 ) {
   return VAR_3;
  }
 }
 FUNC_0( VAR_0, "CIN_HandleForVideo: none free" );
 return -1;
}
