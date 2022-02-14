
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int startTime; scalar_t__ retrieved; int address; } ;
typedef TYPE_1__ serverStatus_t ;
typedef int netadr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;

serverStatus_t *FUNC_1( netadr_t VAR_2 ) {
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if ( FUNC_0( VAR_2, VAR_1[VAR_3].address ) ) {
   return &VAR_1[VAR_3];
  }
 }
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if ( VAR_1[VAR_3].retrieved ) {
   return &VAR_1[VAR_3];
  }
 }
 VAR_4 = -1;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_4 == -1 || VAR_1[VAR_3].startTime < VAR_5) {
   VAR_4 = VAR_3;
   VAR_5 = VAR_1[VAR_3].startTime;
  }
 }
 return &VAR_1[VAR_4];
}
