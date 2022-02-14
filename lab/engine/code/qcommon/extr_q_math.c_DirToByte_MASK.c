
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;


 float FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;

int FUNC_1( vec3_t VAR_2 ) {
 int VAR_3, VAR_4;
 float VAR_5, VAR_6;

 if ( !VAR_2 ) {
  return 0;
 }

 VAR_6 = 0;
 VAR_4 = 0;
 for (VAR_3=0 ; VAR_3<VAR_0 ; VAR_3++)
 {
  VAR_5 = FUNC_0 (VAR_2, VAR_1[VAR_3]);
  if (VAR_5 > VAR_6)
  {
   VAR_6 = VAR_5;
   VAR_4 = VAR_3;
  }
 }

 return VAR_4;
}
