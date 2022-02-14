
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int playerState_t ;
typedef int byte ;
struct TYPE_2__ {int gameClientSize; scalar_t__ gameClients; } ;


 TYPE_1__ VAR_0 ;

playerState_t *FUNC_0( int VAR_1 ) {
 playerState_t *VAR_2;

 VAR_2 = (playerState_t *)((byte *)VAR_0.gameClients + VAR_0.gameClientSize*(VAR_1));

 return VAR_2;
}
