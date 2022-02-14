
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {scalar_t__ eType; } ;
struct TYPE_9__ {char* classname; int freeAfterEvent; int eventTime; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_10__ {int time; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;

gentity_t *FUNC_5( vec3_t VAR_3, int VAR_4 ) {
 gentity_t *VAR_5;
 vec3_t VAR_6;

 VAR_5 = FUNC_1();
 VAR_5->s.eType = VAR_0 + VAR_4;

 VAR_5->classname = "tempEntity";
 VAR_5->eventTime = VAR_1.time;
 VAR_5->freeAfterEvent = VAR_2;

 FUNC_3( VAR_3, VAR_6 );
 FUNC_2( VAR_6 );
 FUNC_0( VAR_5, VAR_6 );


 FUNC_4( VAR_5 );

 return VAR_5;
}
