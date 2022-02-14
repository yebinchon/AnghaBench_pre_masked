
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int gentity_t ;
struct TYPE_3__ {int type; int ofs; scalar_t__ name; } ;
typedef TYPE_1__ field_t ;
typedef int byte ;







 char* FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char const*) ;
 float FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (char const*,char*,float*,float*,float*) ;

void FUNC_5( const char *VAR_1, const char *VAR_2, gentity_t *VAR_3 ) {
 field_t *VAR_4;
 byte *VAR_5;
 float VAR_6;
 vec3_t VAR_7;

 for ( VAR_4=VAR_0 ; VAR_4->name ; VAR_4++ ) {
  if ( !FUNC_1(VAR_4->name, VAR_1) ) {

   VAR_5 = (byte *)VAR_3;

   switch( VAR_4->type ) {
   case 129:
    *(char **)(VAR_5+VAR_4->ofs) = FUNC_0 (VAR_2);
    break;
   case 128:
    FUNC_4 (VAR_2, "%f %f %f", &VAR_7[0], &VAR_7[1], &VAR_7[2]);
    ((float *)(VAR_5+VAR_4->ofs))[0] = VAR_7[0];
    ((float *)(VAR_5+VAR_4->ofs))[1] = VAR_7[1];
    ((float *)(VAR_5+VAR_4->ofs))[2] = VAR_7[2];
    break;
   case 130:
    *(int *)(VAR_5+VAR_4->ofs) = FUNC_3(VAR_2);
    break;
   case 131:
    *(float *)(VAR_5+VAR_4->ofs) = FUNC_2(VAR_2);
    break;
   case 132:
    VAR_6 = FUNC_2(VAR_2);
    ((float *)(VAR_5+VAR_4->ofs))[0] = 0;
    ((float *)(VAR_5+VAR_4->ofs))[1] = VAR_6;
    ((float *)(VAR_5+VAR_4->ofs))[2] = 0;
    break;
   }
   return;
  }
 }
}
