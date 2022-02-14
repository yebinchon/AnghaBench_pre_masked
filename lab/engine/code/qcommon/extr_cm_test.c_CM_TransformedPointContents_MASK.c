
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;
typedef int clipHandle_t ;


 int FUNC_0 (scalar_t__* const,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__* const,scalar_t__* const,scalar_t__*) ;

int FUNC_5( const vec3_t VAR_1, clipHandle_t VAR_2, const vec3_t VAR_3, const vec3_t VAR_4) {
 vec3_t VAR_5;
 vec3_t VAR_6;
 vec3_t VAR_7, VAR_8, VAR_9;


 FUNC_4 (VAR_1, VAR_3, VAR_5);


 if ( VAR_2 != VAR_0 &&
 (VAR_4[0] || VAR_4[1] || VAR_4[2]) )
 {
  FUNC_0 (VAR_4, VAR_7, VAR_8, VAR_9);

  FUNC_3 (VAR_5, VAR_6);
  VAR_5[0] = FUNC_2 (VAR_6, VAR_7);
  VAR_5[1] = -FUNC_2 (VAR_6, VAR_8);
  VAR_5[2] = FUNC_2 (VAR_6, VAR_9);
 }

 return FUNC_1( VAR_5, VAR_2 );
}
