
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {double fraction; int entityNum; } ;
typedef TYPE_1__ trace_t ;


 int FUNC_0 (int const,int const,int const,int const,int,int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int const,int const,int const,int const,int ,int) ;

void FUNC_2( trace_t *VAR_2, const vec3_t VAR_3, const vec3_t VAR_4, const vec3_t VAR_5, const vec3_t VAR_6,
      int VAR_7, int VAR_8 ) {
 trace_t VAR_9;

 FUNC_1 ( &VAR_9, VAR_3, VAR_6, VAR_4, VAR_5, 0, VAR_8);
 VAR_9.entityNum = VAR_9.fraction != 1.0 ? VAR_1 : VAR_0;

 FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9);

 *VAR_2 = VAR_9;
}
