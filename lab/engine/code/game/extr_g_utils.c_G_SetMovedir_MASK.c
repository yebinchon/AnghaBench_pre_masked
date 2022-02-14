
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int member_1; int member_2; int member_0; } ;
typedef TYPE_1__ vec3_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,int *,int *) ;
 int FUNC_1 (TYPE_1__) ;
 scalar_t__ FUNC_2 (TYPE_1__,TYPE_1__) ;
 int FUNC_3 (TYPE_1__,TYPE_1__) ;

void FUNC_4( vec3_t VAR_0, vec3_t VAR_1 ) {
 static vec3_t VAR_2 = {0, -1, 0};
 static vec3_t VAR_3 = {0, 0, 1};
 static vec3_t VAR_4 = {0, -2, 0};
 static vec3_t VAR_5 = {0, 0, -1};

 if ( FUNC_2 (VAR_0, VAR_2) ) {
  FUNC_3 (VAR_3, VAR_1);
 } else if ( FUNC_2 (VAR_0, VAR_4) ) {
  FUNC_3 (VAR_5, VAR_1);
 } else {
  FUNC_0 (VAR_0, VAR_1, ((void*)0), ((void*)0));
 }
 FUNC_1( VAR_0 );
}
